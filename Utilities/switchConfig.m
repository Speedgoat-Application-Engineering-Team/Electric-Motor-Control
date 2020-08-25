function switchConfig(cfg)
    switch (cfg)
        case 'RCP'
            load_system('FieldOrientedController_RCP');
            setActiveConfigSet('FieldOrientedController_RCP','SLRT');
            load_system('FieldOrientedController');
            setActiveConfigSet('FieldOrientedController','SLRT');
            save_system('FieldOrientedController_RCP',[],'SaveDirtyReferencedModels','on');
        case 'EC'
            load_system('FieldOrientedController_F28069');
            setActiveConfigSet('FieldOrientedController_F28069','EC');
            load_system('FieldOrientedController');
            setActiveConfigSet('FieldOrientedController','EC');
            save_system('FieldOrientedController_F28069',[],'SaveDirtyReferencedModels','on');
        case 'MIL'
            load_system('FieldOrientedController_MIL');
            setActiveConfigSet('FieldOrientedController_MIL','Sim');
            load_system('FieldOrientedController');
            setActiveConfigSet('FieldOrientedController','Sim');
            load_system('PMSM_MCBS_Model');
            setActiveConfigSet('PMSM_MCBS_Model','Sim');
            load_system('PMSM_Simscape_Model'); 
            setActiveConfigSet('PMSM_Simscape_Model','Sim');
            save_system('FieldOrientedController_MIL',[],'SaveDirtyReferencedModels','on');
        case 'HIL'
            load_system('FieldOrientedController_HIL');
            setActiveConfigSet('FieldOrientedController_HIL','SLRT');
            load_system('PMSM_MCBS_Model');
            setActiveConfigSet('PMSM_MCBS_Model','SLRT');
            load_system('PMSM_Simscape_Model'); 
            setActiveConfigSet('PMSM_Simscape_Model','SLRT');
            save_system('FieldOrientedController_HIL',[],'SaveDirtyReferencedModels','on');
        otherwise
            error('Select Configuration Options from MIL, HIL, RCP, EC');
    end
end