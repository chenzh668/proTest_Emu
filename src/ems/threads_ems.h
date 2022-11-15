#ifndef _THREADS_H_
#define _THREADS_H_

#define _SHORT_ 2
#define _BOOL_ 3
#define _UINT_ 4
#define _INT_ 5
#define _U_SHORT 6
#define _FLOAT_ 7

#define ON_LINE 1
#define OFF_LINE 0

#define PW   1
#define QW   2
// 61850服务器系统状态定义
enum SERVER_WORK_STATE //当前工作状态
{
	SER_WAITTING_START = 0,				  //等待启动中
	SER_IDEL = 1,						  //系统闲置中
	EMS_COMMUNICATION_STATUS_SETTING = 2, //设置EMS通信状态
	EMS_START_EMU = 3,					  //下发升压舱启动信号

	EMS_STOP_EMU = 4,					  //下发升压舱停止信号	
    EMS_START_ONE_PCS =5,                 //对其中一个PCS发送启动信号
    EMS_STOP_ONE_PCS =6,                 //对其中一个PCS发送停止信号

	ADJUST_EMU_PW =7,                 //调节有功功率
    ADJUST_EMU_QW =8,                 //调节无功功率
	//	SER_IDEL = 0xff, //系统闲置中
};
extern int g_sys_status ;
extern int g_sys_status_last;
void CreateThreads_ems(void);
#endif