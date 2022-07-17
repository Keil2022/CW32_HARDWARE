#include "app.h"

//========================================================================
// ����: void APP_config(void)
// ����: �������ú���.
// ����: None.
// ����: None.
// �汾: V1.0, 2022��6��1��
//========================================================================
void APP_config(void)
{
	BTIM1_Configuration();	//��ʱ������
	
	IWDT_Configuration();	//�������Ź���ʼ��
	
	LED_Configuration();	//LED��ʼ��
//	KEY_Configuration();	//����
//	Buzzer_Configuration();	//������
	
}

//========================================================================
// ����: void TasksHandle_xMS(void)
// ����: ��������.
// ����: None.
// ����: None.
// �汾: V1.0, 2022��6��1��
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





