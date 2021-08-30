#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "main.h"
#include "cmsis_os2.h"


extern  unsigned int CounterHour, CounterMin, CounterSec;
extern RTC_TimeTypeDef gTime;

extern osMessageQueueId_t MessSetTimeHandle;
extern unsigned char Modify_State ;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	/*
	HAL_RTC_GetTime(&hrtc, &Gtime, RTC_FORMAT_BIN);
	CounterHour = Gtime.Hours ;
	CounterMin = Gtime.Minutes ;
	CounterMin = Gtime.Seconds ;
	*/

	CounterHour = gTime.Hours;
	CounterMin = gTime.Minutes;
	CounterSec = gTime.Seconds;
}
void Model::GetRTCRealValues(int* h, int* m, int* s)
{
	/*
	HAL_RTC_GetTime(&hrtc, &Gtime, RTC_FORMAT_BIN);
	*h = Gtime.Hours;
	*m = Gtime.Minutes;
	*s = Gtime.Seconds;
	* */
}

void Model::SetRTCRealValues(void)
{
	/*
	HAL_RTC_GetTime(&hrtc, &Gtime, RTC_FORMAT_BIN);
	*h = Gtime.Hours;
	*m = Gtime.Minutes;
	*s = Gtime.Seconds;
	* */

	 gTime.Hours = CounterHour , gTime.Minutes = CounterMin , gTime.Seconds = CounterSec ;
	 osMessageQueuePut(MessSetTimeHandle, &Modify_State , NULL, 0);



}
