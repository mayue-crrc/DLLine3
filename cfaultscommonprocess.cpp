#include "cfaultscommonprocess.h"
#include "CGlobal.h"
#include "DataBuffer.h"
#include <qdatetime.h>
#include <qapplication.h>
#include <fstream>
#include "CPage.h"
#include <qdebug.h>

extern vector<CPage*>  g_PageVec;

CFaultsCommonProcess::CFaultsCommonProcess()
{
}

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_HISTORY_CONDITION_FILTER g_historyConditionFilter;
ST_REALTIME_CONDITION_FILTER g_realTimeConditionFilter;

//ST_DATETIME g_realtime_faults_datetime_array[1500];

int g_RealTimeFaultsNum = 0;
//弹出的提示界面的内容
ST_FAULT_INFO g_faultsinforom[] =
{  //code        name                                             advice
    //TMS
    {0x1101,QSTR("显示屏离线"),                             QSTR("请检查显示屏硬件设备及其连线")},
    {0x1102,QSTR("BCU离线"),                               QSTR("请检查BCU硬件设备及其连线")},
    {0x1103,QSTR("TCU离线"),                               QSTR("请检查TCU硬件设备及其连线")},
    {0x1104,QSTR("ACU离线"),                                 QSTR("请检查ACU硬件设备及其连线")},
    {0x1105,QSTR("EDCU离线"),                                 QSTR("请检查EDCU硬件设备及其连线")},
    {0x1106,QSTR("CCU离线"),                                 QSTR("请检查显示屏与CCU连线及CCU工作状态")},

    {0x1201,QSTR("PIS离线"),                                 QSTR("请检查PIS硬件设备及其连线")},
    {0x1202,QSTR("HVAC离线"),                                  QSTR("请检查HVAC硬件设备及其连线")},
    {0x1203,QSTR("FAS离线"),                                QSTR("请检查FAS硬件硬件设备及其连线")},
    {0x1204,QSTR("PDS离线"),                                 QSTR("请检查PDS硬件设备及其连线")},

    {0x1301,QSTR("RIOM机箱_网关离线"),                                 QSTR("请检查网关硬件设备及其接线")},
    {0x1302,QSTR("RIOM机箱_DI1离线"),                                 QSTR("请检查DI1板硬件设备及其接线")},
    {0x1303,QSTR("RIOM机箱_DI2离线"),                            QSTR("请检查DI2板硬件设备及其接线")},
    {0x1304,QSTR("RIOM机箱_DI3离线"),                            QSTR("请检查DI3板硬件设备及其接线")},
    {0x1305,QSTR("RIOM机箱_DO1离线"),                                QSTR("请检查DO1板硬件设备及其接线")},
    {0x1306,QSTR("RIOM机箱_AX1离线"),                                QSTR("请检查AX1板硬件设备及其接线")},
    //CAB
    {0x2101,QSTR("两个驾驶台都被占用"),                                QSTR("请确保只有一端司控器钥匙激活。如果检查后故障仍未被清除，通知检修人员")},
    {0x2102,QSTR("钥匙信号与方向指令冲突"),                                QSTR("请将方向手柄操作至0位置。如果检查后故障仍未被清除，通知检修人员")},
    {0x2103,QSTR("方向前后指令冲突"),                                QSTR("请将方向手柄操作至0位置。如果检查后故障仍未被清除，通知检修人员")},
    {0x2104,QSTR("方向指令与牵引制动指令冲突"),                                QSTR("请将方向手柄操作至惰性位置。如果检查后故障仍未被清除，通知检修人员")},
    {0x2105,QSTR("牵引指令与制动指令冲突"),                                QSTR("请将方向手柄操作至惰性位置。如果检查后故障仍未被清除，通知检修人员")},
    {0x2106,QSTR("牵引指令列车线故障"),                                QSTR("请检查对应信号的列车线")},
    {0x2107,QSTR("制动指令列车线故障"),                                QSTR("请检查对应信号的列车线")},
    {0x2108,QSTR("紧急制动安全环路列车线故障"),                                QSTR("请检查对应信号的列车线")},
    {0x2109,QSTR("快速制动列车线故障"),                                QSTR("请检查对应信号的列车线")},
    {0x2110,QSTR("方向向前冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2111,QSTR("方向向后冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2112,QSTR("牵引指令冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2113,QSTR("制动指令冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2114,QSTR("快速制动指令冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2115,QSTR("紧急制动指令冗余通道冲突"),                                QSTR("请检查对应信号的列车线")},
    {0x2116,QSTR("牵引时存在停放制动未缓解"),                                QSTR("请检查对应BCU单元")},
    {0x2117,QSTR("牵引时存在制动不缓解"),                                QSTR("请检查对应BCU单元")},
    {0x2201,QSTR("两个TC车DI2和DI3都不在线"),                                QSTR("TMS无法控制牵引制动，请切换模式")},
    {0x2202,QSTR("两个TC车DO都不在线"),                                QSTR("TMS无法给空压机输出启动命令，请用手动方式给空压机强迫泵风")},
    {0x2203,QSTR("司控器级位超限"),                                QSTR("请检查司控器机器信号线")},
    {0x2204,QSTR("司控器冗余录级位不一致"),                                QSTR("请检查司控器机器信号线")},
    {0x2118,QSTR("自动降弓"),                                QSTR("DI检测到自动降弓")},
    {0x2206,QSTR("蓄电池电压低"),                                QSTR("DI检测到蓄电池电压低")},
    //{0x2207,QSTR("ATP大故障"),                                QSTR("DI检测到ATP大故障")},


//BCU
    {0x4101,QSTR("制动不缓解"),                                QSTR("请制动厂商提供技术支持")},
    {0x4102,QSTR("制动力不足故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4301,QSTR("空簧压力极限"),                                QSTR("请制动厂商提供技术支持")},
    {0x4103,QSTR("空气制动系统故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4302,QSTR("AC压力传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4303,QSTR("BC压力传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4304,QSTR("AS1压力传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4305,QSTR("AS2压力传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4201,QSTR("AV阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4202,QSTR("RV阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4306,QSTR("电制申请信号异常"),                                QSTR("请制动厂商提供技术支持")},
    {0x4307,QSTR("牵引载重信号异常"),                                QSTR("请制动厂商提供技术支持")},
    {0x4308,QSTR("拖车减算指令异常"),                                QSTR("请制动厂商提供技术支持")},
    {0x4309,QSTR("电制动反馈信号异常"),                                QSTR("请制动厂商提供技术支持")},
    {0x4310,QSTR("拖车载重信号异常"),                                QSTR("请制动厂商提供技术支持")},
    {0x4203,QSTR("防滑控制系统故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4208,QSTR("1轴防滑阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4209,QSTR("2轴防滑阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4210,QSTR("3轴防滑阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4211,QSTR("4轴防滑阀故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4215,QSTR("1轴速度传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4216,QSTR("2轴速度传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4217,QSTR("3轴速度传感器故障"),                                QSTR("请制动厂商提供技术支持")},
    {0x4218,QSTR("4轴速度传感器故障"),                                QSTR("请制动厂商提供技术支持")},
//TCU
    {0x5101,QSTR("VVVF故障"),                                QSTR("")},
    {0x5102,QSTR("通信故障_(CFD)"),                                QSTR("按下复位开关取消故障状态")},
    {0x5103,QSTR("牵引电机过流_(MOCD)"),                                QSTR("将司控器档位设置到“N”位")},
    {0x5104,QSTR("充电故障_(FCD)"),                                QSTR("将司控器档位设置到“N”位")},
    {0x5105,QSTR("INV相位不平衡_(PUD)"),                                QSTR("将司控器档位设置到“N”位")},
    {0x5106,QSTR("门级电源低电压_(GPLVD)"),                                QSTR("复位开关")},
    {0x5301,QSTR("过电压1_(OVD1)"),                                QSTR("当FC电压小于1950V自动复位")},
    {0x5302,QSTR("过电压2_(OVD2)"),                                QSTR("档位设置到“N”位")},
    {0x5303,QSTR("滤波电容欠压_(FCLVD)"),                                QSTR("在此检测后1s，当FC电压大于900V时自动复位")},
    {0x5107,QSTR("TCU控制电欠压_(CLVD)"),                                QSTR("复位开关")},
    {0x5304,QSTR("线路接地_(LGD)"),                                QSTR("制动切除后自动清除，仅在制动状态下TCU运行此保护")},
    {0x5305,QSTR("车轮空转_(WSD)"),                                QSTR("在此检测后1s,自动复位。(仅在有动力状态)")},
    {0x5306,QSTR("线路欠压_(ESLVD)"),                                QSTR("在此检测后1s,自动复位")},
    {0x5109,QSTR("LB1故障2(未闭合)_(LID2)"),                                QSTR("复位开关")},
    {0x5108,QSTR("HSBC检测线路电流过流(2400A)_(HBT)"),                                QSTR("复位开关")},
    {0x5307,QSTR("逆变器过热_(THDI)"),                                QSTR("温度降到77℃后自动复位")},
    {0x5110,QSTR(" LB2故障(未闭合)_(L2D)"),                                QSTR("复位开关")},
    {0x5203,QSTR(" 看门狗定时器(PU416)标志_(WDTD)"),                                QSTR("复位开关")},
    {0x5308,QSTR(" 后退运行_(BSD)"),                                QSTR("关闭牵引，关闭制动后复位")},
    {0x5204,QSTR(" 制动斩波器故障_(BCFD)"),                                QSTR("按动复位开关取消错误情况。当TCU检测在3分钟内连续检测3次切断INV。")},
    {0x5210,QSTR(" 蓄电池欠压_(BATLV)"),                                QSTR("自动复位")},
    {0x5310,QSTR(" 制动电阻过热_(BROH)"),                                QSTR("电阻制动被禁止直到温度降到100K")},
    {0x5311,QSTR(" 电制动切除_(EBCUT)"),                                QSTR("制动切除")},
    {0x5205,QSTR(" TCU通信错误_(BOTE)"),                                QSTR("在TCU初始化时此保护被操作")},
    {0x5206,QSTR(" 保护等级设置错误_(SETE)"),                                QSTR("在TCU初始化时此保护被操作")},
    {0x5207,QSTR(" 档位输入错误_(NTD)"),                                QSTR("当检测NTD1分钟2次，切断HSCB。在切断后TCU拒绝复位操作")},
    {0x5208,QSTR(" LB1故障1(未断开)_(L1DA)"),                                QSTR("在切断后TCU拒绝复位操作。＊:在逆变器门极关断期间，此保护仍然运行")},
    {0x5209,QSTR(" 看门狗计时器(PP7)标志_(WDTD2)"),                                QSTR("复位开关清楚。当TCU检测此保护3分钟2次，切断INV。")},
    {0x5211,QSTR(" 电制动停止_(RBGOF)"),                                QSTR("在按动复位开关后，重新输入制动命令")},
    //{0x5313,QSTR(" 紧急模式_(EMB)"),                                QSTR("自动复位")},
    {0x5314,QSTR(" 可变载荷信号无效_(VLWF)"),                                QSTR("实施AWO载重，直到故障排除")},
    {0x5315,QSTR(" 电制动请求无效_(BPFD)"),                                QSTR("实施电制动力0KN，直到故障排除")},
//ACU
    {0x6201,QSTR("SIV故障"),                                QSTR("")},
    {0x6301,QSTR("滤波电容过电压(1)_(OVD1)"),                                QSTR("自动再启动")},
    {0x6302,QSTR("滤波电容过电压(2)_(OVD2)"),                                QSTR("自动再启动")},
    {0x6303,QSTR("滤波电容过电压(3)_(OVD3)"),                                QSTR("自动再启动")},
    {0x6304,QSTR("启动时逆变器电压不确立_(FCNV)"),                                QSTR("自动再启动")},
    {0x6305,QSTR("CHS不点弧_(CHSE)"),                                QSTR("自动再启动")},
    {0x6306,QSTR("通信错误_(SG_F)"),                                QSTR("自动再启动")},
    {0x6307,QSTR("IGBT输出过电流_(IOC)"),                                QSTR("自动再启动")},
    {0x6308,QSTR("过载_(OLR)"),                                QSTR("自动再启动")},
    {0x6309,QSTR("电流极限控制_(ILIM)"),                                QSTR("自动再启动")},
    {0x6310,QSTR("启动时CHS短路_(CHSS)"),                                QSTR("自动再启动")},
    {0x6311,QSTR("15V控制电源欠压_(15UV)"),                                QSTR("自动再启动")},
    {0x6312,QSTR("AC50V门极控制电源欠压_(GLV)"),                                QSTR("自动再启动")},
    {0x6313,QSTR("CTT响应异常_(CTAE)"),                                QSTR("自动再启动")},
    {0x6314,QSTR("DCHK响应异常_(DCKE)"),                                QSTR("自动再启动")},
    {0x6315,QSTR("输出欠压_(I_UV)"),                                QSTR("自动再启动")},
    {0x6316,QSTR("输出过压_(I_OV)"),                                QSTR("自动再启动")},
    {0x6317,QSTR("110V控制电源欠压_(CPUV)"),                                QSTR("自动再启动")},
    {0x6318,QSTR("温度过热_(OH)"),                                QSTR("自动再启动")},
    {0x6319,QSTR("SIV输出端触点不闭合或不断开_(MKAE)"),                                QSTR("自动再启动")},
    {0x6320,QSTR("输出频率异常_(FRER)"),                                QSTR("自动再启动")},
    {0x6321,QSTR("虑波电容电压不平衡_(FCUB)"),                                QSTR("自动再启动")},
    {0x6322,QSTR("模拟失败_(simulated failure)"),                                QSTR("无建议")},
    {0x6323,QSTR("测试触发器_(Test_trigger)"),                                QSTR("无建议")},
//EDCU
    {0x7301,QSTR("内部CAN通信故障"),                                QSTR("检查车辆数据总线电揽，连接器和总结接口")},
    {0x7101,QSTR("门1驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},
    {0x7102,QSTR("门2驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},
    {0x7103,QSTR("门3驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},
    {0x7104,QSTR("门4驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},
    {0x7105,QSTR("门5驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},
    {0x7106,QSTR("门6驱动电机电路断路"),                                QSTR("检查电机电路，接线，MDCU输出电路和电机")},

    {0x7107,QSTR("门1锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7108,QSTR("门2锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7109,QSTR("门3锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7110,QSTR("门4锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7111,QSTR("门5锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7112,QSTR("门6锁到位开关故障"),                                QSTR("调节门锁到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},

    {0x7113,QSTR("门1关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7114,QSTR("门2关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7115,QSTR("门3关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7116,QSTR("门4关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7117,QSTR("门5关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},
    {0x7118,QSTR("门6关到位开关故障"),                                QSTR("调节门关到位开关安装位置；更换门锁到位开关；检查EDCU的输入电路和接线端子排线头是否脱落")},

    {0x7119,QSTR("门1在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},
    {0x7120,QSTR("门2在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},
    {0x7121,QSTR("门3在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},
    {0x7122,QSTR("门4在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},
    {0x7123,QSTR("门5在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},
    {0x7124,QSTR("门6在3秒内未解锁"),                                QSTR("检查门驱动机构的自由运动，门的调节，安全继电器的功能和EDCU的输出电路")},

    {0x7125,QSTR("门1位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},
    {0x7126,QSTR("门2位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},
    {0x7127,QSTR("门3位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},
    {0x7128,QSTR("门4位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},
    {0x7129,QSTR("门5位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},
    {0x7130,QSTR("门6位置传感器故障"),                                QSTR("检查门位置传感器和EDCU的输入电路")},

    {0x7131,QSTR("门1未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},
    {0x7132,QSTR("门2未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},
    {0x7133,QSTR("门3未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},
    {0x7134,QSTR("门4未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},
    {0x7135,QSTR("门5未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},
    {0x7136,QSTR("门6未经许可离开关锁到位位置"),                                QSTR("检查紧急解锁装置／紧急解锁开关的调节和接线；检查门驱动机构，门锁闭装置；检查门关到位和MDCU输入线路的调节和接线")},

    {0x7137,QSTR("门1内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},
    {0x7138,QSTR("门2内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},
    {0x7139,QSTR("门3内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},
    {0x7140,QSTR("门4内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},
    {0x7141,QSTR("门5内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},
    {0x7142,QSTR("门6内部安全继电器故障"),                                QSTR("检查给电机供电的继电器外围电路的接线；更换MDCU")},

    {0x7143,QSTR("门1安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},
    {0x7144,QSTR("门2安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},
    {0x7145,QSTR("门3安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},
    {0x7146,QSTR("门4安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},
    {0x7147,QSTR("门5安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},
    {0x7148,QSTR("门6安全互锁回路异常故障"),                                QSTR("检查“锁到位开关”“关到位开关”“紧急解锁开关”“隔离开关”；更换损坏的开关；检查MDCU的输入电路和接线端子排线头是否脱落")},

    {0x7149,QSTR("门1门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},
    {0x7150,QSTR("门2门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},
    {0x7151,QSTR("门3门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},
    {0x7152,QSTR("门4门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},
    {0x7153,QSTR("门5门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},
    {0x7154,QSTR("门6门锁闭装置故障"),                                QSTR("检查门锁闭装置，紧急解锁开关接线是否松脱")},

    {0x7302,QSTR("门1关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},
    {0x7303,QSTR("门2关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},
    {0x7304,QSTR("门3关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},
    {0x7305,QSTR("门4关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},
    {0x7306,QSTR("门5关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},
    {0x7307,QSTR("门6关门过程中的障碍检测触发指定次数"),                                QSTR("清除门导轨上的障碍物；检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关")},

    {0x7308,QSTR("门1开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},
    {0x7309,QSTR("门2开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},
    {0x7310,QSTR("门3开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},
    {0x7311,QSTR("门4开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},
    {0x7312,QSTR("门5开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},
    {0x7313,QSTR("门6开门过程中的障碍检测触发指定次数"),                                QSTR("检查MDCU的门位置传感器信号输入，检查调节门驱动机构，调节门锁到位开关；检查接线及EDCU的输入电路")},

    {0x7314,QSTR("门1输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},
    {0x7315,QSTR("门2输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},
    {0x7316,QSTR("门3输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},
    {0x7317,QSTR("门4输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},
    {0x7318,QSTR("门5输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},
    {0x7319,QSTR("门6输出口O0故障输出短路"),                                QSTR("检查与MDCU输出端O0连接的零件，MDCU的接线和输出")},

    {0x7320,QSTR("门1输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},
    {0x7321,QSTR("门2输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},
    {0x7322,QSTR("门3输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},
    {0x7323,QSTR("门4输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},
    {0x7324,QSTR("门5输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},
    {0x7325,QSTR("门6输出口O1故障输出短路"),                                QSTR("检查与MDCU输出端O1连接的零件，MDCU的接线和输出")},

    {0x7326,QSTR("门1输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},
    {0x7327,QSTR("门2输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},
    {0x7328,QSTR("门3输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},
    {0x7329,QSTR("门4输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},
    {0x7330,QSTR("门5输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},
    {0x7331,QSTR("门6输出口O2故障输出短路"),                                QSTR("检查与MDCU输出端O2连接的零件，MDCU的接线和输出")},

    {0x7332,QSTR("门1输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},
    {0x7333,QSTR("门2输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},
    {0x7334,QSTR("门3输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},
    {0x7335,QSTR("门4输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},
    {0x7336,QSTR("门5输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},
    {0x7337,QSTR("门6输出口O3故障输出短路"),                                QSTR("检查与MDCU输出端O3连接的零件，MDCU的接线和输出")},

    {0x7338,QSTR("门1诊断存储器故障"),                                QSTR("更换EDCU")},
    {0x7339,QSTR("门2诊断存储器故障"),                                QSTR("更换EDCU")},
    {0x7340,QSTR("门3诊断存储器故障"),                                QSTR("更换EDCU")},
    {0x7341,QSTR("门4诊断存储器故障"),                                QSTR("更换EDCU")},
    {0x7342,QSTR("门5诊断存储器故障"),                                QSTR("更换EDCU")},
    {0x7343,QSTR("门6诊断存储器故障"),                                QSTR("更换EDCU")},

    {0x7344,QSTR("门1内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},
    {0x7345,QSTR("门2内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},
    {0x7346,QSTR("门3内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},
    {0x7347,QSTR("门4内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},
    {0x7348,QSTR("门5内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},
    {0x7349,QSTR("门6内部CAN通讯故障"),                                QSTR("检查车辆数据总线电缆，连接器和总线接口")},

//PIS
    {0x9201,QSTR("司机室控制单元故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9202,QSTR("广播控制盒故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9303,QSTR("车外左侧LED屏故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9304,QSTR("车外右侧LED屏故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9305,QSTR("客室控制单元故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9306,QSTR("客室LED屏1故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9307,QSTR("客室LED屏2故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9308,QSTR("LED电子地图1故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9309,QSTR("LED电子地图2故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9310,QSTR("LED电子地图3故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9311,QSTR("LED电子地图4故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9312,QSTR("LED电子地图5故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9313,QSTR("LED电子地图6故障"),                                QSTR("请检修相关的PIS硬件设备")},

    {0x9314,QSTR("客室紧急报警器1故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9315,QSTR("客室紧急报警器2故障"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9203,QSTR("严重故障，PIS子系统不工作"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9317,QSTR("中等故障，性能减少，但是PIS子系统仍旧工作"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9318,QSTR("小故障，需要维护，PIS子系统性能不变"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9101,QSTR("CCTV主机和司机室交换机网络中断"),                                QSTR("请检修相关的PIS硬件设备")},
    {0x9204,QSTR("客室的媒体网关网络中断"),                                QSTR("请检修相关的PIS硬件设备")},
//HVAC
    {0xA301,QSTR("1-1通风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA302,QSTR("1-2通风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA303,QSTR("2-1通风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA304,QSTR("2-2通风机故障"),                                QSTR("请检修相关的空调设备")},

    {0xA305,QSTR("1-1压缩机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA306,QSTR("1-2压缩机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA307,QSTR("2-1压缩机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA308,QSTR("2-2压缩机故障"),                                QSTR("请检修相关的空调设备")},

    {0xA309,QSTR("1-1冷凝风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA310,QSTR("1-2冷凝风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA311,QSTR("2-1冷凝风机故障"),                                QSTR("请检修相关的空调设备")},
    {0xA312,QSTR("2-2冷凝风机故障"),                                QSTR("请检修相关的空调设备")},

    {0xA313,QSTR("1-1空调预热器故障"),                                QSTR("请检修相关的空调设备")},
    {0xA314,QSTR("1-2空调预热器故障"),                                QSTR("请检修相关的空调设备")},
    {0xA315,QSTR("2-1空调预热器故障"),                                QSTR("请检修相关的空调设备")},
    {0xA316,QSTR("2-2空调预热器故障"),                                QSTR("请检修相关的空调设备")},
//FAS
    {0xB201,QSTR("FAS 1，2模块间的通讯故障"),                                QSTR("请排除FAS相关故障")},
    {0xB202,QSTR("探测器1屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB203,QSTR("探测器1短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB204,QSTR("探测器1开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB205,QSTR("探测器1风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB206,QSTR("探测器1污染"),                                QSTR("请排除FAS相关故障")},
    {0xB207,QSTR("探测器1通讯故障"),                                QSTR("请排除FAS相关故障")},

    {0xB208,QSTR("探测器2屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB209,QSTR("探测器2短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB210,QSTR("探测器2开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB211,QSTR("探测器2风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB212,QSTR("探测器2污染"),                                QSTR("请排除FAS相关故障")},
    {0xB213,QSTR("探测器2通讯故障"),                                QSTR("请排除FAS相关故障")},

    {0xB214,QSTR("探测器3屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB215,QSTR("探测器3短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB216,QSTR("探测器3开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB217,QSTR("探测器3风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB218,QSTR("探测器3污染"),                                QSTR("请排除FAS相关故障")},
    {0xB219,QSTR("探测器3通讯故障"),                                QSTR("请排除FAS相关故障")},

    {0xB220,QSTR("探测器4屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB221,QSTR("探测器4短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB222,QSTR("探测器4开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB223,QSTR("探测器4风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB224,QSTR("探测器4污染"),                                QSTR("请排除FAS相关故障")},
    {0xB225,QSTR("探测器4通讯故障"),                                QSTR("请排除FAS相关故障")},

    {0xB226,QSTR("探测器5屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB227,QSTR("探测器5短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB228,QSTR("探测器5开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB229,QSTR("探测器5风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB230,QSTR("探测器5污染"),                                QSTR("请排除FAS相关故障")},
    {0xB231,QSTR("探测器5通讯故障"),                                QSTR("请排除FAS相关故障")},

    {0xB232,QSTR("探测器6屏蔽"),                                QSTR("请检查探测器屏蔽原因")},
    {0xB233,QSTR("探测器6短路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB234,QSTR("探测器6开路故障"),                                QSTR("请排除FAS相关故障")},
    {0xB235,QSTR("探测器6风扇故障"),                                QSTR("请排除FAS相关故障")},
    {0xB236,QSTR("探测器6污染"),                                QSTR("请排除FAS相关故障")},
    {0xB237,QSTR("探测器6通讯故障"),                                QSTR("请排除FAS相关故障")},

};
int g_faultsInfoRomLen = sizeof(g_faultsinforom)/sizeof(ST_FAULT_INFO);

//故障列表
FAULTS_ROM_DATA g_faultsrom[]={
//   code    level  pos    word   bit     flg   confirm  confirmflg       种类
    {0x1101,  1,  D_POS_A,   0,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1101,  1,  D_POS_D,   0,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1106,  1,  D_POS_E,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1201,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1201,  2,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1301,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1302,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1302,  3,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1302,  3,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1302,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1303,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1303,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1304,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1304,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1305,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1306,  3,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1306,  3,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x2101,  1,  D_POS_A,  192,   bit7,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2101,  1,  D_POS_D,  192,   bit4,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2102,  1,  D_POS_A,  192,   bit3,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2102,  1,  D_POS_D,  192,   bit0,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2103,  1,  D_POS_A,  192,   bit15,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2103,  1,  D_POS_D,  192,   bit12,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2104,  1,  D_POS_A,  192,   bit11,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2104,  1,  D_POS_D,  192,   bit8,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2105,  1,  D_POS_A,  193,   bit7,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2105,  1,  D_POS_D,  193,   bit4,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2106,  1,  D_POS_A,  193,   bit3,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2106,  1,  D_POS_D,  193,   bit0,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2107,  1,  D_POS_A,  193,   bit15,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2107,  1,  D_POS_D,  193,   bit12,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2108,  1,  D_POS_A,  193,   bit11,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2108,  1,  D_POS_D,  193,   bit8,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2109,  1,  D_POS_A,  194,   bit7,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2109,  1,  D_POS_D,  194,   bit4,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2110,  1,  D_POS_A,  194,   bit3,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2110,  1,  D_POS_D,  194,   bit0,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2111,  1,  D_POS_A,  194,   bit15,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2111,  1,  D_POS_D,  194,   bit12,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2112,  1,  D_POS_A,  194,   bit11,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },
    {0x2112,  1,  D_POS_D,  194,   bit8,  false,  false, true,  E_FAULTS_CATEGORY_CAB    },

    {0x2113,  1,  D_POS_A,  195,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2113,  1,  D_POS_D,  195,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2114,  1,  D_POS_A,  195,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2114,  1,  D_POS_D,  195,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2115,  1,  D_POS_A,  195,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2115,  1,  D_POS_D,  195,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2116,  1,  D_POS_A,  195,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2116,  1,  D_POS_B,  195,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2116,  1,  D_POS_C,  195,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2116,  1,  D_POS_D,  195,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2117,  1,  D_POS_A,  196,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2117,  1,  D_POS_B,  196,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2117,  1,  D_POS_C,  196,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2117,  1,  D_POS_D,  196,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2201,  2,  D_POS_A,  196,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2201,  2,  D_POS_D,  196,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2202,  2,  D_POS_A,  196,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2202,  2,  D_POS_D,  196,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2203,  2,  D_POS_A,  196,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2203,  2,  D_POS_D,  196,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2204,  2,  D_POS_A,  197,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2204,  2,  D_POS_D,  197,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2118,  1,  D_POS_B,  74,    bit1,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2118,  1,  D_POS_C,  106,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x2206,  2,  D_POS_A,  43,    bit3,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
    {0x2206,  2,  D_POS_D,  139,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

//    {0x2207,  2,  D_POS_A,  42,    bit14,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },
//    {0x2207,  2,  D_POS_D,  138,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_CAB    },

    {0x4101,  1,  D_POS_A,  352,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4101,  1,  D_POS_B,  384,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4101,  1,  D_POS_C,  416,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4101,  1,  D_POS_D,  448,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4102,  1,  D_POS_A,  352,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4102,  1,  D_POS_B,  384,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4102,  1,  D_POS_C,  416,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4102,  1,  D_POS_D,  448,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4301,  3,  D_POS_A,  352,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4301,  3,  D_POS_B,  384,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4301,  3,  D_POS_C,  416,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4301,  3,  D_POS_D,  448,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4103,  1,  D_POS_A,  352,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4103,  1,  D_POS_B,  384,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4103,  1,  D_POS_C,  416,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4103,  1,  D_POS_D,  448,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4302,  3,  D_POS_A,  352,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4302,  3,  D_POS_B,  384,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4302,  3,  D_POS_C,  416,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4302,  3,  D_POS_D,  448,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4303,  3,  D_POS_A,  352,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_B,  384,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_C,  416,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_D,  448,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4304,  3,  D_POS_A,  352,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4304,  3,  D_POS_B,  384,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4304,  3,  D_POS_C,  416,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4304,  3,  D_POS_D,  448,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4305,  3,  D_POS_A,  352,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4305,  3,  D_POS_B,  384,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4305,  3,  D_POS_C,  416,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4305,  3,  D_POS_D,  448,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4201,  2,  D_POS_A,  352,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4201,  2,  D_POS_B,  384,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4201,  2,  D_POS_C,  416,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4201,  2,  D_POS_D,  448,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4202,  2,  D_POS_A,  352,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_B,  384,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_C,  416,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_D,  448,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4306,  3,  D_POS_A,  353,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4306,  3,  D_POS_B,  385,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4306,  3,  D_POS_C,  417,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4306,  3,  D_POS_D,  449,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4307,  3,  D_POS_A,  353,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4307,  3,  D_POS_B,  385,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4307,  3,  D_POS_C,  417,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4307,  3,  D_POS_D,  449,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4308,  3,  D_POS_A,  353,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4308,  3,  D_POS_B,  385,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4308,  3,  D_POS_C,  417,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4308,  3,  D_POS_D,  449,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4309,  3,  D_POS_A,  353,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4309,  3,  D_POS_B,  385,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4309,  3,  D_POS_C,  417,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4309,  3,  D_POS_D,  449,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4310,  3,  D_POS_A,  353,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4310,  3,  D_POS_B,  385,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4310,  3,  D_POS_C,  417,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4310,  3,  D_POS_D,  449,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4203,  2,  D_POS_A,  353,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4203,  2,  D_POS_B,  385,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4203,  2,  D_POS_C,  417,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4203,  2,  D_POS_D,  449,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4208,  2,  D_POS_A,  353,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4208,  2,  D_POS_B,  385,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4208,  2,  D_POS_C,  417,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4208,  2,  D_POS_D,  449,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4209,  2,  D_POS_A,  353,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4209,  2,  D_POS_B,  385,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4209,  2,  D_POS_C,  417,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4209,  2,  D_POS_D,  449,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4210,  2,  D_POS_A,  353,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4210,  2,  D_POS_B,  385,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4210,  2,  D_POS_C,  417,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4210,  2,  D_POS_D,  449,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4211,  2,  D_POS_A,  353,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4211,  2,  D_POS_B,  385,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4211,  2,  D_POS_C,  417,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4211,  2,  D_POS_D,  449,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4215,  2,  D_POS_A,  353,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_B,  385,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_C,  417,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_D,  449,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4216,  2,  D_POS_A,  353,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_B,  385,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_C,  417,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_D,  449,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4217,  2,  D_POS_A,  353,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_B,  385,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_C,  417,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_D,  449,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x4218,  2,  D_POS_A,  353,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4218,  2,  D_POS_B,  385,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4218,  2,  D_POS_C,  417,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },
    {0x4218,  2,  D_POS_D,  449,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_BCU    },

    {0x5101,  1,  D_POS_B,  475,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5101,  1,  D_POS_C,  507,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5102,  1,  D_POS_B,  471,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5102,  1,  D_POS_C,  503,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5103,  1,  D_POS_B,  471,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5103,  1,  D_POS_C,  503,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5104,  1,  D_POS_B,  471,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5104,  1,  D_POS_C,  503,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5105,  1,  D_POS_B,  471,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5105,  1,  D_POS_C,  503,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5106,  1,  D_POS_B,  471,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5106,  1,  D_POS_C,  503,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5301,  3,  D_POS_B,  471,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5301,  3,  D_POS_C,  503,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5302,  3,  D_POS_B,  471,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5302,  3,  D_POS_C,  503,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5303,  3,  D_POS_B,  471,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5303,  3,  D_POS_C,  503,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5107,  1,  D_POS_B,  471,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5107,  1,  D_POS_C,  503,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5304,  3,  D_POS_B,  471,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5304,  3,  D_POS_C,  503,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5305,  3,  D_POS_B,  471,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5305,  3,  D_POS_C,  503,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5306,  3,  D_POS_B,  471,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5306,  3,  D_POS_C,  503,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5109,  1,  D_POS_B,  471,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5109,  1,  D_POS_C,  503,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5108,  1,  D_POS_B,  471,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5108,  1,  D_POS_C,  503,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5307,  3,  D_POS_B,  471,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5307,  3,  D_POS_C,  503,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5110,  1,  D_POS_B,  472,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5110,  1,  D_POS_C,  504,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5203,  2,  D_POS_B,  472,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5203,  2,  D_POS_C,  504,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5308,  3,  D_POS_B,  472,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5308,  3,  D_POS_C,  504,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5204,  2,  D_POS_B,  472,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5204,  2,  D_POS_C,  504,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5210,  2,  D_POS_B,  472,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5210,  2,  D_POS_C,  504,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5310,  3,  D_POS_B,  472,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5310,  3,  D_POS_C,  504,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5311,  3,  D_POS_B,  472,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5311,  3,  D_POS_C,  504,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5205,  2,  D_POS_B,  472,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5205,  2,  D_POS_C,  504,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5206,  2,  D_POS_B,  472,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5206,  2,  D_POS_C,  504,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5207,  2,  D_POS_B,  472,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5207,  2,  D_POS_C,  504,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5208,  2,  D_POS_B,  472,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5208,  2,  D_POS_C,  504,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5209,  2,  D_POS_B,  472,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5209,  2,  D_POS_C,  504,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5211,  2,  D_POS_B,  472,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5211,  2,  D_POS_C,  504,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    //{0x5313,  3,  D_POS_B,  473,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    //{0x5313,  3,  D_POS_C,  505,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5314,  3,  D_POS_B,  473,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5314,  3,  D_POS_C,  505,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x5315,  3,  D_POS_B,  473,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },
    {0x5315,  3,  D_POS_C,  505,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_TCU    },

    {0x6201,  2,  D_POS_A,  538,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6201,  2,  D_POS_D,  570,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6301,  3,  D_POS_A,  535,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6301,  3,  D_POS_D,  567,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6302,  3,  D_POS_A,  535,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6302,  3,  D_POS_D,  567,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6303,  3,  D_POS_A,  535,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6303,  3,  D_POS_D,  567,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6304,  3,  D_POS_A,  535,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6304,  3,  D_POS_D,  567,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6305,  3,  D_POS_A,  535,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6305,  3,  D_POS_D,  567,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6306,  3,  D_POS_A,  535,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6306,  3,  D_POS_D,  567,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6307,  3,  D_POS_A,  535,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6307,  3,  D_POS_D,  567,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6308,  3,  D_POS_A,  535,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6308,  3,  D_POS_D,  567,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6309,  3,  D_POS_A,  535,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6309,  3,  D_POS_D,  567,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6310,  3,  D_POS_A,  535,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6310,  3,  D_POS_D,  567,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6311,  3,  D_POS_A,  535,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6311,  3,  D_POS_D,  567,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6312,  3,  D_POS_A,  535,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6312,  3,  D_POS_D,  567,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6313,  3,  D_POS_A,  535,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6313,  3,  D_POS_D,  567,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6314,  3,  D_POS_A,  535,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6314,  3,  D_POS_D,  567,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6315,  3,  D_POS_A,  535,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6315,  3,  D_POS_D,  567,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6316,  3,  D_POS_A,  536,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6316,  3,  D_POS_D,  568,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6317,  3,  D_POS_A,  536,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6317,  3,  D_POS_D,  568,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6318,  3,  D_POS_A,  536,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6318,  3,  D_POS_D,  568,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6319,  3,  D_POS_A,  536,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6319,  3,  D_POS_D,  568,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6320,  3,  D_POS_A,  536,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6320,  3,  D_POS_D,  568,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6321,  3,  D_POS_A,  536,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6321,  3,  D_POS_D,  568,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6322,  3,  D_POS_A,  537,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6322,  3,  D_POS_D,  569,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x6323,  3,  D_POS_A,  537,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },
    {0x6323,  3,  D_POS_D,  569,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_ACU    },

    {0x7301,  3,  D_POS_A,  3800,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//内部CAN通讯故障
    {0x7301,  3,  D_POS_B,  3801,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7301,  3,  D_POS_C,  3802,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7301,  3,  D_POS_D,  3803,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7101,  1,  D_POS_A,  3176,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
    {0x7101,  1,  D_POS_B,  3224,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7101,  1,  D_POS_C,  3272,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7101,  1,  D_POS_D,  3320,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7102,  1,  D_POS_A,  3178,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
    {0x7102,  1,  D_POS_B,  3226,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7102,  1,  D_POS_C,  3274,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7102,  1,  D_POS_D,  3322,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7103,  1,  D_POS_A,  3180,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
    {0x7103,  1,  D_POS_B,  3228,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7103,  1,  D_POS_C,  3276,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7103,  1,  D_POS_D,  3324,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7104,  1,  D_POS_A,  3182,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
    {0x7104,  1,  D_POS_B,  3230,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7104,  1,  D_POS_C,  3278,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
    {0x7104,  1,  D_POS_D,  3326,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7105,  1,  D_POS_B,  3232,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
    {0x7105,  1,  D_POS_C,  3280,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x7106,  1,  D_POS_B,  3234,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
    {0x7106,  1,  D_POS_C,  3282,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7107,  1,  D_POS_A,  3176,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7107,  1,  D_POS_B,  3224,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7107,  1,  D_POS_C,  3272,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7107,  1,  D_POS_D,  3320,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7108,  1,  D_POS_A,  3178,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7108,  1,  D_POS_B,  3226,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7108,  1,  D_POS_C,  3274,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7108,  1,  D_POS_D,  3322,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7109,  1,  D_POS_A,  3180,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7109,  1,  D_POS_B,  3228,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7109,  1,  D_POS_C,  3276,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7109,  1,  D_POS_D,  3324,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7110,  1,  D_POS_A,  3182,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7110,  1,  D_POS_B,  3230,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7110,  1,  D_POS_C,  3278,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7110,  1,  D_POS_D,  3326,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7111,  1,  D_POS_B,  3232,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7111,  1,  D_POS_C,  3280,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7112,  1,  D_POS_B,  3234,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7112,  1,  D_POS_C,  3282,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },


{0x7113,  1,  D_POS_A,  3176,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7113,  1,  D_POS_B,  3224,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7113,  1,  D_POS_C,  3272,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7113,  1,  D_POS_D,  3320,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7114,  1,  D_POS_A,  3178,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7114,  1,  D_POS_B,  3226,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7114,  1,  D_POS_C,  3274,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7114,  1,  D_POS_D,  3322,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7115,  1,  D_POS_A,  3180,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7115,  1,  D_POS_B,  3228,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7115,  1,  D_POS_C,  3276,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7115,  1,  D_POS_D,  3324,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7116,  1,  D_POS_A,  3182,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7116,  1,  D_POS_B,  3230,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7116,  1,  D_POS_C,  3278,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7116,  1,  D_POS_D,  3326,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7117,  1,  D_POS_B,  3232,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7117,  1,  D_POS_C,  3280,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7118,  1,  D_POS_B,  3234,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7118,  1,  D_POS_C,  3282,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },


{0x7119,  1,  D_POS_A,  3176,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7119,  1,  D_POS_B,  3224,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7119,  1,  D_POS_C,  3272,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7119,  1,  D_POS_D,  3320,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7120,  1,  D_POS_A,  3178,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7120,  1,  D_POS_B,  3226,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7120,  1,  D_POS_C,  3274,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7120,  1,  D_POS_D,  3322,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7121,  1,  D_POS_A,  3180,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7121,  1,  D_POS_B,  3228,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7121,  1,  D_POS_C,  3276,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7121,  1,  D_POS_D,  3324,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7122,  1,  D_POS_A,  3182,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7122,  1,  D_POS_B,  3230,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7122,  1,  D_POS_C,  3278,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7122,  1,  D_POS_D,  3326,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7123,  1,  D_POS_B,  3232,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7123,  1,  D_POS_C,  3280,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7124,  1,  D_POS_B,  3234,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7124,  1,  D_POS_C,  3282,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7125,  1,  D_POS_A,  3176,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7125,  1,  D_POS_B,  3224,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7125,  1,  D_POS_C,  3272,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7125,  1,  D_POS_D,  3320,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7126,  1,  D_POS_A,  3178,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7126,  1,  D_POS_B,  3226,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7126,  1,  D_POS_C,  3274,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7126,  1,  D_POS_D,  3322,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7127,  1,  D_POS_A,  3180,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7127,  1,  D_POS_B,  3228,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7127,  1,  D_POS_C,  3276,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7127,  1,  D_POS_D,  3324,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7128,  1,  D_POS_A,  3182,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7128,  1,  D_POS_B,  3230,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7128,  1,  D_POS_C,  3278,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7128,  1,  D_POS_D,  3326,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7129,  1,  D_POS_B,  3232,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7129,  1,  D_POS_C,  3280,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7130,  1,  D_POS_B,  3234,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7130,  1,  D_POS_C,  3282,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7131,  1,  D_POS_A,  3176,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7131,  1,  D_POS_B,  3224,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7131,  1,  D_POS_C,  3272,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7131,  1,  D_POS_D,  3320,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7132,  1,  D_POS_A,  3178,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7132,  1,  D_POS_B,  3226,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7132,  1,  D_POS_C,  3274,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7132,  1,  D_POS_D,  3322,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7133,  1,  D_POS_A,  3180,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7133,  1,  D_POS_B,  3228,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7133,  1,  D_POS_C,  3276,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7133,  1,  D_POS_D,  3324,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7134,  1,  D_POS_A,  3182,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7134,  1,  D_POS_B,  3230,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7134,  1,  D_POS_C,  3278,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7134,  1,  D_POS_D,  3326,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7135,  1,  D_POS_B,  3232,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7135,  1,  D_POS_C,  3280,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7136,  1,  D_POS_B,  3234,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7136,  1,  D_POS_C,  3282,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7137,  1,  D_POS_A,  3176,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7137,  1,  D_POS_B,  3224,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7137,  1,  D_POS_C,  3272,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7137,  1,  D_POS_D,  3320,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7138,  1,  D_POS_A,  3178,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7138,  1,  D_POS_B,  3226,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7138,  1,  D_POS_C,  3274,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7138,  1,  D_POS_D,  3322,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7139,  1,  D_POS_A,  3180,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7139,  1,  D_POS_B,  3228,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7139,  1,  D_POS_C,  3276,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7139,  1,  D_POS_D,  3324,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7140,  1,  D_POS_A,  3182,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7140,  1,  D_POS_B,  3230,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7140,  1,  D_POS_C,  3278,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7140,  1,  D_POS_D,  3326,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7141,  1,  D_POS_B,  3232,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7141,  1,  D_POS_C,  3280,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7142,  1,  D_POS_B,  3234,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7142,  1,  D_POS_C,  3282,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },


{0x7143,  1,  D_POS_A,  3176,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7143,  1,  D_POS_B,  3224,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7143,  1,  D_POS_C,  3272,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7143,  1,  D_POS_D,  3320,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7144,  1,  D_POS_A,  3178,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7144,  1,  D_POS_B,  3226,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7144,  1,  D_POS_C,  3274,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7144,  1,  D_POS_D,  3322,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7145,  1,  D_POS_A,  3180,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7145,  1,  D_POS_B,  3228,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7145,  1,  D_POS_C,  3276,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7145,  1,  D_POS_D,  3324,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7146,  1,  D_POS_A,  3182,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7146,  1,  D_POS_B,  3230,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7146,  1,  D_POS_C,  3278,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7146,  1,  D_POS_D,  3326,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7147,  1,  D_POS_B,  3232,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7147,  1,  D_POS_C,  3280,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7148,  1,  D_POS_B,  3234,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7148,  1,  D_POS_C,  3282,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7149,  1,  D_POS_A,  3176,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7149,  1,  D_POS_B,  3224,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7149,  1,  D_POS_C,  3272,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7149,  1,  D_POS_D,  3320,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7150,  1,  D_POS_A,  3178,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7150,  1,  D_POS_B,  3226,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7150,  1,  D_POS_C,  3274,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7150,  1,  D_POS_D,  3322,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7151,  1,  D_POS_A,  3180,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7151,  1,  D_POS_B,  3228,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7151,  1,  D_POS_C,  3276,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7151,  1,  D_POS_D,  3324,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7152,  1,  D_POS_A,  3182,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7152,  1,  D_POS_B,  3230,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7152,  1,  D_POS_C,  3278,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7152,  1,  D_POS_D,  3326,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7153,  1,  D_POS_B,  3232,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7153,  1,  D_POS_C,  3280,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7154,  1,  D_POS_B,  3234,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7154,  1,  D_POS_C,  3282,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7302,  3,  D_POS_A,  3176,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7302,  3,  D_POS_B,  3224,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7302,  3,  D_POS_C,  3272,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7302,  3,  D_POS_D,  3320,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7303,  3,  D_POS_A,  3178,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7303,  3,  D_POS_B,  3226,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7303,  3,  D_POS_C,  3274,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7303,  3,  D_POS_D,  3322,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7304,  3,  D_POS_A,  3180,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7304,  3,  D_POS_B,  3228,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7304,  3,  D_POS_C,  3276,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7304,  3,  D_POS_D,  3324,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7305,  3,  D_POS_A,  3182,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7305,  3,  D_POS_B,  3230,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7305,  3,  D_POS_C,  3278,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7305,  3,  D_POS_D,  3326,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7306,  3,  D_POS_B,  3232,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7306,  3,  D_POS_C,  3280,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7307,  3,  D_POS_B,  3234,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7307,  3,  D_POS_C,  3282,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7308,  3,  D_POS_A,  3176,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7308,  3,  D_POS_B,  3224,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7308,  3,  D_POS_C,  3272,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7308,  3,  D_POS_D,  3320,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7309,  3,  D_POS_A,  3178,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7309,  3,  D_POS_B,  3226,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7309,  3,  D_POS_C,  3274,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7309,  3,  D_POS_D,  3322,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7310,  3,  D_POS_A,  3180,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7310,  3,  D_POS_B,  3228,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7310,  3,  D_POS_C,  3276,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7310,  3,  D_POS_D,  3324,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7311,  3,  D_POS_A,  3182,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7311,  3,  D_POS_B,  3230,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7311,  3,  D_POS_C,  3278,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7311,  3,  D_POS_D,  3326,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7312,  3,  D_POS_B,  3232,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7312,  3,  D_POS_C,  3280,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7313,  3,  D_POS_B,  3234,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7313,  3,  D_POS_C,  3282,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7314,  3,  D_POS_A,  3176,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7314,  3,  D_POS_B,  3224,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7314,  3,  D_POS_C,  3272,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7314,  3,  D_POS_D,  3320,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7315,  3,  D_POS_A,  3178,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7315,  3,  D_POS_B,  3226,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7315,  3,  D_POS_C,  3274,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7315,  3,  D_POS_D,  3322,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7316,  3,  D_POS_A,  3180,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7316,  3,  D_POS_B,  3228,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7316,  3,  D_POS_C,  3276,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7316,  3,  D_POS_D,  3324,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7317,  3,  D_POS_A,  3182,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7317,  3,  D_POS_B,  3230,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7317,  3,  D_POS_C,  3278,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7317,  3,  D_POS_D,  3326,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7318,  3,  D_POS_B,  3232,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7318,  3,  D_POS_C,  3280,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7319,  3,  D_POS_B,  3234,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7319,  3,  D_POS_C,  3282,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7320,  3,  D_POS_A,  3176,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7320,  3,  D_POS_B,  3224,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7320,  3,  D_POS_C,  3272,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7320,  3,  D_POS_D,  3320,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7321,  3,  D_POS_A,  3178,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7321,  3,  D_POS_B,  3226,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7321,  3,  D_POS_C,  3274,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7321,  3,  D_POS_D,  3322,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7322,  3,  D_POS_A,  3180,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7322,  3,  D_POS_B,  3228,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7322,  3,  D_POS_C,  3276,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7322,  3,  D_POS_D,  3324,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7323,  3,  D_POS_A,  3182,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7323,  3,  D_POS_B,  3230,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7323,  3,  D_POS_C,  3278,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7323,  3,  D_POS_D,  3326,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7324,  3,  D_POS_B,  3232,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7324,  3,  D_POS_C,  3280,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7325,  3,  D_POS_B,  3234,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7325,  3,  D_POS_C,  3282,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7326,  3,  D_POS_A,  3176,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7326,  3,  D_POS_B,  3224,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7326,  3,  D_POS_C,  3272,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7326,  3,  D_POS_D,  3320,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7327,  3,  D_POS_A,  3178,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7327,  3,  D_POS_B,  3226,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7327,  3,  D_POS_C,  3274,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7327,  3,  D_POS_D,  3322,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7328,  3,  D_POS_A,  3180,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7328,  3,  D_POS_B,  3228,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7328,  3,  D_POS_C,  3276,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7328,  3,  D_POS_D,  3324,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7329,  3,  D_POS_A,  3182,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7329,  3,  D_POS_B,  3230,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7329,  3,  D_POS_C,  3278,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7329,  3,  D_POS_D,  3326,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7330,  3,  D_POS_B,  3232,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7330,  3,  D_POS_C,  3280,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7331,  3,  D_POS_B,  3234,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7331,  3,  D_POS_C,  3282,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7332,  3,  D_POS_A,  3176,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7332,  3,  D_POS_B,  3224,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7332,  3,  D_POS_C,  3272,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7332,  3,  D_POS_D,  3320,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7333,  3,  D_POS_A,  3178,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7333,  3,  D_POS_B,  3226,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7333,  3,  D_POS_C,  3274,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7333,  3,  D_POS_D,  3322,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7334,  3,  D_POS_A,  3180,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7334,  3,  D_POS_B,  3228,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7334,  3,  D_POS_C,  3276,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7334,  3,  D_POS_D,  3324,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7335,  3,  D_POS_A,  3182,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7335,  3,  D_POS_B,  3230,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7335,  3,  D_POS_C,  3278,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7335,  3,  D_POS_D,  3326,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7336,  3,  D_POS_B,  3232,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7336,  3,  D_POS_C,  3280,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7337,  3,  D_POS_B,  3234,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7337,  3,  D_POS_C,  3282,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7338,  3,  D_POS_A,  3176,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7338,  3,  D_POS_B,  3224,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7338,  3,  D_POS_C,  3272,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7338,  3,  D_POS_D,  3320,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7339,  3,  D_POS_A,  3178,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7339,  3,  D_POS_B,  3226,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7339,  3,  D_POS_C,  3274,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7339,  3,  D_POS_D,  3322,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7340,  3,  D_POS_A,  3180,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7340,  3,  D_POS_B,  3228,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7340,  3,  D_POS_C,  3276,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7340,  3,  D_POS_D,  3324,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7341,  3,  D_POS_A,  3182,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7341,  3,  D_POS_B,  3230,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7341,  3,  D_POS_C,  3278,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7341,  3,  D_POS_D,  3326,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7342,  3,  D_POS_B,  3232,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7342,  3,  D_POS_C,  3280,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7343,  3,  D_POS_B,  3234,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7343,  3,  D_POS_C,  3282,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7344,  3,  D_POS_A,  3177,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门1
{0x7344,  3,  D_POS_B,  3225,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7344,  3,  D_POS_C,  3273,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7344,  3,  D_POS_D,  3321,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7345,  3,  D_POS_A,  3179,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门2
{0x7345,  3,  D_POS_B,  3227,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7345,  3,  D_POS_C,  3275,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7345,  3,  D_POS_D,  3323,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7346,  3,  D_POS_A,  3181,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门3
{0x7346,  3,  D_POS_B,  3229,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7346,  3,  D_POS_C,  3277,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7346,  3,  D_POS_D,  3325,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7347,  3,  D_POS_A,  3183,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门4
{0x7347,  3,  D_POS_B,  3231,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7347,  3,  D_POS_C,  3279,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },
{0x7347,  3,  D_POS_D,  3327,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7348,  3,  D_POS_B,  3233,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门5
{0x7348,  3,  D_POS_C,  3281,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

{0x7349,  3,  D_POS_B,  3235,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },//门6
{0x7349,  3,  D_POS_C,  3283,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_DCU    },

    {0x9201,  2,  D_POS_A,  3440,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9201,  2,  D_POS_D,  3443,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9202,  2,  D_POS_A,  3440,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9202,  2,  D_POS_D,  3443,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9303,  3,  D_POS_A,  3440,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9303,  3,  D_POS_D,  3443,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9304,  3,  D_POS_A,  3440,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9304,  3,  D_POS_D,  3443,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9305,  3,  D_POS_A,  3440,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9305,  3,  D_POS_B,  3441,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9305,  3,  D_POS_C,  3442,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9305,  3,  D_POS_D,  3443,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9306,  3,  D_POS_A,  3440,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9306,  3,  D_POS_B,  3441,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9306,  3,  D_POS_C,  3442,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9306,  3,  D_POS_D,  3443,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9307,  3,  D_POS_A,  3440,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9307,  3,  D_POS_B,  3441,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9307,  3,  D_POS_C,  3442,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9307,  3,  D_POS_D,  3443,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9308,  3,  D_POS_A,  3440,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9308,  3,  D_POS_B,  3441,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9308,  3,  D_POS_C,  3442,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9308,  3,  D_POS_D,  3443,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9309,  3,  D_POS_A,  3440,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9309,  3,  D_POS_B,  3441,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9309,  3,  D_POS_C,  3442,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9309,  3,  D_POS_D,  3443,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9310,  3,  D_POS_A,  3440,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9310,  3,  D_POS_B,  3441,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9310,  3,  D_POS_C,  3442,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9310,  3,  D_POS_D,  3443,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9311,  3,  D_POS_A,  3440,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9311,  3,  D_POS_B,  3441,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9311,  3,  D_POS_C,  3442,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9311,  3,  D_POS_D,  3443,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9312,  3,  D_POS_B,  3441,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9312,  3,  D_POS_C,  3442,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9313,  3,  D_POS_B,  3441,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9313,  3,  D_POS_C,  3442,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9314,  3,  D_POS_A,  3444,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9314,  3,  D_POS_B,  3444,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9314,  3,  D_POS_C,  3444,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9314,  3,  D_POS_D,  3444,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9315,  3,  D_POS_A,  3444,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9315,  3,  D_POS_B,  3444,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9315,  3,  D_POS_C,  3444,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9315,  3,  D_POS_D,  3444,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9203,  2,  D_POS_E ,  3445,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    //{0x9203,  3,  D_POS_D,  3445,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9317,  3,  D_POS_E ,  3445,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    //{0x9317,  3,  D_POS_D,  3445,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9318,  3,  D_POS_E ,  3445,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    //{0x9318,  3,  D_POS_D,  3445,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9101,  1,  D_POS_A,  3445,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9101,  1,  D_POS_D,  3445,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9204,  2,  D_POS_A,  3445,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_B,  3445,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_C,  3445,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_D,  3445,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

{0xA301,  3,  D_POS_A,  1062,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA301,  3,  D_POS_B,  1094,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA301,  3,  D_POS_C,  1126,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA301,  3,  D_POS_D,  1158,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA302,  3,  D_POS_A,  1062,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA302,  3,  D_POS_B,  1094,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA302,  3,  D_POS_C,  1126,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA302,  3,  D_POS_D,  1158,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA303,  3,  D_POS_A,  1062,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA303,  3,  D_POS_B,  1094,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA303,  3,  D_POS_C,  1126,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA303,  3,  D_POS_D,  1158,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA304,  3,  D_POS_A,  1062,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA304,  3,  D_POS_B,  1094,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA304,  3,  D_POS_C,  1126,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA304,  3,  D_POS_D,  1158,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA305,  3,  D_POS_A,  1062,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA305,  3,  D_POS_B,  1094,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA305,  3,  D_POS_C,  1126,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA305,  3,  D_POS_D,  1158,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA306,  3,  D_POS_A,  1062,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA306,  3,  D_POS_B,  1094,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA306,  3,  D_POS_C,  1126,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA306,  3,  D_POS_D,  1158,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA307,  3,  D_POS_A,  1062,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA307,  3,  D_POS_B,  1094,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA307,  3,  D_POS_C,  1126,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA307,  3,  D_POS_D,  1158,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA308,  3,  D_POS_A,  1062,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA308,  3,  D_POS_B,  1094,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA308,  3,  D_POS_C,  1126,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA308,  3,  D_POS_D,  1158,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA309,  3,  D_POS_A,  1062,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA309,  3,  D_POS_B,  1094,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA309,  3,  D_POS_C,  1126,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA309,  3,  D_POS_D,  1158,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA310,  3,  D_POS_A,  1062,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA310,  3,  D_POS_B,  1094,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA310,  3,  D_POS_C,  1126,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA310,  3,  D_POS_D,  1158,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA311,  3,  D_POS_A,  1062,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA311,  3,  D_POS_B,  1094,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA311,  3,  D_POS_C,  1126,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA311,  3,  D_POS_D,  1158,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA312,  3,  D_POS_A,  1062,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA312,  3,  D_POS_B,  1094,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA312,  3,  D_POS_C,  1126,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA312,  3,  D_POS_D,  1158,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA313,  3,  D_POS_A,  1062,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA313,  3,  D_POS_B,  1094,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA313,  3,  D_POS_C,  1126,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA313,  3,  D_POS_D,  1158,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA314,  3,  D_POS_A,  1062,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA314,  3,  D_POS_B,  1094,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA314,  3,  D_POS_C,  1126,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA314,  3,  D_POS_D,  1158,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA315,  3,  D_POS_A,  1062,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA315,  3,  D_POS_B,  1094,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA315,  3,  D_POS_C,  1126,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA315,  3,  D_POS_D,  1158,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

{0xA316,  3,  D_POS_A,  1062,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA316,  3,  D_POS_B,  1094,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA316,  3,  D_POS_C,  1126,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
{0xA316,  3,  D_POS_D,  1158,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

//{0xB201,  2,  D_POS_E,  3449,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },//FAS 通信故障
//{0xB201,  3,  D_POS_D,  569,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB201,  2,  D_POS_A,  3804,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },//FAS1和FAS2之间的 通信故障
{0xB201,  2,  D_POS_D,  3805,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB202,  2,  D_POS_A,  3450,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB202,  2,  D_POS_B,  3453,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB202,  2,  D_POS_C,  3455,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB202,  2,  D_POS_D,  3457,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB203,  2,  D_POS_A,  3450,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB203,  2,  D_POS_B,  3453,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB203,  2,  D_POS_C,  3455,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB203,  2,  D_POS_D,  3457,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB204,  2,  D_POS_A,  3450,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB204,  2,  D_POS_B,  3453,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB204,  2,  D_POS_C,  3455,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB204,  2,  D_POS_D,  3457,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB205,  2,  D_POS_A,  3450,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB205,  2,  D_POS_B,  3453,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB205,  2,  D_POS_C,  3455,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB205,  2,  D_POS_D,  3457,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB206,  2,  D_POS_A,  3450,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB206,  2,  D_POS_B,  3453,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB206,  2,  D_POS_C,  3455,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB206,  2,  D_POS_D,  3457,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB207,  2,  D_POS_A,  3450,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB207,  2,  D_POS_B,  3453,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB207,  2,  D_POS_C,  3455,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB207,  2,  D_POS_D,  3457,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB208,  2,  D_POS_A,  3451,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB208,  2,  D_POS_B,  3454,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB208,  2,  D_POS_C,  3456,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB208,  2,  D_POS_D,  3458,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB209,  2,  D_POS_A,  3451,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB209,  2,  D_POS_B,  3454,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB209,  2,  D_POS_C,  3456,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB209,  2,  D_POS_D,  3458,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB210,  2,  D_POS_A,  3451,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB210,  2,  D_POS_B,  3454,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB210,  2,  D_POS_C,  3456,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB210,  2,  D_POS_D,  3458,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB211,  2,  D_POS_A,  3451,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB211,  2,  D_POS_B,  3454,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB211,  2,  D_POS_C,  3456,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB211,  2,  D_POS_D,  3458,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB212,  2,  D_POS_A,  3451,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB212,  2,  D_POS_B,  3454,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB212,  2,  D_POS_C,  3456,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB212,  2,  D_POS_D,  3458,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB213,  2,  D_POS_A,  3451,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB213,  2,  D_POS_B,  3454,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB213,  2,  D_POS_C,  3456,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB213,  2,  D_POS_D,  3458,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB214,  2,  D_POS_A,  3451,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB214,  2,  D_POS_B,  3454,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB214,  2,  D_POS_C,  3456,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB214,  2,  D_POS_D,  3458,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB215,  2,  D_POS_A,  3451,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB215,  2,  D_POS_B,  3454,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB215,  2,  D_POS_C,  3456,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB215,  2,  D_POS_D,  3458,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB216,  2,  D_POS_A,  3451,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB216,  2,  D_POS_B,  3454,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB216,  2,  D_POS_C,  3456,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB216,  2,  D_POS_D,  3458,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB217,  2,  D_POS_A,  3451,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB217,  2,  D_POS_B,  3454,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB217,  2,  D_POS_C,  3456,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB217,  2,  D_POS_D,  3458,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB218,  2,  D_POS_A,  3451,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB218,  2,  D_POS_B,  3454,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB218,  2,  D_POS_C,  3456,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB218,  2,  D_POS_D,  3458,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB219,  2,  D_POS_A,  3451,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB219,  2,  D_POS_B,  3454,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB219,  2,  D_POS_C,  3456,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB219,  2,  D_POS_D,  3458,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB220,  2,  D_POS_A,  3452,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB220,  2,  D_POS_B,  3455,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB220,  2,  D_POS_C,  3457,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB220,  2,  D_POS_D,  3459,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB221,  2,  D_POS_A,  3452,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB221,  2,  D_POS_B,  3455,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB221,  2,  D_POS_C,  3457,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB221,  2,  D_POS_D,  3459,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB222,  2,  D_POS_A,  3452,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB222,  2,  D_POS_B,  3455,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB222,  2,  D_POS_C,  3457,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB222,  2,  D_POS_D,  3459,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB223,  2,  D_POS_A,  3452,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB223,  2,  D_POS_B,  3455,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB223,  2,  D_POS_C,  3457,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB223,  2,  D_POS_D,  3459,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB224,  2,  D_POS_A,  3452,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB224,  2,  D_POS_B,  3455,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB224,  2,  D_POS_C,  3457,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB224,  2,  D_POS_D,  3459,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB225,  2,  D_POS_A,  3452,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB225,  2,  D_POS_B,  3455,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB225,  2,  D_POS_C,  3457,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB225,  2,  D_POS_D,  3459,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB226,  2,  D_POS_A,  3452,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB226,  2,  D_POS_D,  3459,   bit15,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB227,  2,  D_POS_A,  3452,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB227,  2,  D_POS_D,  3459,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB228,  2,  D_POS_A,  3452,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB228,  2,  D_POS_D,  3459,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB229,  2,  D_POS_A,  3452,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB229,  2,  D_POS_D,  3459,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB230,  2,  D_POS_A,  3452,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB230,  2,  D_POS_D,  3459,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB231,  2,  D_POS_A,  3452,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB231,  2,  D_POS_D,  3459,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB232,  2,  D_POS_A,  3453,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB232,  2,  D_POS_D,  3460,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB233,  2,  D_POS_A,  3453,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB233,  2,  D_POS_D,  3460,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB234,  2,  D_POS_A,  3453,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB234,  2,  D_POS_D,  3460,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB235,  2,  D_POS_A,  3453,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB235,  2,  D_POS_D,  3460,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB236,  2,  D_POS_A,  3453,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB236,  2,  D_POS_D,  3460,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

{0xB237,  2,  D_POS_A,  3453,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },
{0xB237,  2,  D_POS_D,  3460,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_FAS    },

};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);

bool FaultsVerdict(FAULTS_ROM_DATA *pdata) //故障判断 通信中断方面的
{
    if ((pdata->code >= 0x1100) && (pdata->code <= 0x1307))
    {
        if (0x1106 == pdata->code)//CCU中断
        {
            if ((D_POS_E == pdata->pos) && g_ccu_comm_err_flg) //北六的八节车厢
            {
                return true;
            }
        }
        else if (0x1301 == pdata->code)//判断各网关及DI，DO通信中断
        {
            if (((D_POS_A == pdata->pos) && g_riom1_gw123_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_gw123_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_gw123_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_gw123_comm_err_flg)) //北六的八节车厢
            {
                return true;
            }
        }
        else if (0x1302 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_di1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_di1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_di1_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1303 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di2_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_di2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1304 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di3_comm_err_flg)
                ||((D_POS_D == pdata->pos) && g_riom4_di3_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1305 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_do1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_do1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_do1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_do1_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1306 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_ai1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_ai1_comm_err_flg))
             {
                return true;
             }
        }
        else if (0x1101 == pdata->code)//显示屏通信中断
        {
            if (((D_POS_A == pdata->pos) && g_hmi1_comm_err_flg)||((D_POS_D == pdata->pos) && g_hmi2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1103 == pdata->code)//TCU通信中断
        {
            if (((D_POS_B == pdata->pos) && g_tcu1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_tcu2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1104 == pdata->code)//ACU通信中断
        {
            if (((D_POS_A == pdata->pos) && g_acu1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_acu2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1102 == pdata->code)//BCU通信中断
        {
            if (((D_POS_A == pdata->pos) && g_bcu1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_bcu2_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_bcu3_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_bcu4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1105 == pdata->code)//门通信中断
        {
            if (((D_POS_A == pdata->pos) && g_edcu1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_edcu2_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_edcu3_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_edcu4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1202 == pdata->code)//HVAC通信中断
        {
            if (((D_POS_A == pdata->pos) && g_hvac1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_hvac2_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_hvac3_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_hvac4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1201 == pdata->code)//PIS通信中断
        {
            if (((D_POS_A == pdata->pos) && g_pis1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_pis2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1203 == pdata->code)//FAS通信中断
        {
            if (((D_POS_A == pdata->pos) && g_fas1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_fas2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1204 == pdata->code)//PDS通信中断
        {
            if (((D_POS_A == pdata->pos) && g_pds1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_pds2_comm_err_flg))
            {
                return true;
            }
        }
    }
    else if (0 != (g_dataBuffer[pdata->word] & pdata->bit))//其余的故障，按位取的故障
    {
        return true;
    }

    return false;
}

void AddNewFaultRecordToHistoryList(ST_HISTORY_FAULT_INFO &newinfo)
{
    if (g_historyFaultsList.curIdx < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx += 1;
    }
    else
    {
        g_historyFaultsList.curIdx = 1;
    }

    CheckIndexRange(g_historyFaultsList.curIdx, __LINE__);

    g_historyFaultsList.list[g_historyFaultsList.curIdx] = newinfo;

    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.cnt += 1;
    }

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);
}

int GetHistoryFaultsListCount()
{
    return g_historyFaultsList.cnt;
}

ST_HISTORY_FAULT_INFO * GetHistoryFaultInfoAt(int num)
{
    ASSERT(num <= D_HISTORY_FAULT_LIST_MAX_CNT);

    ST_HISTORY_FAULT_INFO *pdata = NULL;

    int i;
    int index = g_historyFaultsList.curIdx;

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);

    if(index < 1)
        index = g_historyFaultsList.cnt;

    for (i = 0; i < num; i++)
    {
        if (1 >= index)
        {
            index = g_historyFaultsList.cnt;
        }
        else
        {
            index -= 1;
        }
    }

    CheckIndexRange(index, __LINE__);

    pdata = &g_historyFaultsList.list[index];

    return pdata;
}

void HistoryFaultsLoad()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);
    if (!fs.is_open())
    {
        return ;
    }
    fs.read((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();
}

QString HistoryFaultsOutput()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    fs.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();

    return fName;
}

void SearchAndSaveEndDateTime(int idx, QDateTime &datetime)
{
    ST_HISTORY_FAULT_INFO *pdata;
    int i = 0;
    int historyCnt = GetHistoryFaultsListCount();
    int curIndex = g_historyFaultsList.curIdx;

    CheckIndexRange(curIndex, __LINE__);
    CheckIndexRange(historyCnt, __LINE__);

    pdata = &g_historyFaultsList.list[curIndex];

    for (i=0; i<historyCnt; i++)
    {
        if ((idx == pdata->romIdx) && !(pdata->isEnd))
        {
            pdata->isEnd = true;
            pdata->end_datetime.year = datetime.date().year();
            pdata->end_datetime.month = datetime.date().month();
            pdata->end_datetime.day = datetime.date().day();
            pdata->end_datetime.hour = datetime.time().hour();
            pdata->end_datetime.minute = datetime.time().minute();
            pdata->end_datetime.second = datetime.time().second();
            break;
        }
        if (1 >= curIndex)
        {
            curIndex = historyCnt;

            CheckIndexRange(curIndex, __LINE__);

            pdata = &g_historyFaultsList.list[curIndex];
        }
        else
        {
            pdata--;
            curIndex--;
        }
    }
}

int FaultsScanning()
{
    int ret = -1;
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    QDateTime datetime = QDateTime::currentDateTime();
    int realtimefaultscount = 0;
    ST_HISTORY_FAULT_INFO newinfo;

    for (i=0; i<g_faultsRomLen; i++)
    {
        if (FaultsVerdict(pdata)) //故障判断 通信中断方面的
        {
            if (pdata->flg)
            {   // if it's already exist
                // then leave it alone
            }
            else
            {

                //                if (!AntiShakingProcess(i, true))
                //                {
                //                    pdata++;
                //                    continue;
                //                }
                pdata->flg = true;
                pdata->confirm = false;
                // a new fault occurs
                // create a fault record
                newinfo.romIdx = i;
                newinfo.start_datetime.year = datetime.date().year();
                newinfo.start_datetime.month = datetime.date().month();
                newinfo.start_datetime.day = datetime.date().day();
                newinfo.start_datetime.hour = datetime.time().hour();
                newinfo.start_datetime.minute = datetime.time().minute();
                newinfo.start_datetime.second = datetime.time().second();
                newinfo.isEnd = false;

                AddNewFaultRecordToHistoryList(newinfo);

                // if "found" is true, faults history file saving is needed when the scanning is finished!
                found = true;

                //add fault to real time list
                ST_REALTIME_FAULT_INFO realtimeFault;
                realtimeFault.nRomIndex = i;
                realtimeFault.start_datetime = newinfo.start_datetime;
                g_realtimeFaultsList.push_front(realtimeFault);
                //g_realtime_faults_datetime_array[i] = newinfo.start_datetime;

                if(g_bScannFault)
                {
                    //show real time fault page  不在实时故障页面才会去显示它
                    if((pdata->level == 1 || pdata->level == 2)
                        && CGlobal::m_nCurPageIndex != PAGE_INDEX_REALTIMEFAULT)
                    {
                        if(pdata->code != 0x120A && pdata->code != 0x120B)
                        {
                            g_backtoprepage = false;
                            SetFaultType(E_FAULTS_TYPE_REALTIME);
                            CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
                            if (pPage == NULL)
                                return false;
              //              pPage->ChangePage(PAGE_INDEX_REALTIMEFAULT);
                        }
                    }
                }
            }
            if ((1 == pdata->level) || (2 == pdata->level))
            {
                realtimefaultscount += 1;
                if (-1 == ret)
                {
                    ret = i;
                }
            }
        }
        else
        {
            if (pdata->flg)
            {   // fault disapear
//                if (!AntiShakingProcess(i, false))
//                {
//                    pdata++;
//                    continue;
//                }
                pdata->flg = false;
                pdata->confirm = false;
                // search in the history list and if found, mark it end...
                SearchAndSaveEndDateTime(i, datetime);

                found = true;
                //remove fault from real time list
                for(int ii = 0; ii < g_realtimeFaultsList.size(); ii++)
                {
                    if(g_realtimeFaultsList[ii].nRomIndex == i)
                    {
                        g_realtimeFaultsList.removeAt(ii);
                        break;
                    }
                }
            }
        }
        pdata++;
    }
    if (found)
    {
        HistoryFaultsOutput();
    }
    g_RealTimeFaultsNum = realtimefaultscount;

    return ret;
}

void SetFaultType(E_FAULTS_TYPE type)
{
    g_fault_type = type;
    switch (type)
    {
    case E_FAULTS_TYPE_HISTORY:
        g_subSystemFaultsTitle = QSTR("历史故障");
        break;
    case E_FAULTS_TYPE_TODAY:
        g_subSystemFaultsTitle = QSTR("今日故障");
        break;
    case E_FAULTS_TYPE_REALTIME:
        g_subSystemFaultsTitle = QSTR("实时故障");//决定标题栏的显示
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ALL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
//    case E_FAULTS_TYPE_LEVEL3:
//        g_subSystemFaultsTitle = QSTR("三级故障");
//        break;
    case E_FAULTS_TYPE_CAB:
        g_subSystemFaultsTitle = QSTR("司机室故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_CAB;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ACU:
        g_subSystemFaultsTitle = QSTR("辅助系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ACU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_BCU:
        g_subSystemFaultsTitle = QSTR("制动装置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_BCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCU:
        g_subSystemFaultsTitle = QSTR("牵引系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_HVAC:
        g_subSystemFaultsTitle = QSTR("空调设置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_HVAC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ATC:
        g_subSystemFaultsTitle = QSTR("ATC故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ATC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_PIS:
        g_subSystemFaultsTitle = QSTR("PIS故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_PIS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCMS:
        g_subSystemFaultsTitle = QSTR("网络故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCMS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_DOOR:
        g_subSystemFaultsTitle = QSTR("门故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_DCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TL:
        g_subSystemFaultsTitle = QSTR("TL故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_FAS:
        g_subSystemFaultsTitle = QSTR("烟火故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_FAS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_RESERVE:
        g_subSystemFaultsTitle = QSTR("保留故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_RSV;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    default:
        ASSERT(false);
        break;
    }
}

QString GetCategoryStr(int iGategory)
{
    QString str = "";
    switch(iGategory)
    {
    case E_FAULTS_CATEGORY_CAB:
        str = "CAB";
        break;
    case E_FAULTS_CATEGORY_ACU:
        str = "ACU";
        break;
    case E_FAULTS_CATEGORY_BCU:
        str = "BCU";
        break;
    case E_FAULTS_CATEGORY_TCU:
        str = "TCU";
        break;
    case E_FAULTS_CATEGORY_HVAC:
        str = "HVAC";
        break;
    case E_FAULTS_CATEGORY_ATC:
        str = "ATC";
        break;
    case E_FAULTS_CATEGORY_PIS:
        str = "PIS";
        break;
    case E_FAULTS_CATEGORY_TCMS:
        str = "TCMS";
        break;
    case E_FAULTS_CATEGORY_DCU:
        str = "DOOR";
        break;
    case E_FAULTS_CATEGORY_TL:
        str = "TL";
        break;
    case E_FAULTS_CATEGORY_FAS:
        str = "FAS";
        break;
    case E_FAULTS_CATEGORY_PDS:
        str = "PDS";
        break;
    case E_FAULTS_CATEGORY_RSV:
        str = "RESERVE";
        break;
    default:
        str = "-";
        break;
    }

    return str;
}

int FindFaultsNameTableIndex(int code)
{
    int idx = -1;
    int i = 0;
    ST_FAULT_INFO *pdata = &g_faultsinforom[0];
    for (i = 0; i < g_faultsInfoRomLen; i++)
    {
        if (code == pdata->code)
        {
            idx = i;
            break;
        }
        pdata++;
    }
    return idx;
}

void HistoryFaultsListInit()
{
    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));
    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;

    HistoryFaultsLoad();
    if(g_historyFaultsList.curIdx < 0 || g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx = 0;
    }
}

QString GetCarriageString(char position)
{
    QString str = "- ";
    switch (position)
    {
    case D_POS_A:
        str = "TC1  ";
        break;
    case D_POS_B:
        str = "Mp1  ";
        break;
    case D_POS_C:
        //str = "M1  ";
        str = "Mp2  ";
        break;
    case D_POS_D:
        //str = "Mp3  ";
        str = "TC2  ";
        break;
    case D_POS_E:
        str = "   ";
        break;
    case D_POS_F:
        str = "M2 ";
        break;
    case D_POS_G:
        str = "Mp2 ";
        break;
    case D_POS_H:
        str = "TC2 ";
        break;
    default:
        break;
    }

    return str;
}

void CheckIndexRange(int& index, int linenum)
{
    bool bError = false;
    if(index < 1)
    {
        index = 1;
        bError = true;
    }
    if(index > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        index = D_HISTORY_FAULT_LIST_MAX_CNT;
        bError = true;
    }

#ifdef LOG_OPEN
    if(bError)
    {
       QString writeStr = GetDateStr() + " " + GetTimeStr() + ":RangeError at line " + QString::number(linenum) + "\n";
       fstream fs;
       fs.open((qApp->applicationDirPath().toStdString() + g_logFileName).c_str(), ios_base::out | ios_base::app);
       fs.write(writeStr.toStdString().c_str(), writeStr.length());
       fs.close();
    }
#endif
}
