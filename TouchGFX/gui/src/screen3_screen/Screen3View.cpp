#include <gui/screen3_screen/Screen3View.hpp>

static unsigned int _CounterHour, _CounterMin, _CounterSec;

unsigned int AlarmCounterHour, AlarmCounterMin, AlarmCounterSec;

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}


void Screen3View::ClearAlarmVar()
{
    
    _CounterHour = 0;
    _CounterMin = 0;
    _CounterSec = 0;

}

void Screen3View::SetAlarmVal()
{

    AlarmCounterHour = _CounterHour;
    AlarmCounterMin = _CounterMin;
    AlarmCounterSec = _CounterSec;

}

void Screen3View::IncreaseValueAlarmFun()
{



    if (toggleButtonHour.getState())
    {

        toggleButtonMinute.forceState(0);
        toggleButtonMinute.invalidate();


        _CounterHour++;
        if (_CounterHour > 12)
        {
            _CounterHour = 0;
            textAreaHour.invalidate();

        }
        Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%d", _CounterHour);
        textAreaHour.setWildcard(textAreaHourBuffer);
        textAreaHour.resizeToCurrentText();
        textAreaHour.setTypedText(touchgfx::TypedText(5));
        textAreaHour.invalidate();
    }
    else if (toggleButtonMinute.getState())
    {


        if (_CounterMin > 59)
        {
            _CounterMin = 0;
            textAreaMinute.invalidate();

        }
        _CounterMin++;
        Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%d", _CounterMin);
        textAreaMinute.setWildcard(textAreaMinuteBuffer);
        textAreaMinute.resizeToCurrentText();
        textAreaMinute.invalidate();

    }



}




void Screen3View::DecreaseValueAlarmFun()
{


    if (toggleButtonHour.getState())
    {
        toggleButtonMinute.forceState(0);
        toggleButtonMinute.invalidate();



        _CounterHour--;
        Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%d", _CounterHour);
        textAreaHour.setWildcard(textAreaHourBuffer);
        textAreaHour.resizeToCurrentText();
        textAreaHour.invalidate();
    }
    else if (toggleButtonMinute.getState())
    {


        _CounterMin--;
        Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%d", _CounterMin);
        textAreaMinute.setWildcard(textAreaMinuteBuffer);
        textAreaMinute.resizeToCurrentText();
        textAreaMinute.invalidate();

    }



}
