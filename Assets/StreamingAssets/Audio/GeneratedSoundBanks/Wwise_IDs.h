/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID PLAY_BGM = 3126765036U;
        static const AkUniqueID PLAY_CHICKENSOUND = 3806973360U;
        static const AkUniqueID PLAY_FOOTSTEPS = 3854155799U;
        static const AkUniqueID PLAY_WIND = 1020223172U;
        static const AkUniqueID STOP_CHICKENSOUND = 712816258U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace AREATYPE
        {
            static const AkUniqueID GROUP = 1190009046U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID ONINITAREA = 3137616467U;
                static const AkUniqueID ONSNOWAREA = 2682142956U;
            } // namespace STATE
        } // namespace AREATYPE

        namespace TUNNEL_REVERB
        {
            static const AkUniqueID GROUP = 3400062578U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OFF = 930712164U;
                static const AkUniqueID ON = 1651971902U;
            } // namespace STATE
        } // namespace TUNNEL_REVERB

    } // namespace STATES

    namespace SWITCHES
    {
        namespace FOOTSTEPS
        {
            static const AkUniqueID GROUP = 2385628198U;

            namespace SWITCH
            {
                static const AkUniqueID CONCRETE = 841620460U;
                static const AkUniqueID DIRT = 2195636714U;
            } // namespace SWITCH
        } // namespace FOOTSTEPS

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID PLAYERSPEED = 1493153371U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAINBANK = 2880737896U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID BGM = 412724365U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID REVERB = 348963605U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID ROOM1REVERB = 2192967153U;
        static const AkUniqueID ROOM2REVERB = 2460247990U;
        static const AkUniqueID TUNNUELREVERB = 1769137926U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
