D = load('taimoonnoisyRawData.mat');
T = load('taimoonnoisyTruth.mat');

fields = fieldnames(D);
truthField = fieldnames(T);
close all;

replace = [];

time = 0:0.1:170;

for i = 1:length(time)
    for r = 2:length(T.(truthField{1}))
        if (time(i) >= T.(truthField{1})(r-1,1)) && (time(i) <= T.(truthField{1})(r-1,2))
            speech.truth(i) = 1;
%         elseif (time(i) >= T.(truthField{1})(r-1,2)) && (time(i) <= T.(truthField{1})(r,1))
        elseif (time(i) >= T.(truthField{1})(r-1,2))
            speech.truth(i) = 0;
        end
    end
end

figure(1);
hold on;
top = length(fields);
for i = 1:length(T.(truthField{1}))
    plot(T.(truthField{1})(i,:), [top top], 'LineWidth', 2, 'color', 'b');
end
text(1, top+0.5, 'Truth');
counter = top-1;

timer = 0.5:0.5:170;
for i = 1:numel(timer)
    for r = 1:length(T.(truthField{1}))
        if (timer(i) >= T.(truthField{1})(r,1)) && (timer(i) <= T.(truthField{1})(r,2))
            tgraph.truth(i) = 10000;
        elseif (time(i) > T.(truthField{1})(r,2))
            tgraph.truth(i) = 0;
        end
    end
end

figure(2);
hold on;
for mask = 1:3
    subplot(3,1,mask);
    hold on;
    grid on;
    area(timer, tgraph.truth, 'facealpha', .3);
end

for i = 2:3
    figure(i);
    for vp=fields'
        subplot(3,1,1);
        plot(timer, D.(vp{1})(:,3),'m')
        hold on;
        subplot(3,1,2);
        hold on;
        plot(timer, D.(vp{1})(:,4), 'g')
        subplot(3,1,3);
        hold on;
        plot(timer, D.(vp{1})(:,5), 'b')
    end
end
figure(2);
pos1 = get(gcf,'Position'); % get position of Figure(1) 
set(gcf,'Position', pos1 - [pos1(3)/2,0,0,0]) % Shift position of Figure(1) 
subplot(3,1,1);
ylim([0 200]);
title('energy');
refline(0,33);
subplot(3,1,2);
ylim([0 2000]);
title('freq');
refline(0, 775);
subplot(3,1,3);
ylim([0 10000]);
title('sfm');
refline(0, 2500);

%% accuracy
figure(1);
for fn=fields'
    %convert python output to start & stop times
    start = 0;
    for i = 2:length(D.(fn{1}))
        if D.(fn{1})(i, 1) == 1 && D.(fn{1})(i-1, 1) == 0
            start = D.(fn{1})(i, 2);
        elseif D.(fn{1})(i, 1) == 0 && D.(fn{1})(i-1, 1) == 1
            stop = D.(fn{1})(i, 2);
            replace = [replace; start stop];
        end
    end
    D.(fn{1}) = replace;
    
    %get binary speech v nonspeech for accuracy check
    for i = 1:numel(time)
        for r = 1:length(D.(fn{1}))
            if (time(i) >= D.(fn{1})(r,1)) && (time(i) <= D.(fn{1})(r,2))
                speech.(fn{1})(i) = 1;
            elseif (time(i) > D.(fn{1})(r,2))
                speech.(fn{1})(i) = 0;
            end
        end
    end
    comparison.(fn{1}) = speech.(fn{1}) == speech.truth;
    accuracy.(fn{1}) = sum(comparison.(fn{1})) / length(comparison.(fn{1}));
    
    %plot data
    for i = 1:length(D.(fn{1}))
        plot(D.(fn{1})(i,:), [counter counter], 'LineWidth', 2, 'color', 'r');
    end
    text(1, counter+0.5, ['Parameters: ' fn{1} ' Accuracy: ' num2str(accuracy.(fn{1}) * 100) '%'], 'interpreter', 'none');
    counter = counter - 1;
end

ylim([counter top+1])
grid on;

timer = 0.5:0.5:170;
for i = 1:numel(timer)
    for r = 1:length(D.(fn{1}))
        if (timer(i) >= D.(fn{1})(r,1)) && (timer(i) <= D.(fn{1})(r,2))
            tgraph.pred(i) = 10000;
        elseif (time(i) > D.(fn{1})(r,2))
            tgraph.pred(i) = 0;
        end
    end
end
figure(3);
hold on;
for mask = 1:3
    subplot(3,1,mask);
    hold on;
    grid on;
    area(timer, tgraph.pred, 'facealpha', .2);
end

figure(3);
pos1 = get(gcf,'Position'); % get position of Figure(1) 
set(gcf,'Position', pos1 + [pos1(3)/2,0,0,0]) % Shift position of Figure(1) 
subplot(3,1,1);
ylim([0 200]);
title('energy');
refline(0,33);
subplot(3,1,2);
ylim([0 2000]);
title('freq');
refline(0, 775);
subplot(3,1,3);
ylim([0 10000]);
title('sfm');
refline(0, 2500);
% set(gcf,'Position', get(gcf,'Position') + [0,0,150,0]); % When Figure(2) is not the same size as Figure(1)
% pos2 = get(gcf,'Position');  % get position of Figure(2) 
% set(gcf,'Position', pos2 + [pos1(3)/2,0,0,0]) % Shift position of Figure(2)
hold off;
