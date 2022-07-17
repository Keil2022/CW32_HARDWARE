#include "app.h"

//========================================================================
// 函数: void APP_config(void)
// 描述: 外设配置函数.
// 参数: None.
// 返回: None.
// 版本: V1.0, 2022年6月1日
//========================================================================
void APP_config(void)
{
	BTIM1_Configuration();	//定时器配置
	
	IWDT_Configuration();	//独立看门狗初始化
	
	LED_Configuration();	//LED初始化
//	KEY_Configuration();	//按键
//	Buzzer_Configuration();	//蜂鸣器
	
}

//========================================================================
// 函数: void TasksHandle_xMS(void)
// 描述: 任务处理函数.
// 参数: None.
// 返回: None.
// 版本: V1.0, 2022年6月1日
//========================================================================
void TasksHandle_10MS(void)
{
	KEY_Handle();
}

void TasksHandle_100MS(void)
{	
	
}

void TasksHandle_250MS(void)
{
	IWDT_Refresh();
}

void TasksHandle_500MS(void)
{
	PC13_TOG();
}





