class CfgPatches {
    class anrop_ace_tf47_compat {
        name = "anrop_ace_tf47_compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_common", "tf47_launchers", "tf47_m3maaws", "tf47_smaw"};
        addonRootClass = "tf47_launchers";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons
{
    class Launcher_Base_F;

    class tf47_m3maaws: Launcher_Base_F
    {
        ace_reloadlaunchers_enabled = 1;
    };

    class tf47_smaw: Launcher_Base_F
    {
        ace_reloadlaunchers_enabled = 1;
    };
};
