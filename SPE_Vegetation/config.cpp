class CfgPatches {
	class WW2_SPE_Vegetation_Bocage_c {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Structures_F"
		};
	};
};

#define ORIGAMI_CLASS(PATH,MODELNAME) \
class land_##MODELNAME : House_F { \
    scope = 1; \
    model = \WW2\SPE_Vegetation\##PATH##MODELNAME##.p3d; \
}

class CfgVehicles {
	class House_F;

    ORIGAMI_CLASS(Bocage\,SPE_Mound_Long_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Long);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Short_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Short);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_End_01_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_End_01);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_End_02_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_End_02);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Low_01_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Low_01);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Low_02_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Mound_Low_02);
    ORIGAMI_CLASS(Bocage\,spe_bocage_long_mound_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_long_mound_exp_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_long_mound_rn_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_short_mound_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_short_mound_exp_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_short_mound_rn_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_01_mound_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_01_mound_exp_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_01_mound_rn_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_02_mound_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_02_mound_exp_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_02_mound_rn_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_03_mound_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_03_mound_exp_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_03_mound_rn_lc);
    ORIGAMI_CLASS(Bocage\,spe_bocage_long_mound);
    ORIGAMI_CLASS(Bocage\,spe_bocage_short_mound);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_01_mound);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_02_mound);
    ORIGAMI_CLASS(Bocage\,spe_bocage_tree_03_mound);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Long_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Long);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Short_LC);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Short);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_01_LC);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_01);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_02_LC);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_02);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_03_LC);
    ORIGAMI_CLASS(Bocage\,SPE_bocage_tree_03);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Low_Long);
    ORIGAMI_CLASS(Bocage\,SPE_Bocage_Low_Short);
	
};
