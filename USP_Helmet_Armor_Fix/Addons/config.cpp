class CfgPatches {
    class USP_Helmet_Armor_Fix {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = 
		{
			"USP_Gear_Head"
		};
    };
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
    class HeadgearItem: InventoryItem_Base_F{};
	class H_HelmetB: ItemCore
    {
        class ItemInfo: HeadgearItem{};
    };
	//airframes
	class USP_CRYE_AIRFRAME: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CM: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGU: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWGUV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMWV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGU: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMGUV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CMV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CP: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CPC3: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CT3: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGU: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWGUTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_CWV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GU: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUI: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUIS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUISV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUIT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUITV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUIV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_GUV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IR: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IRS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IRSV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IRT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IRTV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_IRV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_SF: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_SFV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_TL: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_TLV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_AIRFRAME_VL: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	//mich2000
    class USP_MICH_TC2000: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
    class USP_MICH_TC2000_CT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CM: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_PH_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_RM_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_RM_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_IR_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PH_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_CB_PH_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PH_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PS_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_PH_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM_PS_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM_SF_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GB_SF_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_PH_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_PS_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_SF_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR_NS_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_IR_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_NS_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_NS_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_NS_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_PH_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_PS_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_SF_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GC_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GG: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_GU: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_LP: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_IR_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC_IB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GC_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IB: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IB_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IB_RM_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IB_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IR: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_IR_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_GB_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IB: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IB_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IB_RM_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IB_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IR: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_IR_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_NS: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_NS_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_RM: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_RM_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GG_VL: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IB_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IB_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IR_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IR_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_IR_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_GU_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IB_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IB_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IR_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IR_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_IR_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IB_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IB_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IB_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IR_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IR_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_IR_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_LP_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_NS_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_RM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PC_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_CM_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_GB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_GC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_GG: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_GU: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_IB: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_IR: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_LP: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_MC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_NS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_PC: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_PH: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_PS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_RM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_SF: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_CT_VL: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_GB: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_GC: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_GG: H_HelmetB
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_GU: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_IB: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_IR: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_LP: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_MC: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_NS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_PC: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_PH: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_PS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_RM: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_S2: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_S3: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_SF: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_MICH_TC2000_VL: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_HEAD_MICH_TC2002_TAN: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	//opscore fast 
	class USP_OPSCORE_FASTMT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_M: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MG: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MGW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MGSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_M: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MG: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MGW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MGS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MGSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MGTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_C: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CMTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CGW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_W: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_G: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_GW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_GS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_GSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_GT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_GTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_S: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_SW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_T: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_TW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_C: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CMTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CGW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_CGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_CTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_W: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_M: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MG: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MGW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MGS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MGSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MGT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_C: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CM: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CG: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CGS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CGSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CGT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CGTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CS: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CSW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CGW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CMTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_W: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MGTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_MW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMTC_MGT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MGTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MGT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_MGS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_CTW: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_FULL: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_FULL_C: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_G: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_GW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_GS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_GSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_GT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_GTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_S: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_SW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_T: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_FCV_TW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_G: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_GW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_GS: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_GSW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_GT: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_GTW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_S: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_SW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_T: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPSCORE_FASTMT_TW: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_CO: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_CT: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_CU: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_HEAD_RBH_ATTACK_TAN: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_01: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_02: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_03: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_04: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_05: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_06: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_07: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class USP_OPS_FASTXP_BLK_MC_08: H_HelmetB
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		class ItemInfo: ItemInfo
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
};