#include "rom.h"

ROMINFO g_PicRom[] =
{
    {g_PicRom_CommStatus,             g_CommStatusRomLen                },//Page Inxex...0
    {g_PicRom_CommStatusHelp,         g_CommStatusHelpRomLen            },//Page Inxex...1
    {g_PicRom_Main,                   g_MainRomLen                      },//Page Inxex...2
    {g_PicRom_InitialSetting,         g_InitialSettingRomLen            },//Page Inxex...3
 //   {g_PicRom_ReserveSetting,         g_ReserveSettingRomLen            },//Page Inxex...4
    {g_PicRom_StationSetting,         g_StationSettingRomLen            },//Page Inxex...5
 //   {g_PicRom_DirectionConfirm,       g_DirectionConfirmRomLen          },//Page Inxex...6

    {g_PicRom_RunState,               g_RunStateRomLen                  },//Page Inxex...7
    {g_PicRom_RunHelp1,               g_RunHelp1RomLen                  },//Page Inxex...8
    {g_PicRom_RunHelp2,               g_RunHelp2RomLen                  },//Page Inxex...9
    {g_PicRom_RunHelp3,               g_RunHelp3RomLen                  },//Page Inxex...10
    {g_PicRom_CarStatus1,             g_CarStatus1RomLen                },//Page Inxex...11

    {g_PicRom_CarStatus1Help1,        g_CarStatus1Help1RomLen           },//Page Inxex...12
    {g_PicRom_CarStatus1Help2,        g_CarStatus1Help2RomLen           },//Page Inxex...13
    {g_PicRom_CarStatus1Help3,        g_CarStatus1Help3RomLen           },//Page Inxex...14
    {g_PicRom_CarStatus2,             g_CarStatus2RomLen                },//Page Inxex...15
    {g_PicRom_CarStatusHelp,          g_CarStatusHelpRomLen             },//Page Inxex...16

    {g_PicRom_CarStatus3,             g_CarStatus3RomLen                },//Page Inxex...17
    {g_PicRom_CarStatus3Help,         g_CarStatus3HelpRomLen            },//Page Inxex...18
    {g_PicRom_Fault,                  g_FaultRomLen                     },//Page Inxex...19
    {g_PicRom_HVACSetting,            g_HVACSettingRomLen               },//Page Inxex...20
    {g_PicRom_HVACSettingHelp,        g_HVACSettingHelpRomLen           },//Page Inxex...21

    {g_PicRom_Maintain,               g_MaintainRomLen                  },//Page Inxex...22
    {g_PicRom_ParameterSetting1,      g_ParameterSetting1RomLen         },//Page Inxex...23
    {g_PicRom_ParameterSetting2,      g_ParameterSetting2RomLen         },//Page Inxex...24
    {g_PicRom_WheelDiaRecord,         g_WheelDiaRecordRomLen            },//Page Inxex...25
    {g_PicRom_DoorTest,               g_DoorTestRomLen                  },//Page Inxex...26

 //   {g_PicRom_DoorTestHelp,           g_DoorTestHelpRomLen              },//Page Inxex...27
    {g_PicRom_TractionSystemTest,     g_TractionSystemTestRomLen        },//Page Inxex...28
    {g_PicRom_TractionSystemTestHelp, g_TractionSystemTestHelpRomLen    },//Page Inxex...29
    {g_PicRom_AccessorySystemTest,    g_AccessorySystemTestRomLen       },//Page Inxex...30
    {g_PicRom_AccessorySystemTestHelp,g_AccessorySystemTestHelpRomLen   },//Page Inxex...31
    {g_PicRom_BrakeTest,              g_BrakeTestRomLen                 },//Page Inxex...32

    {g_PicRom_BrakeTestHelp,          g_BrakeTestHelpRomLen             },//Page Inxex...33
    {g_PicRom_BrakeSelfTest,          g_BrakeSelfTestRomLen             },//Page Inxex...34
    {g_PicRom_BrakeSelfTestHelp,      g_BrakeSelfTestHelpRomLen         },//Page Inxex...35
    {g_PicRom_TodayFault,             g_TodayFaultRomLen                },//Page Inxex...36
    {g_PicRom_RunRecord,              g_RunRecordRomLen                 },//Page Inxex...37

    {g_PicRom_TryRunTest,             g_TryRunTestRomLen                },//Page Inxex...38
    {g_PicRom_Password,               g_PasswordRomLen                  },//Page Inxex...39
    {g_PicRom_ResetRunRecord,         g_ResetRunRecordRomLen            },//Page Inxex...40
    {g_PicRom_InstancyBroadcast,      g_InstancyBroadcastRomLen         },//Page Inxex...41
    {g_PicRom_RealTimeFault,          g_RealTimeFaultRomLen             },//Page Inxex...42

    {g_PicRom_HistoryFault,           g_HistoryFaultRomLen              },//Page Inxex...43
    {g_PicRom_TractionSystemFault,    g_TractionSystemFaultRomLen       },//Page Inxex...44
    {g_PicRom_DebugMain,              g_DebugMainRomLen                 },//Page Inxex...45
    {g_PicRom_VersionInfo,            g_VersionInfoRomLen               },//Page Inxex...46
    {g_PicRom_VialSignal,             g_VialSignalRomLen                },//Page Inxex...47

    {g_PicRom_RIOMDebug,              g_RIOMDebugRomLen                 },//Page Inxex...48
    {g_PicRom_RefreshTime,            g_RefreshTimeRomLen               },//Page Inxex...49
 //   {g_PicRom_CommStatusDebug,        g_CommStatusDebugRomLen           },//Page Inxex...50
    {g_PicRom_PasswordModify,         g_PasswordModifyRomLen            },//Page Inxex...51
    {g_PicRom_TimeSetting,            g_TimeSettingRomLen               },//Page Index...52
    {g_PicRom_FaultInfo,              g_FaultInfoRomLen                 },//Page Index...53

    {g_PicRom_WheelDiaRecordSelect,   g_WheelDiaRecordSelectRomLen      },//Page Index...54
//    {g_PicRom_CommStatus2,            g_CommStatus2RomLen               },//Page Index...55
//    {g_PicRom_CommStatus3,            g_CommStatus3RomLen               },//Page Index...56
//    {g_PicRom_CommStatus4,            g_CommStatus4RomLen               },//Page Index...57
//    {g_PicRom_CommStatus5,            g_CommStatus5RomLen               },//Page Index...58
//    {g_PicRom_CommStatus6,            g_CommStatus6RomLen               },//Page Index...59
    {g_PicRom_IOTCTable,              g_IOTCTableRomLen                 },//Page Index...60
    {g_PicRom_IOMTable,               g_IOMTableRomLen                  },//Page Index...61
    {g_PicRom_DOTable,                g_DOTableRomLen                   },//Page Index...62
    {g_PicRom_RunHelp4,               g_RunHelp4RomLen                  },//Page Index...63

    {g_PicRom_UdpDataPage1,           g_UdpDataPage1RomLen              },//Page Index...64
//    {g_PicRom_AW0Setting,             g_AW0SettingRomLen                },//Page Index...65
    {g_PicRom_FASPage,                g_FASPageRomLen                   },//Page Index...66
    {g_PicRom_RefreshTime2,           g_RefreshTime2RomLen              },//Page Inxex...67
    {g_PicRom_FaultPageHelp,          g_FaultPageHelpRomLen             },//Page Inxex...68
    {g_PicRom_CarStatus4,             g_CarStatus4RomLen                },//Page Inxex...69// lmh add

    {g_PicRom_DoorSetting,             g_DoorSettingRomLen              },//Page Inxex...70// lmh add
    {g_PicRom_DebugSetting,      g_DebugSettingRomLen           },//Page Inxex...71// lmh add
    {g_PicRom_StationCancel,    g_StationCancelRomLen           },
    {g_PicRom_CarStatus4Help,       g_CarStatus4HelpRomLen            },//Page Inxex...72
    {g_PicRom_CarStatus4Help1,       g_CarStatus4Help1RomLen            },//Page Inxex...73

    {g_PicRom_RunRecordSetting,          g_RunRecordSettingRomLen },
    {g_PicRom_LevelDebug,          g_LevelDebugRomLen },
    {g_PicRom_HVACDebug,            g_HVACDebugRomLen               },

    {g_PicRom_RunHelp5, g_RunHelp5RomLen},                         //RunHelp5Page leo add

} ;
int g_nTotalRomNum = sizeof(g_PicRom)/sizeof(ROMINFO);
