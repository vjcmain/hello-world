// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdint.h"


typedef enum
{
	mode_idle = 1,
	mode_run = 2,
	mode_sleep=3

}power_mode;
typedef struct 
{
 
	uint8_t moto_idx;
	float moto_current;
	float kp;
	float ki;
	float kd;
	power_mode mode;
}moto_struct;
#define DEBUG

int main()
{

	moto_struct moto;
	moto.moto_idx = 1;
	moto.kd = 2;

#ifdef DEBUG
		moto.ki = 3;
#else
	moto.ki = 2;
#endif // 
	moto.mode = mode_run;
	printf("%d %d ", moto.mode, moto.kd);
	getchar();
	if ()
	{
	}
	else
	{

	}



	return 0;
}

