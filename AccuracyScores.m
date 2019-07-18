T = load('tests.mat');
fields = fieldnames(T);

time = 0:0.1:70;
for fn=fields'
    for i = 1:numel(time)
        for r = 1:length(T.(fn{1}))
            if (time(i) >= T.(fn{1})(r,1)) && (time(i) <= T.(fn{1})(r,2))
                speech.(fn{1})(i) = 1;
            elseif (time(i) > T.(fn{1})(r,2))
                speech.(fn{1})(i) = 0;
            end
        end
    end
    comparison.(fn{1}) = speech.(fn{1}) == speech.t1truth;
    accuracy.(fn{1}) = sum(comparison.(fn{1})) / length(comparison.(fn{1}));
end

