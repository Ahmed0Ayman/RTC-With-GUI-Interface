#include <gui/screen1_screen/Screen1View.hpp>



Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


void Screen1View::handleTickEvent()
{
/*
    tickCounter++;
    if (tickCounter % 60 == 0)
    {

        if (++CounterSec >= 60)
        {
            CounterSec = 0;
            if (++CounterMin >= 60)
            {
                CounterMin = 0;
                if (++CounterHour >= 24)
                {
                    CounterHour = 0;
                }
            }
        }
        */
        analogClock1.setTime24Hour(CounterHour, CounterMin, CounterSec);
    /*    }

    int hours = 0, min = 0, sec = 0;
    presenter->GetRTCVals(&hours, &min, &sec);
    analogClock1.setTime24Hour(CounterHour, CounterMin, CounterSec);
    */
}

void Screen1View::SetClock() {

    analogClock1.setTime24Hour(CounterHour, CounterMin, CounterSec);

/*
    touchgfx::Unicode::snprintf(textAreaAlarmNumBuffer1, TEXTAREAALARMNUMBUFFER1_SIZE, "%d", AlarmCounterHour);
    textAreaAlarmNum.setWildcard1(textAreaAlarmNumBuffer1);
    touchgfx::Unicode::snprintf(textAreaAlarmNumBuffer2, TEXTAREAALARMNUMBUFFER2_SIZE, "%d", AlarmCounterMin );
    textAreaAlarmNum.setWildcard2(textAreaAlarmNumBuffer2);
    textAreaAlarmNum.resizeToCurrentText();
    textAreaAlarmNum.setTypedText(touchgfx::TypedText(23));
    textAreaAlarmNum.invalidate();
*/
/*
    Unicode::snprintf(textAreaAlarmNumBuffer1, TEXTAREAALARMNUMBUFFER1_SIZE, "%d", AlarmCounterHour);
    textAreaAlarmNum.setWildcard1(textAreaAlarmNumBuffer1);
    textAreaAlarmNum.resizeToCurrentText();
    textAreaAlarmNum.setTypedText(touchgfx::TypedText(23));
    Unicode::snprintf(textAreaAlarmNumBuffer2, TEXTAREAALARMNUMBUFFER1_SIZE, "%d", AlarmCounterHour);
    textAreaAlarmNum.setWildcard2(textAreaAlarmNumBuffer2);
    textAreaAlarmNum.resizeToCurrentText();
    textAreaAlarmNum.setTypedText(touchgfx::TypedText(23));
    textAreaAlarmNum.invalidate();
    */
}


void Screen1View::SetAlarm()
{

    touchgfx::Unicode::snprintf(textAreaAlarmNumBuffer1, TEXTAREAALARMNUMBUFFER1_SIZE, "%d", AlarmCounterHour);
    textAreaAlarmNum.setWildcard1(textAreaAlarmNumBuffer1);
    touchgfx::Unicode::snprintf(textAreaAlarmNumBuffer2, TEXTAREAALARMNUMBUFFER2_SIZE, "%d", AlarmCounterMin);
    textAreaAlarmNum.setWildcard2(textAreaAlarmNumBuffer2);
    textAreaAlarmNum.resizeToCurrentText();
    textAreaAlarmNum.setTypedText(touchgfx::TypedText(23));
    textAreaAlarmNum.invalidate();


}