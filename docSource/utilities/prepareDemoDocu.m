p = currentProject;
docFolder = fullfile(p.RootFolder,'docSource','HTML');
builddocsearchdb(docFolder)
web(fullfile(docFolder,'GettingStarted.html'));
clear p docFolder