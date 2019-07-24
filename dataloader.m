% Specify the folder where the files live.
dataFolder = 'C:/Users/nihar/Documents/UCSD/Lab/SpeechProcessing/TaiMoonNoisyDetect';
dataName = "taimoonnoisyRawData.mat";
truthFolder = 'C:/Users/nihar/Documents/UCSD/Lab/SpeechProcessing/';
truthName = "taimoonnoisyTruth.mat";
truthFile = 'TaiMoonNoiseTruthLaughAsSpeech.csv';
if (isfile(dataName))
    pBase = "%s already exists, do you want to overwrite? y/n [Y]\n";
    prompt = sprintf(pBase, dataName);
    x = input(prompt,'s');
    if (x == 'y')
       delete(dataName);
    elseif isempty(x)
        delete(dataName);
    else
        fprintf('Quitting loader\n');
        return;
    end
end

if (isfile(truthName))
    pBase = "%s already exists, do you want to overwrite? y/n [Y]\n";
    prompt = sprintf(pBase, truthName);
    x = input(prompt,'s');
    if (x == 'y')
       delete(truthName);
    elseif isempty(x)
        delete(truthName);
    else
        fprintf('Quitting loader\n');
        return;
    end
end

% Check to make sure that folder actually exists.  Warn user if it doesn't.
if ~isfolder(dataFolder)
  errorMessage = sprintf('Error: The following folder does not exist:\n%s', dataFolder);
  uiwait(warndlg(errorMessage));
  return;
end

if ~isfolder(truthFolder)
  errorMessage = sprintf('Error: The following folder does not exist:\n%s', truthFolder);
  uiwait(warndlg(errorMessage));
  return;
end
% Get a list of all files in the folder with the desired file name pattern.
dataFilePattern = fullfile(dataFolder, '*.csv'); % Change to whatever pattern you need.
dataFiles = dir(dataFilePattern);

truthFilePath = fullfile(truthFolder, truthFile); % Change to whatever pattern you need.
truthFileDir = dir(truthFilePath);
fprintf(1, 'Now reading %s\n', truthFileDir(1).name);
varName = truthFileDir(1).name(1:end-4);
expression = [varName ' = importdata(''' truthFilePath ''')'];
eval(expression);
save(truthName, varName);

for k = 1 : length(dataFiles)
  baseFileName = dataFiles(k).name;
  fullFileName = fullfile(dataFolder, baseFileName);
  fprintf(1, 'Now reading %s\n', fullFileName);
  varName = baseFileName(1:end-4);
  expression = [varName ' = importdata(''' fullFileName ''')'];
  eval(expression);
  if (isfile(dataName))
      save(dataName, varName, '-append');
  else
      save(dataName, varName);
  end
end