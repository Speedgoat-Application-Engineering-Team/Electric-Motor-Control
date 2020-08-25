proj = simulinkproject;

fn = dir([proj.RootFolder,'\docSource\liveScripts\*.mlx']);
for ii = 1:length(fn)
    fileName = fn(ii).name;
    liveScriptName = [proj.RootFolder, '\docSource\liveScripts\', fileName];
    htmlName = [proj.RootFolder, '\docSource\HTML\' fileName(1:end-4) '.html'];
    matlab.internal.liveeditor.openAndConvert(liveScriptName,htmlName);
    addFile(proj,htmlName);
end
clear proj fn ii fileName liveScriptName htmlName