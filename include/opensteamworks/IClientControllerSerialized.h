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

#ifndef ICLIENTCONTROLLERSERIALIZED_H
#define ICLIENTCONTROLLERSERIALIZED_H
#ifdef _WIN32
#pragma once
#endif

#include "SteamTypes.h"

abstract_class IClientControllerSerialized
{
public:
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    // WARNING: Do not use this function! Unknown behaviour will occur!
    virtual unknown_ret Unknown_0_DONTUSE() = 0; //argc: -1, index 1
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    // WARNING: Do not use this function! Unknown behaviour will occur!
    virtual unknown_ret Unknown_1_DONTUSE() = 0; //argc: -1, index 2
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ShowBindingPanel() = 0; //argc: 3, index 3
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerTypeForHandle() = 0; //argc: 2, index 4
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGamepadIndexForHandle() = 0; //argc: 2, index 5
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetHandleForGamepadIndex() = 0; //argc: 1, index 6
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActionSetHandle() = 0; //argc: 2, index 7
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActionSetHandleByTitle() = 0; //argc: 2, index 8
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ActivateActionSet() = 0; //argc: 5, index 9
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ActivateActionSetLayer() = 0; //argc: 5, index 10
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DeactivateActionSetLayer() = 0; //argc: 5, index 11
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DeactivateAllActionSetLayers() = 0; //argc: 3, index 12
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActiveActionSetLayers() = 0; //argc: 4, index 13
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetDigitalActionHandle() = 0; //argc: 3, index 14
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetAnalogActionHandle() = 0; //argc: 3, index 15
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret StopAnalogActionMomentum() = 0; //argc: 4, index 16
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret EnableDeviceCallbacks() = 0; //argc: 1, index 17
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetStringForDigitalActionName() = 0; //argc: 5, index 18
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetStringForAnalogActionName() = 0; //argc: 5, index 19
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BCheckGameDirectoryAndReloadConfigIfNecessary() = 0; //argc: 3, index 20
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActionManifestPath() = 0; //argc: 1, index 21
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActionManifestPath() = 0; //argc: 2, index 22
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DumpConfigurationToDisk() = 0; //argc: 1, index 23
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret FlushCloudedConfigFilesToDisk() = 0; //argc: 0, index 24
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret StartBindingVisualization() = 0; //argc: 3, index 25
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret StopBindingVisualization() = 0; //argc: 2, index 26
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetNumConnectedControllers() = 0; //argc: 0, index 27
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetAllControllersStatus() = 0; //argc: 1, index 28
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerDetails() = 0; //argc: 1, index 29
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret FactoryReset() = 0; //argc: 1, index 30
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetDefaultConfig() = 0; //argc: 1, index 31
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CalibrateTrackpads() = 0; //argc: 1, index 32
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CalibrateJoystick() = 0; //argc: 1, index 33
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CalibrateIMU() = 0; //argc: 1, index 34
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetAudioMapping() = 0; //argc: 2, index 35
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret PlayAudio() = 0; //argc: 2, index 36
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ResetStickExtents() = 0; //argc: 1, index 37
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BIsStreamingController() = 0; //argc: 1, index 38
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetUserLedColor() = 0; //argc: 4, index 39
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetRumble() = 0; //argc: 5, index 40
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetRumbleExtended() = 0; //argc: 7, index 41
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret IdentifyControllerRumbleEffect() = 0; //argc: 1, index 42
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGyroAutoCalibrate() = 0; //argc: 2, index 43
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret RequestGyroActive() = 0; //argc: 3, index 44
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGyroCalibrating() = 0; //argc: 2, index 45
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret LoadConfigFromVDFString() = 0; //argc: 7, index 46
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret InvalidateBindingCache() = 0; //argc: 0, index 47
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ActivateConfig() = 0; //argc: 2, index 48
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret WarmOptInStatus() = 0; //argc: 2, index 49
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetCurrentActionSetHandleForRunningApp() = 0; //argc: 2, index 50
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BAnyControllerOptedInAndAvailable() = 0; //argc: 1, index 51
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGamepadIndexForControllerIndex() = 0; //argc: 1, index 52
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CreateBindingInstanceFromVDFString() = 0; //argc: 1, index 53
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret FreeBindingInstance() = 0; //argc: 1, index 54
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerConfiguration() = 0; //argc: 2, index 55
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerActionSet() = 0; //argc: 3, index 56
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerSourceMode() = 0; //argc: 3, index 57
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DuplicateControllerSourceMode() = 0; //argc: 3, index 58
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerInputActivator() = 0; //argc: 3, index 59
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerInputBinding() = 0; //argc: 3, index 60
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerInputActivatorEnabled() = 0; //argc: 3, index 61
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerMiscMappingSettings() = 0; //argc: 3, index 62
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SwapControllerModeInputBindings() = 0; //argc: 3, index 63
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerModeShiftBinding() = 0; //argc: 3, index 64
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret IsModified() = 0; //argc: 1, index 65
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ClearModified() = 0; //argc: 1, index 66
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLocalizationTokenCount() = 0; //argc: 1, index 67
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLocalizationToken() = 0; //argc: 3, index 68
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLocalizedString() = 0; //argc: 2, index 69
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingSetting() = 0; //argc: 3, index 70
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingSetting() = 0; //argc: 3, index 71
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingVDFString() = 0; //argc: 1, index 72
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetSourceGroupBindingCount() = 0; //argc: 2, index 73
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetSourceGroupBindingInfo() = 0; //argc: 5, index 74
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetSourceGroupBindingActive() = 0; //argc: 5, index 75
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CreateSourceGroupBinding() = 0; //argc: 6, index 76
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BAreLayerAndParentModesEquivalent() = 0; //argc: 3, index 77
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGroupSetting() = 0; //argc: 4, index 78
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGroupSetting() = 0; //argc: 4, index 79
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGroupSettingDefault() = 0; //argc: 4, index 80
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGroupSettingUIRange() = 0; //argc: 5, index 81
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActivatorSetting() = 0; //argc: 6, index 82
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetActivatorSetting() = 0; //argc: 6, index 83
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActivatorSettingDefault() = 0; //argc: 6, index 84
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGroupBinding() = 0; //argc: 7, index 85
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGroupBinding() = 0; //argc: 7, index 86
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret RemoveGroupBinding() = 0; //argc: 4, index 87
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetParentGroupForLayerGroup() = 0; //argc: 3, index 88
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetParentPresetForLayerPreset() = 0; //argc: 3, index 89
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGroupActivatorsForInput() = 0; //argc: 4, index 90
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ReplaceActivator() = 0; //argc: 5, index 91
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret AddActivator() = 0; //argc: 3, index 92
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret RemoveActivator() = 0; //argc: 4, index 93
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CopyActivator() = 0; //argc: 5, index 94
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret IsActivatorSettingsDefault() = 0; //argc: 4, index 95
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetModeShiftBinding() = 0; //argc: 5, index 96
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetModeShiftBinding() = 0; //argc: 6, index 97
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret AddActionSet() = 0; //argc: 2, index 98
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret RenameActionSet() = 0; //argc: 2, index 99
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DeleteActionSet() = 0; //argc: 2, index 100
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingTitle() = 0; //argc: 2, index 101
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingTitle() = 0; //argc: 2, index 102
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingDescription() = 0; //argc: 2, index 103
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingRevision() = 0; //argc: 3, index 104
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BBindingMajorRevisionMismatch() = 0; //argc: 1, index 105
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingDescription() = 0; //argc: 2, index 106
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingTitleForIndex() = 0; //argc: 4, index 107
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingDescForIndex() = 0; //argc: 4, index 108
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingTypeForIndex() = 0; //argc: 2, index 109
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetConfigBindingInfo() = 0; //argc: 2, index 110
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingControllerType() = 0; //argc: 2, index 111
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingControllerType() = 0; //argc: 1, index 112
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingCreator() = 0; //argc: 3, index 113
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingCreator() = 0; //argc: 1, index 114
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingProgenitor() = 0; //argc: 1, index 115
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingProgenitor() = 0; //argc: 2, index 116
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingURL() = 0; //argc: 1, index 117
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingURL() = 0; //argc: 2, index 118
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBindingExportType() = 0; //argc: 1, index 119
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetBindingExportType() = 0; //argc: 2, index 120
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetConfigFeatures() = 0; //argc: 2, index 121
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetAllBindings() = 0; //argc: 3, index 122
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BIsXInputActiveForController() = 0; //argc: 1, index 123
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret PS4SettingsChanged() = 0; //argc: 1, index 124
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SwitchSettingsChanged() = 0; //argc: 1, index 125
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ControllerSettingsChanged() = 0; //argc: 1, index 126
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetTrackpadPressureCurve() = 0; //argc: 3, index 127
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetDefaultNintendoButtonLayout() = 0; //argc: 1, index 128
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret IsControllerConnected() = 0; //argc: 2, index 129
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerState() = 0; //argc: 2, index 130
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret TriggerHapticPulse() = 0; //argc: 6, index 131
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret TriggerSimpleHapticEvent() = 0; //argc: 5, index 132
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret TriggerVibration() = 0; //argc: 4, index 133
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret TriggerVibrationExtended() = 0; //argc: 6, index 134
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetLEDColor() = 0; //argc: 5, index 135
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetDonglePairingMode() = 0; //argc: 2, index 136
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ReserveSteamController() = 0; //argc: 0, index 137
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CancelSteamControllerReservations() = 0; //argc: 0, index 138
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret OpenStreamingSession() = 0; //argc: 2, index 139
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CloseStreamingSession() = 0; //argc: 2, index 140
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret UpdateStreamingSessionInputPermissions() = 0; //argc: 1, index 141
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret InitiateISPFirmwareUpdate() = 0; //argc: 1, index 142
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret InitiateBootloaderFirmwareUpdate() = 0; //argc: 1, index 143
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret FlashControllerFirmware() = 0; //argc: 4, index 144
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret TurnOffController() = 0; //argc: 1, index 145
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret EnumerateControllers() = 0; //argc: 0, index 146
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerStatusEvent() = 0; //argc: 2, index 147
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetActualControllerDetails() = 0; //argc: 2, index 148
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerIdentity() = 0; //argc: 2, index 149
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerPersonalization() = 0; //argc: 2, index 150
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerReverseDiamondLayout() = 0; //argc: 1, index 151
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BRumbleEnabledByUser() = 0; //argc: 1, index 152
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BHapticsEnabledByUser() = 0; //argc: 1, index 153
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerSerialNumber() = 0; //argc: 3, index 154
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerChipID() = 0; //argc: 3, index 155
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSupportsControllerLEDBrightness() = 0; //argc: 1, index 156
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSupportsControllerLEDColor() = 0; //argc: 1, index 157
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSupportsControllerRumble() = 0; //argc: 1, index 158
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSupportsControllerHaptics() = 0; //argc: 1, index 159
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerPairingConnectionState() = 0; //argc: 2, index 160
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerKeyboardMouseState() = 0; //argc: 2, index 161
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetTouchKeysForPopupMenu() = 0; //argc: 4, index 162
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret PopupMenuTouchKeyClicked() = 0; //argc: 3, index 163
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret AccessControllerInputGeneratorMouseButton() = 0; //argc: 3, index 164
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGameActionSets() = 0; //argc: 2, index 165
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetBaseGameActionSets() = 0; //argc: 2, index 166
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLayerGameActionSets() = 0; //argc: 2, index 167
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGameActionSetById() = 0; //argc: 2, index 168
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerSetting() = 0; //argc: 2, index 169
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetEmulatedOutputState() = 0; //argc: 0, index 170
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetSelectedConfigForApp() = 0; //argc: 7, index 171
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BControllerHasUniqueConfigForAppID() = 0; //argc: 2, index 172
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret DeRegisterController() = 0; //argc: 2, index 173
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SendOSKeyboardEvent() = 0; //argc: 1, index 174
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetOSKeyboardKey() = 0; //argc: 2, index 175
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetMousePosition() = 0; //argc: 3, index 176
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGamepadIndexChangeCounter() = 0; //argc: 0, index 177
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSwapGamepadIndex() = 0; //argc: 3, index 178
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGamepadIndexForXInputIndex() = 0; //argc: 1, index 179
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerIndexForGamepadIndex() = 0; //argc: 1, index 180
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetNumControllersWithDetails() = 0; //argc: 0, index 181
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ConvertBindingToNewControllerType() = 0; //argc: 2, index 182
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerActiveAccount() = 0; //argc: 2, index 183
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret StartControllerRegistrationToAccount() = 0; //argc: 2, index 184
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CompleteControllerRegistrationToAccount() = 0; //argc: 2, index 185
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret AutoRegisterControllerRegistrationToAccount() = 0; //argc: 2, index 186
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetConfigForAppAndController() = 0; //argc: 4, index 187
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerPersonalization() = 0; //argc: 4, index 188
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetPersonalizationFile() = 0; //argc: 4, index 189
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGameWindowPos() = 0; //argc: 4, index 190
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetGameWindowPos() = 0; //argc: 4, index 191
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret HasGameMapping() = 0; //argc: 1, index 192
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerUsageData() = 0; //argc: 2, index 193
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BAllowAppConfigForController() = 0; //argc: 2, index 194
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ResetControllerEnableCache() = 0; //argc: 0, index 195
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerEnableSupport() = 0; //argc: 1, index 196
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BInputGenerated() = 0; //argc: 0, index 197
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerActivityByType() = 0; //argc: 1, index 198
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLastActiveControllerVID() = 0; //argc: 0, index 199
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetLastActiveControllerPID() = 0; //argc: 0, index 200
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret LoadControllerPersonalizationFile() = 0; //argc: 4, index 201
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SaveControllerPersonalizationFile() = 0; //argc: 4, index 202
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret LoadRemotePlayControllerPersonalizationVDF() = 0; //argc: 2, index 203
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret FindControllerByPath() = 0; //argc: 1, index 204
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerPath() = 0; //argc: 2, index 205
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret GetControllerProductName() = 0; //argc: 2, index 206
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerHapticsSetting() = 0; //argc: 2, index 207
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerRumbleSetting() = 0; //argc: 2, index 208
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetControllerNintendoLayoutSetting() = 0; //argc: 2, index 209
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BGetTouchConfigData() = 0; //argc: 6, index 210
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret BSaveTouchConfigLayout() = 0; //argc: 3, index 211
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret SetGyroOn() = 0; //argc: 3, index 212
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret CursorVisibilityChanged() = 0; //argc: 1, index 213
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual unknown_ret ForceSimpleHapticEvent() = 0; //argc: 5, index 214
};

#endif // ICLIENTCONTROLLERSERIALIZED_H