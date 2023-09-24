class CfgPatches {
	class WW2_SPE_Water_c {
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
    model = \ww2\SPE_Water\##PATH##MODELNAME##.p3d; \
}

class CfgVehicles {
	class House_F;

    ORIGAMI_CLASS(Pond\,spe_pond1);
    ORIGAMI_CLASS(Pond\,spe_pond2);
	
};
