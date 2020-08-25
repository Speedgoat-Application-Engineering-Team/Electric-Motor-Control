function switchMotorKit(kit)
    switch kit
        case 'TI_Inverter_RCP_Kit'
            dd=Simulink.data.dictionary.open('focDemo_Data.sldd');
            setValue(getEntry(getSection(dd,'Design Data'),'kitType'),2);
            %Update RCP Data Dictionary
            dd=Simulink.data.dictionary.open('focRCP_Data.sldd');
            addDataSource(dd,'TIKitPlantData.sldd');
            addDataSource(dd,'TIKitControllerData.sldd');
            try 
                removeDataSource(dd,'SGKitPlantData.sldd');
                removeDataSource(dd,'SGKitControllerData.sldd');
            catch
                
            end
        
            load_system('FieldOrientedController');
            set_param('FieldOrientedController','DataDictionary','TIKitControllerData.sldd');
            load_system('ModeLogicModule');
            set_param('ModeLogicModule','DataDictionary','TIKitControllerData.sldd');
            load_system('PMSM_MCBS_Model');
            set_param('PMSM_MCBS_Model','DataDictionary','TIKitPlantData.sldd');
            load_system('PMSM_Simscape_Model');
            set_param('PMSM_Simscape_Model','DataDictionary','TIKitPlantData.sldd');

        case 'SG_Inverter_RCP_Kit'
            dd=Simulink.data.dictionary.open('focDemo_Data.sldd');
            setValue(getEntry(getSection(dd,'Design Data'),'kitType'),1  );
            %Update RCP Data Dictionary
            dd=Simulink.data.dictionary.open('focRCP_Data.sldd');
            addDataSource(dd,'SGKitPlantData.sldd');
            addDataSource(dd,'SGKitControllerData.sldd');
            try 
                removeDataSource(dd,'TIKitPlantData.sldd');
                removeDataSource(dd,'TIKitControllerData.sldd');
            catch
                
            end
            
            load_system('FieldOrientedController');
            set_param('FieldOrientedController','DataDictionary','SGKitControllerData.sldd');
            load_system('ModeLogicModule');
            set_param('ModeLogicModule','DataDictionary','SGKitControllerData.sldd');
            load_system('PMSM_MCBS_Model');
            set_param('PMSM_MCBS_Model','DataDictionary','SGKitPlantData.sldd');
            load_system('PMSM_Simscape_Model');
            set_param('PMSM_Simscape_Model','DataDictionary','SGKitPlantData.sldd');
    end
    clear dd
end