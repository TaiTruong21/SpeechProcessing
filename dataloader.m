% Specify the folder where the files live.
myFolder = 'C:/Users/nihar/Documents/UCSD/Lab/SpeechProcessing/sancDetect';
saveName = "sancRawData.mat";
if (isfile(saveName))
    pBase = "%s already exists, do you want to overwrite? y/n [Y]\n";
    prompt = sprintf(pBase, saveName);
    x = input(prompt,'s');
     if (x == 'y')
        delete(saveName);
     elseif isempty(x)
         delete(saveName);
    else
        fprintf('Quitting loader\n');
        return;
    end
end

% Check to make sure that folder actually exists.  Warn user if it doesn't.
if ~isfolder(myFolder)
  errorMessage = sprintf('Error: The following folder does not exist:\n%s', myFolder);
  uiwait(warndlg(errorMessage));
  return;
end
% Get a list of all files in the folder with the desired file name pattern.
filePattern = fullfile(myFolder, '*.csv'); % Change to whatever pattern you need.
theFiles = dir(filePattern);

for k = 1 : length(theFiles)
  baseFileName = theFiles(k).name;
  fullFileName = fullfile(myFolder, baseFileName);
  fprintf(1, 'Now reading %s\n', fullFileName);
  varName = baseFileName(1:end-4);
  expression = [varName ' = importdata(''' fullFileName ''')'];
  eval(expression);
  if (isfile(saveName))
      save(saveName, varName, '-append');
  else
      save(saveName, varName);
  end
end