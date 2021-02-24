kitList = {'Old Kit','New Kit'};
[indx,tf] = listdlg('PromptString',{'Select Kit Type',...
    'Select Only One Kit.',''},...
    'SelectionMode','single','ListString',kitList);
AliaskitList = {'TI_Inverter_RCP_Kit','SG_Inverter_RCP_Kit'};
if tf
    switchMotorKit(AliaskitList{indx});
end
clear kitList tf indx