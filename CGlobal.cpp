#include "CGlobal.h"
#include "CPage.h"
#include <fstream>
#include <sstream>
#include <qdatetime.h>
#include <qfile.h>
#include <qdir.h>
#include <qsettings.h>
#include <qtextcodec.h>
#include <stdlib.h>
#include <qdebug.h>

using namespace std;

extern vector<CPage*>  g_PageVec;

int udp_num = 0;
int udp_num4 = 0;

bool g_udp_comm_err_flg1= false;
bool g_udp_comm_err_flg2= false;

bool g_485_comm_err_flg1 = false;
bool g_485_comm_err_flg2 = false;
bool g_mvb_comm_err_flg1 = false;
bool g_mvb_comm_err_flg2 = false;
bool g_riom1_gw123_comm_err_flg = false;
bool g_riom1_di1_comm_err_flg = false;
bool g_riom1_di2_comm_err_flg = false;
bool g_riom1_di3_comm_err_flg = false;
bool g_riom1_di4_comm_err_flg = false;
bool g_riom1_do1_comm_err_flg = false;
bool g_riom1_do2_comm_err_flg = false;
bool g_riom1_ai1_comm_err_flg = false;
bool g_riom2_gw123_comm_err_flg = false;
bool g_riom2_di1_comm_err_flg = false;
bool g_riom2_di2_comm_err_flg = false;
bool g_riom2_di3_comm_err_flg = false;
bool g_riom2_di4_comm_err_flg = false;
bool g_riom2_do1_comm_err_flg = false;
bool g_riom2_do2_comm_err_flg = false;
bool g_riom2_ai1_comm_err_flg = false;
bool g_riom3_gw123_comm_err_flg = false;
bool g_riom3_di1_comm_err_flg = false;
bool g_riom3_di2_comm_err_flg = false;
bool g_riom3_di3_comm_err_flg = false;
bool g_riom3_di4_comm_err_flg = false;
bool g_riom3_do1_comm_err_flg = false;
bool g_riom3_do2_comm_err_flg = false;
bool g_riom3_ai1_comm_err_flg = false;
bool g_riom4_gw123_comm_err_flg = false;
bool g_riom4_di1_comm_err_flg = false;
bool g_riom4_di2_comm_err_flg = false;
bool g_riom4_di3_comm_err_flg = false;
bool g_riom4_di4_comm_err_flg = false;
bool g_riom4_do1_comm_err_flg = false;
bool g_riom4_do2_comm_err_flg = false;
bool g_riom4_ai1_comm_err_flg = false;
bool g_riom5_gw123_comm_err_flg = false;
bool g_riom5_di1_comm_err_flg = false;
bool g_riom5_di2_comm_err_flg = false;
bool g_riom5_di3_comm_err_flg = false;
bool g_riom5_di4_comm_err_flg = false;
bool g_riom5_do1_comm_err_flg = false;
bool g_riom5_do2_comm_err_flg = false;
bool g_riom5_ai1_comm_err_flg = false;
bool g_riom6_gw123_comm_err_flg = false;
bool g_riom6_di1_comm_err_flg = false;
bool g_riom6_di2_comm_err_flg = false;
bool g_riom6_di3_comm_err_flg = false;
bool g_riom6_di4_comm_err_flg = false;
bool g_riom6_do1_comm_err_flg = false;
bool g_riom6_do2_comm_err_flg = false;
bool g_riom6_ai1_comm_err_flg = false;
bool g_riom7_gw123_comm_err_flg = false;
bool g_riom7_di1_comm_err_flg = false;
bool g_riom7_di2_comm_err_flg = false;
bool g_riom7_di3_comm_err_flg = false;
bool g_riom7_di4_comm_err_flg = false;
bool g_riom7_do1_comm_err_flg = false;
bool g_riom7_do2_comm_err_flg = false;
bool g_riom7_ai1_comm_err_flg = false;
bool g_riom8_gw123_comm_err_flg = false;
bool g_riom8_di1_comm_err_flg = false;
bool g_riom8_di2_comm_err_flg = false;
bool g_riom8_di3_comm_err_flg = false;
bool g_riom8_di4_comm_err_flg = false;
bool g_riom8_do1_comm_err_flg = false;
bool g_riom8_do2_comm_err_flg = false;
bool g_riom8_ai1_comm_err_flg = false;
bool g_tcu1_comm_err_flg = false;
bool g_tcu2_comm_err_flg = false;
bool g_tcu3_comm_err_flg = false;
bool g_tcu4_comm_err_flg = false;
bool g_tcu5_comm_err_flg = false;
bool g_tcu6_comm_err_flg = false;

bool g_acu1_comm_err_flg = false;
bool g_acu2_comm_err_flg = false;
bool g_bcu1_comm_err_flg = false;
bool g_bcu2_comm_err_flg = false;
bool g_bcu3_comm_err_flg = false;
bool g_bcu4_comm_err_flg = false;
bool g_door1_comm_err_flg = false;
bool g_door2_comm_err_flg = false;
bool g_door3_comm_err_flg = false;
bool g_door4_comm_err_flg = false;
bool g_door5_comm_err_flg = false;
bool g_door6_comm_err_flg = false;
bool g_door7_comm_err_flg = false;
bool g_door8_comm_err_flg = false;

bool g_edcu1_comm_err_flg = false;
bool g_edcu2_comm_err_flg = false;
bool g_edcu3_comm_err_flg = false;
bool g_edcu4_comm_err_flg = false;
bool g_hvac1_comm_err_flg = false;
bool g_hvac2_comm_err_flg = false;
bool g_hvac3_comm_err_flg = false;
bool g_hvac4_comm_err_flg = false;
bool g_hvac5_comm_err_flg = false;
bool g_hvac6_comm_err_flg = false;
bool g_hvac7_comm_err_flg = false;
bool g_hvac8_comm_err_flg = false;
bool g_pis1_comm_err_flg = false;
bool g_pis2_comm_err_flg = false;
bool g_atc1_comm_err_flg = false;
bool g_atc2_comm_err_flg = false;
bool g_fas1_comm_err_flg = false;
bool g_fas2_comm_err_flg = false;
bool g_pds1_comm_err_flg = false;
bool g_pds2_comm_err_flg = false;
bool g_ccu_comm_err_flg_temp=false;
bool g_ccu_comm_err_flg=false;
bool g_ccu1_comm_err_flg=false;
bool g_ccu2_comm_err_flg=false;
bool g_hmi1_comm_err_flg=false;
bool g_hmi2_comm_err_flg=false;
bool set_time_flag1=false;
//bool set_time_flag2=false;
int HVACPageSelect = 0;
int error_temp1 = 0;
int error_temp2 = 0;
int error_temp3 = 0;
int error_temp4 = 0;
int error_temp5 = 0;
int EmergencyResuce = 0;
int time_setting_start = 0;
int read_time1 = 0;
int read_time2 = 0;
int read_time3 = 0;
int read_time4 = 0;
int read_time5 = 0;
int read_time6 = 0;
int ATC_time_temp1 = 0;
int ATC_time_temp2 = 0;
int ATC_time_temp3 = 0;
int ATC_time_temp4 = 0;
int ATC_time_temp5 = 0;
int ATC_time_temp6 = 0;
int time_set_mode = 0;
int current_temp1 = 0;
int current_temp2 = 0;
int current_temp3 = 0;
int current_temp4 = 0;
int ATC_invalid = 0;
WORD CCU_life_temp_MVB= 0;
WORD CCU_life_temp_UDP= 0;
WORD HMI_life_temp= 0;
WORD hmi1_life_temp1 = 0;
WORD hmi2_life_temp2 = 0;
//QString che_num = "0";
QString che1_num = "1441";
QString che2_num = "1442";
QString che3_num = "1443";
QString che4_num = "1444";
QString che5_num = "1445";
QString che6_num = "1446";
QString che7_num = "1447";
QString che8_num = "1448";

QString UDP_lable = "";
int ccu1_color = 0;
int ccu2_color = 0;
int dccu1_color = 0;
int dccu2_color = 0;
int io1_color = 0;
int io2_color = 0;
int io3_color = 0;
int io4_color = 0;
int io5_color = 0;
int io6_color = 0;
int io7_color = 0;
int io8_color = 0;
int acu1_color = 0;
int acu2_color = 0;
int pds1_color = 0;
int pds2_color = 0;
int tcu1_color = 0;
int tcu2_color = 0;
int tcu3_color = 0;
int tcu4_color = 0;
int tcu5_color = 0;
int tcu6_color = 0;
int hmi1_color = 0;
int hmi2_color = 0;
int hvac1_color = 0;
int hvac2_color = 0;
int hvac3_color = 0;
int hvac4_color = 0;
int hvac5_color = 0;
int hvac6_color = 0;
int hvac7_color = 0;
int hvac8_color = 0;
int bcu1_color = 0;
int bcu2_color = 0;
int bcu3_color = 0;
int bcu4_color = 0;
int pis1_color = 0;
int pis2_color = 0;
int edcu1_color = 0;
int edcu2_color = 0;
int edcu3_color = 0;
int edcu4_color = 0;
int edcu5_color = 0;
int edcu6_color = 0;
int edcu7_color = 0;
int edcu8_color = 0;
int che1_door1 = 0;
int che1_door2 = 0;
int che1_door3 = 0;
int che1_door4 = 0;
int che1_door5 = 0;
int che1_door6 = 0;
int che1_door7 = 0;
int che1_door8 = 0;
int che2_door1 = 0;
int che2_door2 = 0;
int che2_door3 = 0;
int che2_door4 = 0;
int che2_door5 = 0;
int che2_door6 = 0;
int che2_door7 = 0;
int che2_door8 = 0;
int che3_door1 = 0;
int che3_door2 = 0;
int che3_door3 = 0;
int che3_door4 = 0;
int che3_door5 = 0;
int che3_door6 = 0;
int che3_door7 = 0;
int che3_door8 = 0;
int che4_door1 = 0;
int che4_door2 = 0;
int che4_door3 = 0;
int che4_door4 = 0;
int che4_door5 = 0;
int che4_door6 = 0;
int che4_door7 = 0;
int che4_door8 = 0;
int che5_door1 = 0;
int che5_door2 = 0;
int che5_door3 = 0;
int che5_door4 = 0;
int che5_door5 = 0;
int che5_door6 = 0;
int che5_door7 = 0;
int che5_door8 = 0;
int che6_door1 = 0;
int che6_door2 = 0;
int che6_door3 = 0;
int che6_door4 = 0;
int che6_door5 = 0;
int che6_door6 = 0;
int che6_door7 = 0;
int che6_door8 = 0;
int che7_door1 = 0;
int che7_door2 = 0;
int che7_door3 = 0;
int che7_door4 = 0;
int che7_door5 = 0;
int che7_door6 = 0;
int che7_door7 = 0;
int che7_door8 = 0;
int che8_door1 = 0;
int che8_door2 = 0;
int che8_door3 = 0;
int che8_door4 = 0;
int che8_door5 = 0;
int che8_door6 = 0;
int che8_door7 = 0;
int che8_door8 = 0;
int che1_door9 = 0;
int che1_door10 = 0;
int che8_door9 = 0;
int che8_door10 = 0;
int atc1_color = 0;
int atc2_color = 0;
int error_code_temp1 = 0;
int error_code_temp2 = 0;
int error_code_temp3 = 0;
int error_code_temp4 = 0;
int error_code_temp5 = 0;
int error_code_temp6 = 0;
int error_code_temp7 = 0;
int error_code_temp8 = 0;
int error_code_temp9 = 0;
int error_code_temp10 = 0;
int error_code_temp11 = 0;
int error_code_temp12 = 0;
int error_code_temp13 = 0;
int error_code_temp14 = 0;
int error_code_temp15 = 0;
int error_code_temp16 = 0;
int error_code_temp17 = 0;
int error_code_temp18 = 0;
int error_code_temp19 = 0;
int error_code_temp20 = 0;
int error_code_temp21 = 0;
int error_code_temp22 = 0;
int error_code_temp23 = 0;
int error_code_temp24 = 0;
int error_code_temp25 = 0;
int error_code_temp26 = 0;
int error_code_temp27 = 0;
int error_code_temp28 = 0;
int error_code_temp29 = 0;
int error_code_temp30 = 0;
int error_code_record1 = 0;
int error_code_record2 = 0;
int error_code_record3 = 0;
int error_code_record4 = 0;
int error_code_record5 = 0;
int error_code_record6 = 0;
int error_code_record7 = 0;
int error_code_record8 = 0;
int error_code_record9 = 0;
int error_code_record10 = 0;
int error_code_record11 = 0;
int error_code_record12 = 0;
int error_code_record13 = 0;
int error_code_record14 = 0;
int error_code_record15 = 0;
int error_code_record16 = 0;
int error_code_record17 = 0;
int error_code_record18 = 0;
int error_code_record19 = 0;
int error_code_record20 = 0;
int error_code_record21 = 0;
int error_code_record22 = 0;
int error_code_record23 = 0;
int error_code_record24 = 0;
int error_code_record25 = 0;
int error_code_record26 = 0;
int error_code_record27 = 0;
int error_code_record28 = 0;
int error_code_record29 = 0;
int error_code_record30 = 0;
QString error_display1 = "";
QString error_display2 = "";
QString error_display3 = "";
QString error_display4 = "";
QString error_display5 = "";
QString error_display6 = "";
QString error_display7 = "";
QString error_display8 = "";
QString error_display9 = "";
QString error_display10 = "";
QString error_display11 = "";
QString error_display12 = "";
QString read_error1 = "";
QString read_error2 = "";
QString read_error3 = "";
QString read_error4 = "";
QString read_error5 = "";
QString read_error6 = "";
QString read_error7 = "";
QString read_error8 = "";
QString read_error9 = "";
QString read_error10 = "";
QString read_error11 = "";
QString read_error12 = "";
QString read_error13 = "";
QString read_error14 = "";
QString read_error15 = "";
QString read_error16 = "";
QString read_error17 = "";
QString read_error18 = "";
QString read_error19 = "";
QString read_error20 = "";
QString read_error21 = "";
QString read_error22 = "";
QString read_error23 = "";
QString read_error24 = "";
QString read_error25 = "";
QString read_error26 = "";
QString read_error27 = "";
QString read_error28 = "";
QString read_error29 = "";
QString read_error30 = "";
int read_error52 = 0;
int error_code_temp31 = 0;
int error_code_temp32 = 0;
int error_code_temp33 = 0;
int error_code_temp34 = 0;
int error_code_temp35 = 0;
int error_code_temp36 = 0;
int error_code_temp37 = 0;
int error_code_temp38 = 0;
int error_code_temp39 = 0;
int error_code_temp40 = 0;
int error_code_temp41 = 0;
int error_code_temp42 = 0;
int error_code_temp43 = 0;
int error_code_temp44 = 0;
int error_code_temp45 = 0;
int error_code_temp46 = 0;
int error_code_temp47 = 0;
int error_code_temp48 = 0;
int error_code_temp49 = 0;
int error_code_temp50 = 0;
int error_code_temp51 = 0;
int error_code_temp52 = 0;
int error_code_temp53 = 0;
int error_code_temp54 = 0;
int error_code_temp55 = 0;
int error_code_temp56 = 0;
int error_code_temp57 = 0;
int error_code_temp58 = 0;
int error_code_temp59 = 0;
int error_code_temp60 = 0;
int error_code_record31 = 0;
int error_code_record32 = 0;
int error_code_record33 = 0;
int error_code_record34 = 0;
int error_code_record35 = 0;
int error_code_record36 = 0;
int error_code_record37 = 0;
int error_code_record38 = 0;
int error_code_record39 = 0;
int error_code_record40 = 0;
int error_code_record41 = 0;
int error_code_record42 = 0;
int error_code_record43 = 0;
int error_code_record44 = 0;
int error_code_record45 = 0;
int error_code_record46 = 0;
int error_code_record47 = 0;
int error_code_record48 = 0;
int error_code_record49 = 0;
int error_code_record50 = 0;
int error_code_record51 = 0;
int error_code_record52 = 0;
int error_code_record53 = 0;
int error_code_record54 = 0;
int error_code_record55 = 0;
int error_code_record56 = 0;
int error_code_record57 = 0;
int error_code_record58 = 0;
int error_code_record59 = 0;
int error_code_record60 = 0;
int tr_start = 0;
QString tr_date1 = 0;
QString tr_date2 = 0;
QString tr_date3 = 0;
QString tr_date4 = 0;
QString tr_date5 = 0;
QString tr_date6 = 0;
QString tr_date7 = 0;
QString tr_date8 = 0;
QString tr_date9 = 0;
QString tr_date10 = 0;
QString tr_testtype1 = 0;
QString tr_testtype2 = 0;
QString tr_testtype3 = 0;
QString tr_testtype4 = 0;
QString tr_testtype5 = 0;
QString tr_testtype6 = 0;
QString tr_testtype7 = 0;
QString tr_testtype8 = 0;
QString tr_testtype9 = 0;
QString tr_testtype10 = 0;
qreal tr_ADSpeed1 = 0;
qreal tr_ADSpeed2 = 0;
qreal tr_ADSpeed3 = 0;
qreal tr_ADSpeed4 = 0;
qreal tr_ADSpeed5 = 0;
qreal tr_ADSpeed6 = 0;
qreal tr_ADSpeed7 = 0;
qreal tr_ADSpeed8 = 0;
qreal tr_ADSpeed9 = 0;
qreal tr_ADSpeed10 = 0;
int tr_level1 = 0;
int tr_level2 = 0;
int tr_level3 = 0;
int tr_level4 = 0;
int tr_level5 = 0;
int tr_level6 = 0;
int tr_level7 = 0;
int tr_level8 = 0;
int tr_level9 = 0;
int tr_level10 = 0;
int tr_BrakeInitalSpeed1 = 0;
int tr_BrakeInitalSpeed2 = 0;
int tr_BrakeInitalSpeed3 = 0;
int tr_BrakeInitalSpeed4 = 0;
int tr_BrakeInitalSpeed5 = 0;
int tr_BrakeInitalSpeed6 = 0;
int tr_BrakeInitalSpeed7 = 0;
int tr_BrakeInitalSpeed8 = 0;
int tr_BrakeInitalSpeed9 = 0;
int tr_BrakeInitalSpeed10 = 0;
WORD tr_testtype_record = 1;
WORD tr_testtype_temp = 0;
WORD tr_testtype = 0;
int tr_BrakeDistance1 = 0;
int tr_BrakeDistance2 = 0;
int tr_BrakeDistance3 = 0;
int tr_BrakeDistance4 = 0;
int tr_BrakeDistance5 = 0;
int tr_BrakeDistance6 = 0;
int tr_BrakeDistance7 = 0;
int tr_BrakeDistance8 = 0;
int tr_BrakeDistance9 = 0;
int tr_BrakeDistance10 = 0;
int tr_testtimes = 0;
int tr_levelcolor1 = 0;
int tr_levelcolor2 = 0;
int tr_levelcolor3 = 0;
int tr_levelcolor4 = 0;
int tr_levelcolor5 = 0;
int tr_levelcolor6 = 0;
int tr_levelcolor7 = 0;
int tr_levelcolor8 = 0;
int tr_levelcolor9 = 0;
int tr_levelcolor10 = 0;
//unsigned long run_record_distance = 0;
//unsigned long run_record_today_distance = 0;
qreal run_record_distance = 0;
qreal run_record_today_distance = 0;
unsigned long energy1=0;
unsigned long energy2=0;
unsigned long energy3=0;
//int 当前日 = 0;
int run_record_time = 0;
WORD pull_brake_hide = 0;
QString run_record_date1 = 0;
QString run_record_date2 = 0;
QString run_record_date3 = 0;
QString run_record_date4 = 0;
QString run_record_date5 = 0;
QString run_record_date6 = 0;
int commandcar1 = 0;
int commandcar2 = 0;


int door_test_signal = 0;
int door_test_temp = 0;

QString Door1_JudgeOpen_Car1 = "";
QString Door1_JudgeOpen_Car2 = "";
QString Door1_JudgeOpen_Car3 = "";
QString Door1_JudgeOpen_Car4 = "";
QString Door1_JudgeOpen_Car5 = "";
QString Door1_JudgeOpen_Car6 = "";

QString Door2_JudgeOpen_Car1 = "";
QString Door2_JudgeOpen_Car2 = "";
QString Door2_JudgeOpen_Car3 = "";
QString Door2_JudgeOpen_Car4 = "";
QString Door2_JudgeOpen_Car5 = "";
QString Door2_JudgeOpen_Car6 = "";

int Door1_JudgeOpen_Car_Color1 = 0;
int Door1_JudgeOpen_Car_Color2 = 0;
int Door1_JudgeOpen_Car_Color3 = 0;
int Door1_JudgeOpen_Car_Color4 = 0;
int Door1_JudgeOpen_Car_Color5 = 0;
int Door1_JudgeOpen_Car_Color6 = 0;

int Door2_JudgeOpen_Car_Color1 = 0;
int Door2_JudgeOpen_Car_Color2 = 0;
int Door2_JudgeOpen_Car_Color3 = 0;
int Door2_JudgeOpen_Car_Color4 = 0;
int Door2_JudgeOpen_Car_Color5 = 0;
int Door2_JudgeOpen_Car_Color6 = 0;

QString Door1_JudgeClose_Car1 = "";
QString Door1_JudgeClose_Car2 = "";
QString Door1_JudgeClose_Car3 = "";
QString Door1_JudgeClose_Car4 = "";
QString Door1_JudgeClose_Car5 = "";
QString Door1_JudgeClose_Car6 = "";

QString Door2_JudgeClose_Car1 = "";
QString Door2_JudgeClose_Car2 = "";
QString Door2_JudgeClose_Car3 = "";
QString Door2_JudgeClose_Car4 = "";
QString Door2_JudgeClose_Car5 = "";
QString Door2_JudgeClose_Car6 = "";

int Door1_JudgeClose_Car_Color1 = 0;
int Door1_JudgeClose_Car_Color2 = 0;
int Door1_JudgeClose_Car_Color3 = 0;
int Door1_JudgeClose_Car_Color4 = 0;
int Door1_JudgeClose_Car_Color5 = 0;
int Door1_JudgeClose_Car_Color6 = 0;

int Door2_JudgeClose_Car_Color1 = 0;
int Door2_JudgeClose_Car_Color2 = 0;
int Door2_JudgeClose_Car_Color3 = 0;
int Door2_JudgeClose_Car_Color4 = 0;
int Door2_JudgeClose_Car_Color5 = 0;
int Door2_JudgeClose_Car_Color6 = 0;

int tr_regeneration1 = 0;
int tr_regeneration2 = 0;
int tr_regeneration3 = 0;
int tr_regeneration4 = 0;
int tr_regeneration5 = 0;
int tr_regeneration6 = 0;
int tr_regeneration7 = 0;
int tr_regeneration8 = 0;
int tr_regeneration9 = 0;
int tr_regeneration10 = 0;
int tr_emergencybraking1 = 0;
int tr_emergencybraking2 = 0;
int tr_emergencybraking3 = 0;
int tr_emergencybraking4 = 0;
int tr_emergencybraking5 = 0;
int tr_emergencybraking6 = 0;
int tr_emergencybraking7 = 0;
int tr_emergencybraking8 = 0;
int tr_emergencybraking9 = 0;
int tr_emergencybraking10 = 0;
//int 紧急广播_选择 = 0;
int clear_record_timer = 0;
//int 三级故障 = 0;
//qreal time_setting_1 = 0;
//qreal time_setting_2 = 0;
//qreal time_setting_3 = 0;
//qreal time_setting_4 = 0;
//qreal time_setting_5 = 0;
//qreal time_setting_6 = 0;
int time_setting_1 = 0;
int time_setting_2 = 0;
int time_setting_3 = 0;
int time_setting_4 = 0;
int time_setting_5 = 0;
int time_setting_6 = 0;
int time_setting_color = 0;
//WORD HMI_send_data28 = 0;
//WORD HMI_send_data29 = 0;
//WORD HMI_send_data30 = 0;
int time_setting_timer = 0;
//int 密码长度 = 0;
WORD hmi_485_error_temp = 0;
int hmi_485_error_record = 0;
int color_bit = 0;
int table_num = 0;
int checi_num = 0;
int driver_num = 0;
int temp_num = 0;
int temp_display_num = 0;
int ee = 0;
int errorlist1 = 0;
int net_error = 0;
int tcu_error = 0;
int error_history = 0;
QString pwdisplay = "0";
QString pw_true = "";
QString pw_input = "0";
int pw_select = 1;
int clear_run_color = 0;
int station_name_color = 0;
int ATC_error = 0;
int ACU_error = 0;
int BCU_error = 0;
int HVAC_error = 0;
int PIS_error = 0;
//int 乘客报警_error = 0;
int HVAC_select_color = 0;
int HVAC_mode_select = 0;
int station_select=0;
int station_select1=0;
int station_select2=0;
int parameter_setting_se1ect = 0;
WORD parameter_setting_se1ect1 = 0;

QString parameter_setting_text = "";
//int 蓄电池_error = 0;
//int 门1_error = 0;
//int 门2_error = 0;
int today = 0;
int yesterday = 0;
int atc3_color = 0;
int atc4_color = 0;
int voltage_color = 0;
int terminus = 0;
QString DestStation = 0;
QString CurrentStation = 0;
QString NextStation = 0;
int CompressorStarted1 = 0;
int CompressorStarted2 = 0;
int CompressorStarted3 = 0;
int CompressorStarted4 = 0;
qreal MainAir_cylinder_pressure1=0;
qreal MainAir_cylinder_pressure2=0;
qreal MainAir_cylinder_pressure3=0;
qreal MainAir_cylinder_pressure4=0;
qreal Brake_cylinder_pressure1 = 0;
qreal Brake_cylinder_pressure2 = 0;
qreal Brake_cylinder_pressure3 = 0;
qreal Brake_cylinder_pressure4 = 0;
qreal Brake_cylinder_pressure1_test = 0;
qreal Brake_cylinder_pressure2_test = 0;
qreal Brake_cylinder_pressure3_test = 0;
qreal Brake_cylinder_pressure4_test = 0;
int ABSpeed1=0;
int ABSpeed2=0;
int ABSpeed3=0;
int ABSpeed4=0;
int TCU1LoadPWM=0;
int TCU2LoadPWM=0;
int FDBK1PWM=0;
int FDBK2PWM=0;
qreal Brake_cylinder_pressure5 = 0;
qreal Brake_cylinder_pressure6 = 0;
qreal Brake_cylinder_pressure7 = 0;
qreal Brake_cylinder_pressure8 = 0;
qreal Brake_cylinder_pressure9 = 0;
qreal Brake_cylinder_pressure10 = 0;
qreal Brake_cylinder_pressure11 = 0;
qreal Brake_cylinder_pressure12 = 0;
qreal Brake_cylinder_pressure13 = 0;
qreal Brake_cylinder_pressure14 = 0;
qreal Brake_cylinder_pressure15 = 0;
qreal Brake_cylinder_pressure16 = 0;
int TempPassengerCar1 = 0;
int TempPassengerCar2 = 0;
int TempPassengerCar3 = 0;
int TempPassengerCar4 = 0;
int TempPassengerCar5 = 0;
int TempPassengerCar6 = 0;
int TempPassengerCar7 = 0;
int TempPassengerCar8 = 0;
qreal LoadCapacity1=0;
qreal LoadCapacity2=0;
qreal LoadCapacity3=0;
qreal LoadCapacity4=0;
int car1_door9 = 3;
int car1_door10 = 3;
int car1_door1 = 3;
int car1_door2 = 3;
int car1_door3 = 3;
int car1_door4 = 3;
int car1_door5 = 3;
int car1_door6 = 3;
int car1_door7 = 3;
int car1_door8 = 3;
int car2_door1 = 3;
int car2_door2 = 3;
int car2_door3 = 3;
int car2_door4 = 3;
int car2_door5 = 3;
int car2_door6 = 3;
int car2_door7 = 3;
int car2_door8 = 3;
int car3_door1 = 3;
int car3_door2 = 3;
int car3_door3 = 3;
int car3_door4 = 3;
int car3_door5 = 3;
int car3_door6 = 3;
int car3_door7 = 3;
int car3_door8 = 3;
int car4_door1 = 3;
int car4_door2 = 3;
int car4_door3 = 3;
int car4_door4 = 3;
int car4_door5 = 3;
int car4_door6 = 3;
int car4_door7 = 3;
int car4_door8 = 3;
int car5_door1 = 3;
int car5_door2 = 3;
int car5_door3 = 3;
int car5_door4 = 3;
int car5_door5 = 3;
int car5_door6 = 3;
int car5_door7 = 3;
int car5_door8 = 3;
int car6_door1 = 3;
int car6_door2 = 3;
int car6_door3 = 3;
int car6_door4 = 3;
int car6_door5 = 3;
int car6_door6 = 3;
int car6_door7 = 3;
int car6_door8 = 3;
int car7_door1 = 3;
int car7_door2 = 3;
int car7_door3 = 3;
int car7_door4 = 3;
int car7_door5 = 3;
int car7_door6 = 3;
int car7_door7 = 3;
int car7_door8 = 3;
int car8_door1 = 3;
int car8_door2 = 3;
int car8_door3 = 3;
int car8_door4 = 3;
int car8_door5 = 3;
int car8_door6 = 3;
int car8_door7 = 3;
int car8_door8 = 3;
int car8_door9 = 3;
int car8_door10 = 3;
qreal BogieASP1 = 0;
qreal BogieASP2 = 0;
qreal BogieASP3 = 0;
qreal BogieASP4 = 0;
qreal BogieASP5 = 0;
qreal BogieASP6 = 0;
qreal BogieASP7 = 0;
qreal BogieASP8 = 0;
//int BogieASP1 = 0;
//int BogieASP2 = 0;
//int BogieASP3 = 0;
//int BogieASP4 = 0;
//int BogieASP5 = 0;
//int BogieASP6 = 0;
//int BogieASP7 = 0;
//int BogieASP8 = 0;
qreal BogieASP9 = 0;
qreal BogieASP10 = 0;
qreal BogieASP11 = 0;
qreal BogieASP12 = 0;
qreal BogieASP13 = 0;
qreal BogieASP14 = 0;
qreal BogieASP15 = 0;
qreal BogieASP16 = 0;
QString ATC_status = "";
int station_start = 0;
int station_end = 0;
int station_current = 0;
int station_next = 0;
QString station_start_display = 0;
QString station_end_display = 0;
QString station_current_display = 0;
QString station_next_display = 0;
QString station_start_ccu = "";
QString station_end_ccu = "";
QString station_current_ccu = "";
QString station_next_ccu = "";
int command_valid_timer = 0;
int station_setting4_temp = 0;
int TCU1_status = 0;
int TCU2_status = 0;
int TCU3_status = 0;
int TCU4_status = 0;
int TCU5_status = 0;
int TCU6_status = 0;
int HSCB_color1 = 0;
int HSCB_color2 = 0;
int HSCB_color3 = 0;
int HSCB_color4 = 0;
int HSCB_color5 = 0;
int HSCB_color6 = 0;
int K750_color1 = 0;
int K750_color2 = 0;
qreal BCU_Mass1 = 0;
qreal BCU_Mass2 = 0;
qreal BCU_Mass3 = 0;
qreal BCU_Mass4 = 0;
qreal BCU_Mass5 = 0;
qreal BCU_Mass6 = 0;
qreal BCU_Mass7 = 0;
qreal BCU_Mass8 = 0;
qreal BCU_Mass9 = 0;
qreal BCU_Mass10 = 0;
qreal BCU_Mass11 = 0;
qreal BCU_Mass12 = 0;
qreal BCU_Mass13 = 0;
qreal BCU_Mass14 = 0;
qreal BCU_Mass15 = 0;
qreal BCU_Mass16 = 0;
int Traction_brake_select = 0;
int ATC10_color = 0;
int ATC11_color = 0;
int ATC20_color = 0;
int ATC21_color = 0;
int train_pis1_color = 0;
int train_pis2_color = 0;
QString IES1_string = "";
int IES1_color = 0;
int KIC1_color = 0;
int LB11_color = 0;
int LB12_color = 0;
int LB21_color = 0;
int LB22_color = 0;
int KCC1_color = 0;
int KCC2_color = 0;
int KIC2_color = 0;



QString IES2_string = "";
QString IES3_string = "";
int KIC3_color = 0;
int KIC4_color = 0;
int KCC3_color = 0;
int KCC4_color = 0;

int KIC5_color = 0;
int KIC6_color = 0;
int KCC5_color = 0;
int KCC6_color = 0;
QString HVAC_state = "";
//qreal setting_temp = 25;
unsigned int setting_temp = 25;
qreal che1_indoor_temp = 0;
qreal che2_indoor_temp = 0;
qreal che3_indoor_temp = 0;
qreal che4_indoor_temp = 0;
qreal che1_outdoor_temp = 0;
qreal che2_outdoor_temp = 0;
qreal che3_outdoor_temp = 0;
qreal che4_outdoor_temp = 0;
qreal che1_setting_temp = 0;
qreal che2_setting_temp = 0;
qreal che3_setting_temp = 0;
qreal che4_setting_temp = 0;
qreal che5_setting_temp = 0;
qreal che6_setting_temp = 0;
qreal che7_setting_temp = 0;
qreal che8_setting_temp = 0;
//qreal setting_temp2 = 16;
unsigned int setting_temp2 = 16;
int charge_current1 = 0;
int HVAC_valid_timer = 0;
int HVAC_valid_timer1 = 0;
int charge_current2 = 0;
int HVAC_button_color = 0;
int HVAC_valid_mode_timer = 0;
int car1_Compressor1 = 0;
int car1_Compressor2 = 0;
int car1_Compressor3 = 0;
int car1_Compressor4 = 0;
int car2_Compressor1 = 0;
int car2_Compressor2 = 0;
int car2_Compressor3 = 0;
int car2_Compressor4 = 0;
int car3_Compressor1 = 0;
int car3_Compressor2 = 0;
int car3_Compressor3 = 0;
int car3_Compressor4 = 0;
int car4_Compressor1 = 0;
int car4_Compressor2 = 0;
int car4_Compressor3 = 0;
int car4_Compressor4 = 0;
int car5_Compressor1 = 0;
int car5_Compressor2 = 0;
int car5_Compressor3 = 0;
int car5_Compressor4 = 0;
int car6_Compressor1 = 0;
int car6_Compressor2 = 0;
int car6_Compressor3 = 0;
int car6_Compressor4 = 0;
int car7_Compressor1 = 0;
int car7_Compressor2 = 0;
int car7_Compressor3 = 0;
int car7_Compressor4 = 0;
int car8_Compressor1 = 0;
int car8_Compressor2 = 0;
int car8_Compressor3 = 0;
int car8_Compressor4 = 0;
int car1_Condenser1 = 0;
int car1_Condenser2 = 0;
int car1_Condenser3 = 0;
int car1_Condenser4 = 0;
int car2_Condenser1 = 0;
int car2_Condenser2 = 0;
int car2_Condenser3 = 0;
int car2_Condenser4 = 0;
int car3_Condenser1 = 0;
int car3_Condenser2 = 0;
int car3_Condenser3 = 0;
int car3_Condenser4 = 0;
int car4_Condenser1 = 0;
int car4_Condenser2 = 0;
int car4_Condenser3 = 0;
int car4_Condenser4 = 0;
int car5_Condenser1 = 0;
int car5_Condenser2 = 0;
int car5_Condenser3 = 0;
int car5_Condenser4 = 0;
int car6_Condenser1 = 0;
int car6_Condenser2 = 0;
int car6_Condenser3 = 0;
int car6_Condenser4 = 0;
int car7_Condenser1 = 0;
int car7_Condenser2 = 0;
int car7_Condenser3 = 0;
int car7_Condenser4 = 0;
int car8_Condenser1 = 0;
int car8_Condenser2 = 0;
int car8_Condenser3 = 0;
int car8_Condenser4 = 0;


 int car1_Preheater1 =0;
 int car1_Preheater2 =0;
 int car1_Preheater3=0;
 int car1_Preheater4=0;
 int car2_Preheater1=0;
 int car2_Preheater2=0;
 int car2_Preheater3=0;
 int car2_Preheater4=0;
 int car3_Preheater1=0;
 int car3_Preheater2=0;
 int car3_Preheater3=0;
 int car3_Preheater4=0;
 int car4_Preheater1=0;
 int car4_Preheater2=0;
 int car4_Preheater3=0;
 int car4_Preheater4=0;

int car1_EvaporatorFan1 = 0;
int car1_EvaporatorFan2 = 0;
int car1_EvaporatorFan3 = 0;
int car1_EvaporatorFan4 = 0;
int car2_EvaporatorFan1 = 0;
int car2_EvaporatorFan2 = 0;
int car2_EvaporatorFan3 = 0;
int car2_EvaporatorFan4 = 0;
int car3_EvaporatorFan1 = 0;
int car3_EvaporatorFan2 = 0;
int car3_EvaporatorFan3 = 0;
int car3_EvaporatorFan4 = 0;
int car4_EvaporatorFan1 = 0;
int car4_EvaporatorFan2 = 0;
int car4_EvaporatorFan3 = 0;
int car4_EvaporatorFan4 = 0;
int car5_EvaporatorFan1 = 0;
int car5_EvaporatorFan2 = 0;
int car5_EvaporatorFan3 = 0;
int car5_EvaporatorFan4 = 0;
int car6_EvaporatorFan1 = 0;
int car6_EvaporatorFan2 = 0;
int car6_EvaporatorFan3 = 0;
int car6_EvaporatorFan4 = 0;
int car7_EvaporatorFan1 = 0;
int car7_EvaporatorFan2 = 0;
int car7_EvaporatorFan3 = 0;
int car7_EvaporatorFan4 = 0;
int car8_EvaporatorFan1 = 0;
int car8_EvaporatorFan2 = 0;
int car8_EvaporatorFan3 = 0;
int car8_EvaporatorFan4 = 0;
int car1_HotElectricity1 = 0;
int car1_HotElectricity2 = 0;
int car1_HotElectricity3 = 0;
int car1_HotElectricity4 = 0;
int car2_HotElectricity1 = 0;
int car2_HotElectricity2 = 0;
int car2_HotElectricity3 = 0;
int car2_HotElectricity4 = 0;
int car3_HotElectricity1 = 0;
int car3_HotElectricity2 = 0;
int car3_HotElectricity3 = 0;
int car3_HotElectricity4 = 0;
int car4_HotElectricity1 = 0;
int car4_HotElectricity2 = 0;
int car4_HotElectricity3 = 0;
int car4_HotElectricity4 = 0;
int car5_HotElectricity1 = 0;
int car5_HotElectricity2 = 0;
int car5_HotElectricity3 = 0;
int car5_HotElectricity4 = 0;
int car6_HotElectricity1 = 0;
int car6_HotElectricity2 = 0;
int car6_HotElectricity3 = 0;
int car6_HotElectricity4 = 0;
int car7_HotElectricity1 = 0;
int car7_HotElectricity2 = 0;
int car7_HotElectricity3 = 0;
int car7_HotElectricity4 = 0;
int car8_HotElectricity1 = 0;
int car8_HotElectricity2 = 0;
int car8_HotElectricity3 = 0;
int car8_HotElectricity4 = 0;
int car1_NewWind1 = 0;
int car1_NewWind2 = 0;
int car2_NewWind1 = 0;
int car2_NewWind2 = 0;
int car3_NewWind1 = 0;
int car3_NewWind2 = 0;
int car4_NewWind1 = 0;
int car4_NewWind2 = 0;
int car5_NewWind1 = 0;
int car5_NewWind2 = 0;
int car6_NewWind1 = 0;
int car6_NewWind2 = 0;
int car7_NewWind1 = 0;
int car7_NewWind2 = 0;
int car8_NewWind1 = 0;
int car8_NewWind2 = 0;
QString HVAC_mode1 = "";
QString HVAC_mode2 = "";
QString HVAC_mode3 = "";
QString HVAC_mode4 = "";
QString HVAC_mode5 = "";
QString HVAC_mode6 = "";
QString HVAC_mode7 = "";
QString HVAC_mode8 = "";
QString HVAC_RUNmode1 = "";
QString HVAC_RUNmode2 = "";
QString HVAC_RUNmode3 = "";
QString HVAC_RUNmode4 = "";
QString HVAC_RUNmode5 = "";
QString HVAC_RUNmode6 = "";
QString HVAC_RUNmode7 = "";
QString HVAC_RUNmode8 = "";
QString HVAC_RUNmodefeedback1 = "";
QString ACStart1="";
QString ACStart2="";
QString ACStart3="";
QString ACStart4="";
WORD HMI_send_data1 = 0;
WORD HMI_send_data2 = 0;
WORD HMI_send_data3 = 0;
WORD HMI_send_data4 = 0;
WORD HMI_send_data5 = 0;
WORD HMI_send_data6 = 0;
WORD HMI_send_data7 = 0;
WORD HMI_send_data8 = 0;
WORD HMI_send_data9 = 0;
WORD HMI_send_data10 = 0;
WORD HMI_send_data11 = 0;
WORD HMI_send_data12 = 0;
WORD HMI_send_data13 = 0;
WORD HMI_send_data14 = 0;
WORD HMI_send_data15 = 0;
WORD HMI_send_data16 = 0;
WORD HMI_send_data17 = 0;
WORD HMI_send_data18 = 0;
WORD HMI_send_data19 = 0;
WORD HMI_send_data20 = 0;
WORD HMI_send_data21 = 0;
WORD HMI_send_data22 = 0;
WORD HMI_send_data23 = 0;
WORD HMI_send_data24 = 0;
WORD HMI_send_data25 = 0;
WORD HMI_send_data26 = 0;
WORD HMI_send_data27 = 0;
WORD HMI_send_data28 = 0;
WORD HMI_send_data29 = 0;
WORD HMI_send_data30 = 0;
WORD HMI_send_data31 = 0;
WORD HMI_send_data32 = 0;
WORD HMI_send_data33 = 0;
WORD HMI_send_data34 = 0;
WORD HMI_send_data35 = 0;
WORD HMI_send_data36 = 0;
WORD HMI_send_data37 = 0;
WORD HMI_send_data38 = 0;
WORD HMI_send_data39 = 0;
WORD HMI_send_data40 = 0;
WORD HMI_send_data41 = 0;
WORD HMI_send_data42 = 0;
WORD HMI_send_data43 = 0;
WORD HMI_send_data44 = 0;
WORD HMI_send_data45 = 0;
WORD HMI_send_data46 = 0;
WORD HMI_send_data47 = 0;
WORD HMI_send_data48 = 0;
WORD HMI_send_data49 = 0;
WORD HMI_send_data50 = 0;
WORD HMI_send_data51 = 0;
WORD HMI_send_data52 = 0;
WORD HMI_send_data53 = 0;
WORD HMI_send_data54 = 0;
WORD HMI_send_data55 = 0;
WORD HMI_send_data56 = 0;
WORD HMI_send_data57 = 0;
WORD HMI_send_data58 = 0;
WORD HMI_send_data59 = 0;
WORD HMI_send_data60 = 0;
WORD HMI_send_data61 = 0;
WORD HMI_send_data62 = 0;
WORD HMI_send_data63 = 0;
WORD HMI_send_data64 = 0;


int parameter_wheeldia = 840;
QString parameter_setting_temp = 0;

QString lowerPressT1 = "";
QString lowerPressT2 = "";
QString lowerPressT3 = "";
QString lowerPressT4 = "";
QString lowerPressT5 = "";
QString lowerPressT6 = "";

QString highPressT1 = "";
QString highPressT2 = "";
QString highPressT3 = "";
QString highPressT4 = "";
QString highPressT5 = "";
QString highPressT6 = "";
int timer_4s = 0;
int HMI1_active = 0;
int HMI2_active = 0;
int error_test44 = 0;
int error_test45 = 0;
int error_test46 = 0;
int HVAC_command_hide = 0;
int net_new_error = 0;
int Station_setting_button = 0;
int TCU_test_color1 = 0;
int TCU_test_color2 = 0;
QString software_version1 = 0;
QString software_version2 = 0;
QString software_version3 = 0;
QString software_version4 = 0;
QString software_version5 = 0;
QString software_version6 = 0;
QString ACU_test_string1 = 0;
QString ACU_test_string2 = 0;
QString ACU_test_string3 = 0;
QString ACU_test_string4 = 0;
int BCU_test_counter = 0;
int BCU_test_timer = 0;
QString BCU_test_hint_string = 0;

int BCU_Brake1_pwm = 0;
int BCU_Brake2_pwm = 0;
int BCU_Brake3_pwm = 0;
int BCU_Brake4_pwm = 0;
int BCU_Brake5_pwm = 0;
int BCU_Brake6_pwm = 0;
int BCU_Brake7_pwm = 0;
int BCU_Brake8_pwm = 0;
int BCU_Brake9_pwm = 0;
int BCU_Brake10_pwm = 0;
 qreal TCU1_Fdbk=0;
 qreal TCU2_Fdbk=0;
 qreal TCU1_TorCom=0;
 qreal TCU2_TorCom=0;
 qreal TCU1_Loador=0;
 qreal TCU2_Loador=0;
 int ACU1_OutVoltage=0;
 int ACU2_OutVoltage=0;
 int ACU1_Frequency=0;
 int ACU2_Frequency=0;
  int ACU1_BatVoltage=0;
  int ACU2_BatVoltage=0;
qreal Brake1_cylinder_pressure1 = 0;
qreal Brake1_cylinder_pressure2 = 0;
qreal Brake1_cylinder_pressure3 = 0;
qreal Brake1_cylinder_pressure4 = 0;
qreal Brake1_cylinder_pressure5 = 0;
qreal Brake1_cylinder_pressure6 = 0;
qreal Brake1_cylinder_pressure7 = 0;
qreal Brake1_cylinder_pressure8 = 0;
qreal Brake1_cylinder_pressure9 = 0;
qreal Brake1_cylinder_pressure10 = 0;
qreal Brake1_cylinder_pressure11 = 0;
qreal Brake1_cylinder_pressure12 = 0;
qreal Brake2_cylinder_pressure1 = 0;
qreal Brake2_cylinder_pressure2 = 0;
qreal Brake2_cylinder_pressure3 = 0;
qreal Brake2_cylinder_pressure4 = 0;
qreal Brake2_cylinder_pressure5 = 0;
qreal Brake2_cylinder_pressure6 = 0;
qreal Brake2_cylinder_pressure7 = 0;
qreal Brake2_cylinder_pressure8 = 0;
qreal Brake2_cylinder_pressure9 = 0;
qreal Brake2_cylinder_pressure10 = 0;
qreal Brake2_cylinder_pressure11 = 0;
qreal Brake2_cylinder_pressure12 = 0;
qreal Brake3_cylinder_pressure1 = 0;
qreal Brake3_cylinder_pressure2 = 0;
qreal Brake3_cylinder_pressure3 = 0;
qreal Brake3_cylinder_pressure4 = 0;
qreal Brake3_cylinder_pressure5 = 0;
qreal Brake3_cylinder_pressure6 = 0;
qreal Brake3_cylinder_pressure7 = 0;
qreal Brake3_cylinder_pressure8 = 0;
qreal Brake3_cylinder_pressure9 = 0;
qreal Brake3_cylinder_pressure10 = 0;
qreal Brake3_cylinder_pressure11 = 0;
qreal Brake3_cylinder_pressure12 = 0;
qreal Brake4_cylinder_pressure1 = 0;
qreal Brake4_cylinder_pressure2 = 0;
qreal Brake4_cylinder_pressure3 = 0;
qreal Brake4_cylinder_pressure4 = 0;
qreal Brake4_cylinder_pressure5 = 0;
qreal Brake4_cylinder_pressure6 = 0;
qreal Brake4_cylinder_pressure7 = 0;
qreal Brake4_cylinder_pressure8 = 0;
qreal Brake4_cylinder_pressure9 = 0;
qreal Brake4_cylinder_pressure10 = 0;
qreal Brake4_cylinder_pressure11 = 0;
qreal Brake4_cylinder_pressure12 = 0;
qreal Brake5_cylinder_pressure1 = 0;
qreal Brake5_cylinder_pressure2 = 0;
qreal Brake5_cylinder_pressure3 = 0;
qreal Brake5_cylinder_pressure4 = 0;
qreal Brake5_cylinder_pressure5 = 0;
qreal Brake5_cylinder_pressure6 = 0;
qreal Brake5_cylinder_pressure7 = 0;
qreal Brake5_cylinder_pressure8 = 0;
qreal Brake5_cylinder_pressure9 = 0;
qreal Brake5_cylinder_pressure10 = 0;
qreal Brake5_cylinder_pressure11 = 0;
qreal Brake5_cylinder_pressure12 = 0;
qreal Brake6_cylinder_pressure1 = 0;
qreal Brake6_cylinder_pressure2 = 0;
qreal Brake6_cylinder_pressure3 = 0;
qreal Brake6_cylinder_pressure4 = 0;
qreal Brake6_cylinder_pressure5 = 0;
qreal Brake6_cylinder_pressure6 = 0;
qreal Brake6_cylinder_pressure7 = 0;
qreal Brake6_cylinder_pressure8 = 0;
qreal Brake6_cylinder_pressure9 = 0;
qreal Brake6_cylinder_pressure10 = 0;
qreal Brake6_cylinder_pressure11 = 0;
qreal Brake6_cylinder_pressure12 = 0;
qreal Brake7_cylinder_pressure1 = 0;
qreal Brake7_cylinder_pressure2 = 0;
qreal Brake7_cylinder_pressure3 = 0;
qreal Brake7_cylinder_pressure4 = 0;
qreal Brake7_cylinder_pressure5 = 0;
qreal Brake7_cylinder_pressure6 = 0;
qreal Brake7_cylinder_pressure7 = 0;
qreal Brake7_cylinder_pressure8 = 0;
qreal Brake7_cylinder_pressure9 = 0;
qreal Brake7_cylinder_pressure10 = 0;
qreal Brake7_cylinder_pressure11 = 0;
qreal Brake7_cylinder_pressure12 = 0;
qreal Brake8_cylinder_pressure1 = 0;
qreal Brake8_cylinder_pressure2 = 0;
qreal Brake8_cylinder_pressure3 = 0;
qreal Brake8_cylinder_pressure4 = 0;
qreal Brake8_cylinder_pressure5 = 0;
qreal Brake8_cylinder_pressure6 = 0;
qreal Brake8_cylinder_pressure7 = 0;
qreal Brake8_cylinder_pressure8 = 0;
qreal Brake8_cylinder_pressure9 = 0;
qreal Brake8_cylinder_pressure10 = 0;
qreal Brake8_cylinder_pressure11 = 0;
qreal Brake8_cylinder_pressure12 = 0;
qreal Brake9_cylinder_pressure1 = 0;
qreal Brake9_cylinder_pressure2 = 0;
qreal Brake9_cylinder_pressure3 = 0;
qreal Brake9_cylinder_pressure4 = 0;
qreal Brake9_cylinder_pressure5 = 0;
qreal Brake9_cylinder_pressure6 = 0;
qreal Brake9_cylinder_pressure7 = 0;
qreal Brake9_cylinder_pressure8 = 0;
qreal Brake9_cylinder_pressure9 = 0;
qreal Brake9_cylinder_pressure10 = 0;
qreal Brake9_cylinder_pressure11 = 0;
qreal Brake9_cylinder_pressure12 = 0;

qreal Brake1_cylinder_pressure13 = 0;
qreal Brake1_cylinder_pressure14 = 0;
qreal Brake1_cylinder_pressure15 = 0;
qreal Brake1_cylinder_pressure16 = 0;
qreal Brake2_cylinder_pressure13 = 0;
qreal Brake2_cylinder_pressure14 = 0;
qreal Brake2_cylinder_pressure15 = 0;
qreal Brake2_cylinder_pressure16 = 0;
qreal Brake3_cylinder_pressure13 = 0;
qreal Brake3_cylinder_pressure14 = 0;
qreal Brake3_cylinder_pressure15 = 0;
qreal Brake3_cylinder_pressure16 = 0;
qreal Brake4_cylinder_pressure13 = 0;
qreal Brake4_cylinder_pressure14 = 0;
qreal Brake4_cylinder_pressure15 = 0;
qreal Brake4_cylinder_pressure16 = 0;
qreal Brake5_cylinder_pressure13 = 0;
qreal Brake5_cylinder_pressure14 = 0;
qreal Brake5_cylinder_pressure15 = 0;
qreal Brake5_cylinder_pressure16 = 0;
qreal Brake6_cylinder_pressure13 = 0;
qreal Brake6_cylinder_pressure14 = 0;
qreal Brake6_cylinder_pressure15 = 0;
qreal Brake6_cylinder_pressure16 = 0;
qreal Brake7_cylinder_pressure13 = 0;
qreal Brake7_cylinder_pressure14 = 0;
qreal Brake7_cylinder_pressure15 = 0;
qreal Brake7_cylinder_pressure16 = 0;
qreal Brake8_cylinder_pressure13 = 0;
qreal Brake8_cylinder_pressure14 = 0;
qreal Brake8_cylinder_pressure15 = 0;
qreal Brake8_cylinder_pressure16 = 0;
qreal Brake9_cylinder_pressure13 = 0;
qreal Brake9_cylinder_pressure14 = 0;
qreal Brake9_cylinder_pressure15 = 0;
qreal Brake9_cylinder_pressure16 = 0;

int BCU_test_color1 = 0;
int BCU_test_color2 = 0;
int BCU_test_color3 = 0;
int BCU_test_color4 = 0;
int BCU_test_color5 = 0;
int BCU_test_color6 = 0;
int BCU_test_color7 = 0;
int BCU_test_color8 = 0;
int BCU_test_color9 = 0;
QString BCU_selftest_string1 = 0;
QString BCU_selftest_string2 = 0;
QString BCU_selftest_string3 = 0;
QString BCU_selftest_string4 = 0;
QString ANTISKID_selftest_string1 = 0;
QString ANTISKID_selftest_string2 = 0;
QString ANTISKID_selftest_string3 = 0;
QString ANTISKID_selftest_string4 = 0;
QString TCU_test_string1 = 0;
QString TCU_test_string2 = 0;
int prameter_setting_button = 0;
int prameter_setting_timer = 0;
int BCU_test_record = 0;
int BCU_test_temp = 0;
int BCU_selftest_color1 = 0;
int BCU_selftest_color2 = 0;
int BCU_selftest_color3 = 0;
int BCU_selftest_color4 = 0;
int ANTISKID_selftest_color1 = 0;
int ANTISKID_selftest_color2 = 0;
int ANTISKID_selftest_color3 = 0;
int ANTISKID_selftest_color4 = 0;
//int TCU_test_color1 = 0;
int HighPress_Test = 0;
int LowerPress_Test = 0;
int LowerPress_Test1 = 0;
int HighPress_Test1 = 0;
int ACU_test_timer = 0;
int FAS_button_timer = 0;
int TCU_test_timer1 = 0;
int TCU_test_timer2 = 0;
int VVVF_valid_timer=0;
int EBC_valid_timer=0;
WORD TCU_test_ok = 0;

int TCU_test_temp13 = 0;
int TCU_test_temp14 = 0;
int TCU_test_temp15 = 0;
int TCU_test_temp16 = 0;
int TCU_test_temp17 = 0;
int TCU_test_temp18 = 0;
int TCU_test_signal13 = 0;
int TCU_test_signal14 = 0;
int TCU_test_signal15 = 0;
int TCU_test_signal16 = 0;
int TCU_test_signal17 = 0;
int TCU_test_signal18 = 0;
int TCU_test_error1 = 0;
int TCU_test_error2 = 0;
int TCU_test_error3 = 0;
int TCU_test_error4 = 0;
int TCU_test_error5 = 0;
int TCU_test_error6 = 0;
int TCU_test_error7 = 0;
int TCU_test_error8 = 0;
int TCU_test_error9 = 0;
int TCU_test_error10 = 0;
int TCU_test_error11 = 0;
int TCU_test_error12 = 0;
int arrive_final_station = 0;
int bcu_selftest_temp = 0;
int bcu_selftest_signal = 0;
int bcu_selftest_temp2 = 0;
int bcu_selftest_signal2 = 0;
int bcu_selftest_temp3 = 0;
int bcu_selftest_signal3 = 0;
int bcu_selftest_temp4 = 0;
int bcu_selftest_signal4 = 0;
int TCU_test_display1 = 0;
int TCU_test_display2 = 0;
int carnum_prompt = 0;//车号_提示 = 0;
int prameter_setting_temp = 0;
int parameter_setting_new = 0;
QString write_parameter1 = 0;
QString write_parameter2 = 0;
QString write_parameter3 = 0;
QString write_parameter4 = 0;
QString write_parameter5 = 0;
QString write_parameter6 = 0;
int car1_axle1_num = 0;
int car1_axle2_num = 0;
int car1_axle3_num = 0;
int car1_axle4_num = 0;
int car2_axle1_num = 0;
int car3_axle1_num = 0;
int car4_axle1_num = 0;
int car5_axle1_num = 0;
int car6_axle1_num = 0;
int car6_axle2_num = 0;
int car6_axle3_num = 0;
int car6_axle4_num = 0;
int axle_record_num = 0;
int axle_record_temp = 0;
int axle_record_signal = 0;
int axle_record_test_num = 0;
QString pw_new1 = 0;
QString pw_new2 = 0;
QString pw_display_new1 = 0;
QString pw_display_new2 = 0;
int pw_setting_color = 0;
QString pw_old = 0;
QString pw_display_old = 0;
WORD hmi_485_error = 0;
int car1_GW1 = 0;
int car1_GW2 = 0;
int car2_GW1 = 0;
int car2_GW2 = 0;
int car3_GW1 = 0;
int car3_GW2 = 0;
int car4_GW1 = 0;
int car4_GW2 = 0;
int car5_GW1 = 0;
int car5_GW2 = 0;
int car6_GW1 = 0;
int car6_GW2 = 0;
int car7_GW1 = 0;
int car7_GW2 = 0;
int car8_GW1 = 0;
int car8_GW2 = 0;
//int 实时未确认故障数 = 0;
//int 模拟测试 = 0;
//int 未确认故障提示显示 = 0;
int error_code_temp75 = 0;
int error_code_temp76 = 0;
int error_code_temp77 = 0;
int error_code_temp78 = 0;
int error_code_temp79 = 0;
int error_code_temp80 = 0;
int error_code_temp81 = 0;
int error_code_temp82 = 0;
int error_code_temp83 = 0;
int error_code_temp84 = 0;
int error_code_temp85 = 0;
int error_code_temp86 = 0;
int error_code_temp87 = 0;
int error_code_temp88 = 0;
int error_code_temp89 = 0;
int error_code_temp90 = 0;
int error_code_temp91 = 0;
int error_code_temp92 = 0;
int error_code_temp93 = 0;
int error_code_temp94 = 0;
int error_code_temp95 = 0;
int error_code_temp96 = 0;
int error_code_temp97 = 0;
int error_code_temp98 = 0;
int error_code_temp99 = 0;
int error_code_temp100 = 0;
int hvac_test_44 = 0;
//int 零速旁路状态1 = 0;
//int 零速旁路状态2 = 0;
//int 门旁路状态1 = 0;
//int 门旁路状态2 = 0;
//int 停放制动旁路状态1 = 0;
//int 停放制动旁路状态2 = 0;
//int 常用制动旁路状态1 = 0;
//int 常用制动旁路状态2 = 0;
//int 总风压低旁路状态1 = 0;
//int 总风压低旁路状态2 = 0;
int error_list2 = 0;
int station_start_temp = 0;
int station_end_temp = 0;
int CAB_error1 = 0;
//int 后台页面_num = 0;
QString ACU__version1 = 0;
QString ACU__version2 = 0;
QString ACU_GW__version1=0;
QString ACU_GW__version2=0;
QString BCU__version1 = 0;
QString BCU__version2 = 0;
QString BCU__version3 = 0;
QString BCU__version4 = 0;
QString TCU__version1 = 0;
QString TCU__version2 = 0;
QString TCU_GW__version1 = 0;
QString TCU_GW__version2 = 0;
QString TCU__version3 = 0;
QString TCU__version4 = 0;
QString TCU__version5 = 0;
QString TCU__version6 = 0;
QString ATC__version1 = 0;
QString ATC__version2 = 0;
QString ATC__version3 = 0;
QString ATC__version4 = 0;
QString PIS_PA_version1 = 0;
QString PIS_PA_version2 = 0;
QString PIS_DB_version1 = 0;
QString PIS_DB_version2 = 0;
QString PIS_TV_version1 = 0;
QString PIS_TV_version2 = 0;

QString FAS_version1 = 0;
QString FAS_version2 = 0;

QString Door_GW_Version1 = 0;
QString Door_GW_Version2 = 0;
QString Door_GW_Version3 = 0;
QString Door_GW_Version4 = 0;
QString Door_GW_Version5 = 0;
QString Door_GW_Version6 = 0;
QString Door_GW_Version7 = 0;
QString Door_GW_Version8 = 0;
QString Door_Ctr_Version1 = 0;
QString Door_Ctr_Version2 = 0;
QString Door_Ctr_Version3 = 0;
QString Door_Ctr_Version4 = 0;
QString Door_Ctr_Version5 = 0;
QString Door_Ctr_Version6 = 0;
QString Door_Ctr_Version7 = 0;
QString Door_Ctr_Version8 = 0;
QString HVAC_Versino1 = 0;
QString HVAC_Versino2 = 0;
QString HVAC_Versino3 = 0;
QString HVAC_Versino4 = 0;
QString HVAC_Versino5 = 0;
QString HVAC_Versino6 = 0;
QString HVAC_Versino7 = 0;
QString HVAC_Versino8 = 0;
QString HVAC_GW_Versino1 = 0;
QString HVAC_GW_Versino2 = 0;
QString HVAC_GW_Versino3 = 0;
QString HVAC_GW_Versino4 = 0;
QString HVAC_GW_Versino5 = 0;
QString HVAC_GW_Versino6 = 0;
QString HVAC_GW_Versino7 = 0;
QString HVAC_GW_Versino8 = 0;
QString CCU_version = 0;
QString CCU_version2 = 0;
QString ERM_version = 0;
QString DCCU_version = 0;
QString DCCU_version2 = 0;
QString IO_GW_version1 = 0;
QString IO_GW_version2 = 0;
QString IO_GW_version3 = 0;
QString IO_GW_version4 = 0;
QString IO_GW_version5 = 0;
QString IO_GW_version6 = 0;
QString PIS_ST_version1 = 0;
QString PIS_ST_version2 = 0;
QString HMI_version1 = 0;
QString HMI_version2 = 0;
QString HMI_GW_version1 = 0;
QString HMI_GW_version2 = 0;
int16_t webflow = 0;
int HMI_send_version1 = 0;
int HMI_send_version2 = 0;
int ACU_status1 = 0;
int ACU_status2 = 0;
//int 时间设置长度 = 0;
int car1_axle1_num1 = 0;
//int 屏蔽故障 = 0;
//int 屏蔽所有故障 = 0;
//int 点击次数 = 0;
int BCU_CAN1 = 0;
int BCU_CAN2 = 0;
int test_file_num1 = 0;
WORD HMI_send_data_temp1 = 0;
WORD HMI_send_data_temp2 = 0;
WORD HMI_send_data_temp3 = 0;
WORD HMI_send_data_temp4 = 0;
WORD HMI_send_data_temp5 = 0;
WORD HMI_send_data_temp6 = 0;
WORD HMI_send_data_temp7 = 0;
WORD HMI_send_data_temp8 = 0;
WORD HMI_send_data_temp9 = 0;
WORD HMI_send_data_temp10 = 0;
WORD HMI_send_data_temp11 = 0;
WORD HMI_send_data_temp12 = 0;
WORD HMI_send_data_temp13 = 0;
WORD HMI_send_data_temp14 = 0;
WORD HMI_send_data_temp15 = 0;
WORD p_set_signal = 1;
int timer_10s = 0;
int comm_status_data_temp1 = 0;
int MVB_comm_error = 0;
QString net_mode = "";
//int pageback=0;
int car1_HVAC_error1 = 0;
int car1_HVAC_error2 = 0;
int car1_HVAC_error3 = 0;
int car1_HVAC_error4 = 0;
int car2_HVAC_error1 = 0;
int car2_HVAC_error2 = 0;
int car2_HVAC_error3 = 0;
int car2_HVAC_error4 = 0;
int car3_HVAC_error1 = 0;
int car3_HVAC_error2 = 0;
int car3_HVAC_error3 = 0;
int car3_HVAC_error4 = 0;
int car4_HVAC_error1 = 0;
int car4_HVAC_error2 = 0;
int car4_HVAC_error3 = 0;
int car4_HVAC_error4 = 0;
int car5_HVAC_error1 = 0;
int car5_HVAC_error2 = 0;
int car5_HVAC_error3 = 0;
int car5_HVAC_error4 = 0;
int car6_HVAC_error1 = 0;
int car6_HVAC_error2 = 0;
int car6_HVAC_error3 = 0;
int car6_HVAC_error4 = 0;
int reserve_hide = 1;     //备用_隐藏

int stationcancel11=0;
int stationcancel12=0;
int stationcancel13=0;
int stationcancel14=0;
int stationcancel15=0;
int stationcancel21=0;
int stationcancel22=0;
int stationcancel23=0;
int stationcancel24=0;
int stationcancel25=0;
int stationcancel31=0;
int stationcancel32=0;
int stationcancel33=0;
int stationcancel34=0;
int stationcancel35=0;
int stationcancel41=0;
int stationcancel42=0;
int stationcancel43=0;
int stationcancel44=0;
int stationcancel45=0;
int stationcancel51=0;
int stationcancel52=0;
 bool m_bscset11=false;
 bool m_bscset12=false;
 bool m_bscset13=false;
 bool m_bscset14=false;
 bool m_bscset15=false;
 bool m_bscset21=false;
 bool m_bscset22=false;
 bool m_bscset23=false;
 bool m_bscset24=false;
 bool m_bscset25=false;
 bool m_bscset31=false;
 bool m_bscset32=false;
 bool m_bscset33=false;
 bool m_bscset34=false;
 bool m_bscset35=false;
 bool m_bscset41=false;
 bool m_bscset42=false;
 bool m_bscset43=false;
 bool m_bscset44=false;
 bool m_bscset45=false;
 bool m_bscset51=false;
 bool m_bscset52=false;
//  bool scflag11=false;
//  bool scflag12=false;
//  bool scflag13=false;
//  bool scflag14=false;
//  bool scflag15=false;
//  bool scflag21=false;
//  bool scflag22=false;
//  bool scflag23=false;
//  bool scflag24=false;
//  bool scflag25=false;
//  bool scflag31=false;
//  bool scflag32=false;
//  bool scflag33=false;
//  bool scflag34=false;
//  bool scflag35=false;
//  bool scflag41=false;
//  bool scflag42=false;
//  bool scflag43=false;
//  bool scflag44=false;
//  bool scflag45=false;
//  bool scflag51=false;
//  bool scflag52=false;


WORD TC1_HMI = 0;
WORD TC2_HMI = 0;

WORD TC1_HMI_ini = 0;
WORD TC2_HMI_ini = 0;

QString logfileName_debug=" ";
QString logfileName_warning=" ";

int error_turnoff_timer = 0;
//门参数设定
int door_setting1= 15;
int door_setting2= 18;
int door_setting3= 20;
int door_setting4= 23;
int door_setting5= 26;
int door_setting6= 30;
int door_setting7= 30;
int door_setting8= 3;
int door_setting9= 40;
int door_setting10= 0;
int door_setting11= 30;
int door_setting12= 20;
int door_setting13= 20;

///////////////////////////////////////////////////////////////
///////////////////////Common function/////////////////////////
///////////////////////////////////////////////////////////////
WORD g_dataBuffer[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_MVB[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_UDP[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_UDP_2[64];
WORD g_dataBuffer_onlinejude1[64];
WORD g_dataBuffer_onlinejude2[64];
BYTE sendData[128];
BYTE test_tempdata[128];
BYTE report[128];
QString g_subSystemFaultsTitle = "";
E_FAULTS_TYPE g_fault_type = E_FAULTS_TYPE_HISTORY;
QString g_runtime1;
QString g_runtime2;
bool g_isCommunicateErr = false;
bool g_bScannFault = true;
int g_nStopBtnTimes = 0;
int g_history_faults_pagenum = 1;
int g_current_faults_pagenum = 1;
bool g_popup_exist_flg = false;
bool g_backtoprepage = false;
int g_TimeSettingState = TIMESETTING_HMI;
QList<ST_REALTIME_FAULT_INFO> g_realtimeFaultsList;

string g_logFileName;

CGlobal::CGlobal()
{
}

CGlobal::~CGlobal()
{
}

int  CGlobal::m_nPrePageIndex = PAGE_INDEX_COMMSTATUS;
int  CGlobal::m_nCurPageIndex = PAGE_INDEX_COMMSTATUS;
int  CGlobal::m_nNextPageIndex = PAGE_INDEX_COMMSTATUS;

WORD Bit(WORD val, uint bit)
{
    WORD flg = 1;
    flg = flg << (bit - 1);

    return ((val & flg) == flg) ? 1 : 0;
}

WORD Change_BigEen(WORD val)
{
    uchar tmpChar1,tmpChar2;
    WORD temp_finish;
    tmpChar1=val/256;
    tmpChar2=val%256;
    temp_finish=tmpChar2*256+tmpChar1;
    return  temp_finish;
}

void BitSet(WORD& val, uint bit, uint onoff)
{
    WORD flg = 1;
    flg = flg << (bit - 1);
    if (0 == onoff)
    {
        val &= (~flg);
    }
    else
    {
        val |= flg;
    }
}

QString StrFromInt(int nNum,int nBase)
{
   return QString::number(nNum,nBase);
}

int StrToInt(QString str)
{
    return str.toInt();
}

QString GetTimeStr()
{
    return QDateTime::currentDateTime().toString("HH:mm:ss");
}

QString GetDateStr()
{
    QDate date = QDate::currentDate();
    QString str;
    str = QString::number(date.year()) + "-"+
          QString::number(date.month()) + "-"+
          QString::number(date.day());

    return str;
}

void SetINIInfo(QString keypath, QString str)
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings settings( fileName, QSettings::IniFormat );
            settings.setIniCodec(QTextCodec::codecForName("utf-8"));
            settings.setValue(keypath, str);
        }
    }
}

void GetINIInfo()
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings settings( fileName, QSettings::IniFormat );
            settings.setIniCodec(QTextCodec::codecForName("utf-8"));
            //password
            pw_true = settings.value( "/CNR_BJ/Password", "0" ).toString();
            //traincode
            HMI_send_data_temp1 = settings.value( "/CNR_BJ/Traincode", "0" ).toInt();
            //linecode
            HMI_send_data_temp3 = settings.value( "/CNR_BJ/Linecode", "0" ).toInt();
            //hmi
            TC1_HMI_ini = settings.value( "/HMI/TC1_HMI", "0" ).toInt();
            TC2_HMI_ini = settings.value( "/HMI/TC2_HMI", "0" ).toInt();
            //RunTime1
            QString dateStr = GetDateStr();
            g_runtime1 = settings.value( "/CNR_BJ/RunTime1").toString();
            QStringList list = g_runtime1.split(' ');
            if (list.size() == 0 || list[0] != dateStr)
            {
                g_runtime1 = dateStr + " " + GetTimeStr();
                SetINIInfo("/CNR_BJ/RunTime1", g_runtime1);
            }
            //RunTime2
            g_runtime2 = settings.value( "/CNR_BJ/RunTime2", "-----").toString();

            //Time setting
            g_TimeSettingState = settings.value( "/CNR_BJ/TimeSettingState", TIMESETTING_HMI).toInt();

        }
    }
}

void ReadFileToList(QString file,QStringList& list)
{
    fstream fs;
    string linestr;
    fs.open(file.toStdString().c_str(), ios_base::in);
    if (!fs.is_open())
        return;
    while(!fs.eof())
    {
        std::getline(fs, linestr, '\n');
        if (linestr.empty())
            continue;
        list.append(linestr.c_str());
    }
    fs.close();
}

QString GetLOGPathNameBuWheelDiaType(int nWheelDiaType)
{
    QString pathStr = qApp->applicationDirPath() + "/record/";
    QDir dir(pathStr);
    if(!dir.exists())
        dir.mkdir(pathStr);

    switch(nWheelDiaType)
    {
    case WHEELDIAENUM_CAR11:
        pathStr += "WheelDiaRecord11.csv";
        break;
    case WHEELDIAENUM_CAR21:
        pathStr += "WheelDiaRecord21.csv";
        break;
    case WHEELDIAENUM_CAR31:
        pathStr += "WheelDiaRecord31.csv";
        break;
    case WHEELDIAENUM_CAR41:
        pathStr += "WheelDiaRecord41.csv";
        break;
    case WHEELDIAENUM_CAR51:
        pathStr += "WheelDiaRecord51.csv";
        break;
    case WHEELDIAENUM_CAR61:
        pathStr += "WheelDiaRecord61.csv";
        break;
    case WHEELDIAENUM_CAR71:
        pathStr += "WheelDiaRecord71.csv";
        break;
    case WHEELDIAENUM_CAR81:
        pathStr += "WheelDiaRecord81.csv";
        break;
    case WHEELDIAENUM_CAR12:
        pathStr += "WheelDiaRecord12.csv";
        break;
    case WHEELDIAENUM_CAR62:
        pathStr += "WheelDiaRecord62.csv";
        break;
    case WHEELDIAENUM_CAR13:
        pathStr += "WheelDiaRecord13.csv";
        break;
    case WHEELDIAENUM_CAR63:
        pathStr += "WheelDiaRecord63.csv";
        break;
    case WHEELDIAENUM_CAR14:
        pathStr += "WheelDiaRecord14.csv";
        break;
    case WHEELDIAENUM_CAR64:
        pathStr += "WheelDiaRecord64.csv";
        break;
    default:
        pathStr = "";
        break;
    }

    return pathStr;
}

void SaveWheelDiaCSV(QString WheelDiaStr, int nWheelDiaType)
{
    QString dateStr = GetDateStr() + " " + GetTimeStr() + "," + WheelDiaStr;
    QString LOGPath = GetLOGPathNameBuWheelDiaType(nWheelDiaType);
    QStringList historyList;

    ReadFileToList(LOGPath, historyList);

    if (historyList.size() >= 10)
        historyList.erase(historyList.begin(), historyList.end() - 10);

    historyList.append(dateStr);
    QFile::remove(LOGPath);

    fstream fs;
    fs.open(LOGPath.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
        return;
    for (int i = 0; i < historyList.size(); i++)
        fs<<historyList[i].toStdString().c_str()<<endl;
    fs.close();
}

void GetWheelDiaInfoFromCSV(int nWheelDiaType, QStringList& list)
{
    QString LOGPath = GetLOGPathNameBuWheelDiaType(nWheelDiaType);
    ReadFileToList(LOGPath, list);
}

bool FindFile(const QString &path,vector<string>& filelist)
{
    QDir dir(path);

    if (!dir.exists())
        return false;

     dir.setFilter(QDir::Dirs|QDir::Files);
     dir.setSorting(QDir::DirsFirst);
     QFileInfoList list = dir.entryInfoList();
     int i = 0;

      do
      {
           QFileInfo fileInfo = list.at(i);
           if (fileInfo.fileName()=="."
              ||fileInfo.fileName()=="..")
           {
               i++;
               continue;
           }
           if (fileInfo.isDir())
           {
               FindFile(fileInfo.filePath(), filelist);
           }
           else
           {
               if (!fileInfo.fileName().contains("~"))
                    filelist.push_back(fileInfo.fileName().toStdString());
           }
           i++;
        }while(i < list.size());

      return true;
}

bool DownLoadLOG(string appPath)
{
   string filepath = appPath + "/*.log";

   system("fdisk -l > /root/usbdevice.txt");
   string linestr;
   fstream fs;
   fs.open("/root/usbdevice.txt", ios_base::in);
   if(!fs.is_open())
       return false;

   char cmdbuff[128] = {'\0'};

   while(!fs.eof())
   {
       std::getline(fs,linestr,'\n');
       if(linestr.find("FAT32") != -1
           || linestr.find("NTFS") != -1
           || linestr.find("FAT16")!= -1)
       {//get usb device name
           string usbpath;
           stringstream ss(linestr);
           ss>>usbpath;
           system("mkdir /root/usbshare");

           memset(cmdbuff,'\0',128);
           sprintf(cmdbuff,"mount -t vfat %s /root/usbshare",usbpath.c_str());
           system(cmdbuff);

           system("mkdir /root/usbshare");

           //make download folder.
           string downloadFolderPath = "/root/usbshare/CNR_BJ_LOG";
           memset(cmdbuff,'\0',128);
           sprintf(cmdbuff, "mkdir %s", downloadFolderPath.c_str());
           system(cmdbuff);

           memset(cmdbuff,'\0',128);
           sprintf(cmdbuff,"cp -r %s %s",filepath.c_str(), downloadFolderPath.c_str());
           system(cmdbuff);

           memset(cmdbuff,'\0',128);
           sprintf(cmdbuff,"chmod -R 400 %s", downloadFolderPath.c_str());
           system(cmdbuff);

           system("umount /root/usbshare");
           system("rmdir /root/usbshare");
           system("rm -f /root/usbdevice.txt");
           fs.close();
           return true;
       }
   }
   fs.close();

   return false;
}

qreal DivNum(int nDiv1, int nDiv2)
{
    qreal ret = 0;
    ret = (float)nDiv1/nDiv2;

    return ret;
}

void SetSystemTime(  int year, int mon, int day, int hour, int minute, int second )//保存系统时间
{
    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);

    QDate date( year, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);
}

