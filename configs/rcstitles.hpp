//GUI
	class playerStatusGUI {
        idd = 6900;
        movingEnable = 0;
        duration = 100000;
        name = "statusBorder";
        onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
        class ControlsBackground {
			//FOOD BACKGROUND
            class RscPicture_1901: RscPictureGUI
            {
                idc = 1901;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;//2
                w = 0.075;
                h = 0.10;
            };
			//FOOD BORDER
            class RscPicture_1201: RscPictureGUI
            {
                idc = 1201;
                text = "IMG\GUI\status\status_food_border_ca.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;//2
                w = 0.075;
                h = 0.10;
            };
			//BLOOD BACKGROUND
            class RscPicture_1900: RscPictureGUI
            {
                idc = 1900;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; //3
                w = 0.075;
                h = 0.10;
            };
			//BLOOD BORDER
            class RscPicture_1200: RscPictureGUI
            {
                idc = 1200;
                text = "IMG\GUI\status\status_blood_border_ca.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93* safezoneH + safezoneY; //3
                w = 0.075;
                h = 0.10;
            };
			//THIRST BACKGROUND
            class RscPicture_1902: RscPictureGUI
            {
                idc = 1902;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; //1
                w = 0.075;
                h = 0.10;
            };
			//THIRST BORDER
            class RscPicture_1202: RscPictureGUI
            {
                idc = 1202;
                text = "IMG\GUI\status\status_thirst_border_ca.paa";
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; //1
                w = 0.075;
                h = 0.10;
            };
			//TEMP BACKGROUND
            class RscPicture_1908: RscPictureGUI
            {
                idc = 1908;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; //3
                w = 0.075;
                h = 0.10;
            };
			//TEMP BORDER
            class RscPicture_1208: RscPictureGUI
            {
                idc = 1208;
                text = "IMG\GUI\status\status_temp_outside_ca.paa";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; //3
                w = 0.075;
                h = 0.10;
            };
			//BROKEN LEG
            class RscPicture_1203: RscPictureGUI
            {
                idc = 1203;
                text = "IMG\GUI\status\status_effect_brokenleg.paa";
                x = 0.810 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
                colorText[] = {1,1,1,1};
            };
			//NOISE BACKGROUND
            class RscPicture_1205: RscPictureGUI
            {
                idc = 1205;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.960 * safezoneW + safezoneX;
                y = 0.825 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//VISIBLE BACKGROUND
            class RscPicture_1206: RscPictureGUI
            {
                idc = 1206;
                text = "IMG\GUI\status\status_bg.paa";
                x = 0.960 * safezoneW + safezoneX;
                y = 0.875 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            /*--------------------------------------------*/
            //SURVIVOR ICON
			class RscPicture_1307: RscPictureGUI
            {
                idc = 1307;
                text = "IMG\GUI\status\st_humanity_survivor.paa";
                x = 0.670 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
            };
			//BANDIT ICON
            class RscPicture_1309: RscPictureGUI
            {
                idc = 1309;
                text = "IMG\GUI\status\st_humanity_bandit.paa";
                x = 0.713 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
            };
			//ZOMBIE ICON
            class RscPicture_1310: RscPictureGUI
            {
                idc = 1310;
                text = "IMG\GUI\status\zombie.paa";
                x = 0.756 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
            };
        };
        class Controls {
			//FOOD ICON
            class RscPicture_1301: RscPictureGUI
            {
                idc = 1301;
                //text = "IMG\GUI\status\status_food_inside_ca.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//BLOOD ICON
            class RscPicture_1300: RscPictureGUI
            {
                idc = 1300;
                //text = "IMG\GUI\status\status_blood_inside_ca.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//THIRST ICON
            class RscPicture_1302: RscPictureGUI
            {
                idc = 1302;
                //text = "IMG\GUI\status\status_thirst_inside_ca.paa";
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//TEMP ICON
            class RscPicture_1306: RscPictureGUI
            {
                idc = 1306;
                //text = "IMG\GUI\status\status_temp_ca.paa";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//BLOOD ICON - BLEEDING
            class RscPicture_1303: RscPictureGUI
            {
                idc = 1303;
                text = "IMG\GUI\status\status_bleeding_ca.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
                colorText[] = {1,1,1,0.5};
            };
			//NOISE ICON
            class RscPicture_1304: RscPictureGUI
            {
                idc = 1304;
                text = "IMG\GUI\status\status_noise.paa";
                x = 0.960 * safezoneW + safezoneX;
                y = 0.825 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
			//VISIBLE ICON
            class RscPicture_1305: RscPictureGUI
            {
                idc = 1305;
                text = "IMG\GUI\status\status_visible.paa";
                x = 0.960 * safezoneW + safezoneX;
                y = 0.875 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            /*-----------------------------------------------*/
            //SURVIVOR KILLS
			class RscText_1400: RscTextGUIK
            {
                idc = 1400;
                text = "1000";
                x = 0.683 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//BANDIT KILLS
            class RscText_1402: RscTextGUIK
            {
                idc = 1402;
                text = "1000";
                x = 0.726 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//ZOMBIE KILLS
            class RscText_1403: RscTextGUIK
            {
                idc = 1403;
                text = "1000";
                x = 0.769 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//BLOOD AMOUNT
			class RscText_1420: RscTextGUIK
            {
                idc = 1420;
                text = "1000";
                x = 0.915 * safezoneW + safezoneX;
                y = 0.842 * safezoneH + safezoneY;
                w = 0.040 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {0.8,0.07,0.06,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//HUMANITY AMOUNT
			class RscText_1421: RscTextGUIK
            {
                idc = 1421;
                text = "1000";
                x = 0.915 * safezoneW + safezoneX;
                y = 0.862 * safezoneH + safezoneY;
                w = 0.040 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//BLOOD LABEL
			class RscText_1423: RscTextGUIK
            {
                idc = 1423;
                text = "Blood:";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.842 * safezoneH + safezoneY;
                w = 0.08 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
			//HUMANITY LABEL
			class RscText_1424: RscTextGUIK
            {
                idc = 1424;
                text = "Humanity:";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.862 * safezoneH + safezoneY;
                w = 0.08 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
        };
	};	