#ifndef CFAULTSCOMMONPROCESS_H
#define CFAULTSCOMMONPROCESS_H

#include "qstring.h"

enum E_FAULTS_TYPE//故障种类
{
    E_FAULTS_TYPE_HISTORY  =  0,
    E_FAULTS_TYPE_TODAY,
    E_FAULTS_TYPE_REALTIME,
    E_FAULTS_TYPE_LEVEL3,
    E_FAULTS_TYPE_CAB,
    E_FAULTS_TYPE_ACU,
    E_FAULTS_TYPE_BCU,
    E_FAULTS_TYPE_TCU,
    E_FAULTS_TYPE_HVAC,
    E_FAULTS_TYPE_ATC,
    E_FAULTS_TYPE_PIS,
    E_FAULTS_TYPE_TCMS,
    E_FAULTS_TYPE_DOOR,
    E_FAULTS_TYPE_TL,
    E_FAULTS_TYPE_FAS,
    E_FAULTS_TYPE_RESERVE
};

enum E_FAULTS_CATEGORY //故障类别
{
    E_FAULTS_CATEGORY_ALL = 0,
    E_FAULTS_CATEGORY_CAB,
    E_FAULTS_CATEGORY_ACU,
    E_FAULTS_CATEGORY_BCU,
    E_FAULTS_CATEGORY_TCU,
    E_FAULTS_CATEGORY_HVAC,
    E_FAULTS_CATEGORY_ATC,
    E_FAULTS_CATEGORY_PIS,
    E_FAULTS_CATEGORY_TCMS,
    E_FAULTS_CATEGORY_DCU,
    E_FAULTS_CATEGORY_TL,
    E_FAULTS_CATEGORY_FAS,
    E_FAULTS_CATEGORY_PDS,
    E_FAULTS_CATEGORY_RSV
};


typedef struct {
    int year;
    char month;
    char day;
    char hour;
    char minute;
    char second;
} ST_DATETIME;

typedef struct fault_rom_data
{
    int code;
    char level;
    char pos;
    int word;
    int bit;
    bool flg;
    bool confirm;
    bool confirm_flg;
    E_FAULTS_CATEGORY category;

    fault_rom_data* operator ->()
    {
        return this;
    }

} FAULTS_ROM_DATA;

typedef struct fault_info_stru {
    int code;
    QString name;
    QString advice;
} ST_FAULT_INFO; //弹出的故障提示

typedef struct historyfaultinfo {
    int romIdx;
    ST_DATETIME start_datetime;
    bool isEnd;
    ST_DATETIME end_datetime;
} ST_HISTORY_FAULT_INFO;//历史故障信息

typedef struct realtimefaultinfo{
    ST_DATETIME start_datetime;
    int nRomIndex;
}ST_REALTIME_FAULT_INFO;//实时故障信息

#define D_HISTORY_FAULT_LIST_MAX_CNT    5000

typedef struct historyfaultslist {
    int cnt;
    int curIdx;
    ST_HISTORY_FAULT_INFO list[D_HISTORY_FAULT_LIST_MAX_CNT+10];
} ST_HISTORY_FAULTS_LIST;

#define D_CONDITION_FILTER_LEVEL_ALL    0
#define D_CONDITION_FILTER_LEVEL_12     1
#define D_CONDITION_FILTER_LEVEL_3      3


#define D_POS_A         1
#define D_POS_B         2
#define D_POS_C         3
#define D_POS_D         4
#define D_POS_E         5
#define D_POS_F         6
#define D_POS_G         7
#define D_POS_H         8

typedef struct {
    char level;
} ST_HISTORY_CONDITION_FILTER;

typedef struct {
    char level;
    char category;
} ST_REALTIME_CONDITION_FILTER;


extern FAULTS_ROM_DATA g_faultsrom[];
extern int g_faultsRomLen;

extern ST_FAULT_INFO g_faultsinforom[];
extern int g_faultsInfoRomLen;

extern int FaultsScanning();
extern void SetFaultType(E_FAULTS_TYPE type);
extern QString GetCategoryStr(int iGategory);
extern int FindFaultsNameTableIndex(int code);
extern ST_HISTORY_FAULT_INFO * GetHistoryFaultInfoAt(int num);
extern int GetHistoryFaultsListCount();
extern void HistoryFaultsListInit();
extern QString GetCarriageString(char position);

extern ST_HISTORY_FAULTS_LIST g_historyFaultsList;
extern ST_HISTORY_CONDITION_FILTER g_historyConditionFilter;
extern ST_REALTIME_CONDITION_FILTER g_realTimeConditionFilter;
//extern ST_DATETIME g_realtime_faults_datetime_array[1500];

extern int g_RealTimeFaultsNum;
extern void CheckIndexRange(int& index, int linenum);

class CFaultsCommonProcess
{
public:
    CFaultsCommonProcess();
};

#endif // CFAULTSCOMMONPROCESS_H
