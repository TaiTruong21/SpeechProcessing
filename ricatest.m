files = {'chirp.mat'
        'gong.mat'
        'handel.mat'
        'laughter.mat'
        'splat.mat'
        'train.mat'};

S = zeros(10000,6);
for i = 1:6
    test     = load(files{i});
    y        = test.y(1:10000,1);
    S(:,i)   = y;
end

rng default % For reproducibility
mixdata = S*randn(6) + randn(1,6);
% 
% for i = 1:6
%     disp(i);
%     sound(S(:,i));
%     pause;
% end
% 
% for i = 1:6
%     disp(i);
%     sound(mixdata(:,i));
%     pause;
% end

figure(1);
f = figure(1);
f.WindowState = 'maximized';
for i = 1:6
    subplot(2,6,i)
    plot(S(:,i))
    title(['Sound ',num2str(i)])
    subplot(2,6,i+6)
    plot(mixdata(:,i))
    title(['Mix ',num2str(i)])
end

mixdata = prewhiten(mixdata);

