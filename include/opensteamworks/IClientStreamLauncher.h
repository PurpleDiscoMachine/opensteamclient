//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ICLIENTSTREAMLAUNCHER_H
#define ICLIENTSTREAMLAUNCHER_H
#ifdef _WIN32
#pragma once
#endif

#include "SteamTypes.h"
#include "StreamLauncherCommon.h"

abstract_class IClientStreamLauncher
{
public:
    virtual EStreamLauncherResult StartStreaming( const char *cszFilePath ) = 0; //argc: 1, index 1
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual void StopStreaming() = 0; //argc: 0, index 2
};

#endif // ICLIENTSTREAMLAUNCHER_H