figure(1)
close all;
hold on;
for i = 1:length(t1truth)
    plot(t1truth(i,:), [0 0], 'LineWidth', 2, 'Color', 'r')
end
for i = 1:length(test1pred)
    plot(test1pred(i,:), [1 1], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test2pred)
    plot(test2pred(i,:), [2 2], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test3pred)
    plot(test3pred(i,:), [3 3], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test4pred)
    plot(test4pred(i,:), [4 4], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test5pred)
    plot(test5pred(i,:), [5 5], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test6pred)
    plot(test6pred(i,:), [6 6], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test7pred)
    plot(test7pred(i,:), [7 7], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test8pred)
    plot(test8pred(i,:), [8 8], 'LineWidth', 2, 'Color', 'b')
end
for i = 1:length(test9pred)
    plot(test9pred(i,:), [9 9], 'LineWidth', 2, 'Color', 'b')
end

legend({'GT', ... 
    'framesize 0.5 ethresh 40 fThresh 185 sfmThresh 5', ...
    'framesize 0.3 ethresh 40 fThresh 185 sfmThresh 5', ...
    'framesize 0.7 ethresh 40 fThresh 185 sfmThresh 5', ...
    'framesize 0.5 ethresh 35 fThresh 185 sfmThresh 5', ...
    'framesize 0.5 ethresh 45 fThresh 185 sfmThresh 5', ...
    'framesize 0.5 ethresh 40 fThresh 175 sfmThresh 5', ...
    'framesize 0.5 ethresh 40 fThresh 195 sfmThresh 5', ...
    'framesize 0.5 ethresh 40 fThresh 185 sfmThresh 3', ...
    'framesize 0.5 ethresh 40 fThresh 185 sfmThresh 7'}, ...
    'Location', 'southeastoutside');
ylabel(['Trial']);
xlabel(['Time (s)']);
title('Comparision of speech detector predictions vs ground truth');
hold off
grid on