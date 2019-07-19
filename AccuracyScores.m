D = load('sancRawData.mat');
T = load('sancTruth.mat');

fields = fieldnames(D);
close all;

replace = [];

time = 0:0.1:120;

for i = 1:numel(time)
    for r = 1:length(T.AAAsancTruth)
        if (time(i) >= T.AAAsancTruth(r,1)) && (time(i) <= T.AAAsancTruth(r,2))
            speech.truth(i) = 1;
        elseif (time(i) > T.AAAsancTruth(r,2))
            speech.truth(i) = 0;
        end
    end
end

hold on;

top = length(fields)-1;
for i = 1:length(T.AAAsancTruth)
    plot(T.AAAsancTruth(i,:), [top top], 'LineWidth', 2, 'color', 'b');
end
text(1, top+0.5, 'Truth');

counter = top-1;
for fn=fields'
    %convert python output to start & stop times
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
hold off;
