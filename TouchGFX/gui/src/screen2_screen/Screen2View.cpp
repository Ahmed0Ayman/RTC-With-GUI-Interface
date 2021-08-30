#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen1_screen/Screen1View.hpp>

static unsigned int _CounterHour, _CounterMin, _CounterSec;

unsigned int CounterHour, CounterMin, CounterSec;


Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::SetClock()
{
    CounterHour = _CounterHour;
    CounterMin = _CounterMin;
    CounterSec = _CounterSec;
    
    presenter->SetRTCVals();

}



void Screen2View::SetVariables()
{
    _CounterHour = 0;
    _CounterMin = 0;
    _CounterSec = 0;


}

void Screen2View::IncreaseValueFun()
{



        if (toggleButtonHour.getState())
        {

            toggleButtonMinute.forceState(0);
            toggleButtonMinute.invalidate();
            toggleButtonSecond.forceState(0);
            toggleButtonSecond.invalidate();

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
            toggleButtonSecond.forceState(0);
            toggleButtonSecond.invalidate();

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
        else if (toggleButtonSecond.getState())
        {

            if (_CounterSec > 59)
            {

                _CounterSec = 0;
                textAreaSecond.invalidate();

            }

            _CounterSec++;
            Unicode::snprintf(textAreaSecondBuffer, TEXTAREASECOND_SIZE, "%d", _CounterSec);
            textAreaSecond.setWildcard(textAreaSecondBuffer);
            textAreaSecond.resizeToCurrentText();
            textAreaSecond.invalidate();


        }
    

}




void Screen2View::DecreaseValueFun()
{


    if (toggleButtonHour.getState())
    {
        toggleButtonMinute.forceState(0);
        toggleButtonMinute.invalidate();
        toggleButtonSecond.forceState(0);
        toggleButtonSecond.invalidate();


        _CounterHour--;
        Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%d", _CounterHour);
        textAreaHour.setWildcard(textAreaHourBuffer);
        textAreaHour.resizeToCurrentText();
        textAreaHour.invalidate();
    }
    else if (toggleButtonMinute.getState())
    {
        toggleButtonSecond.forceState(0);
        toggleButtonSecond.invalidate(); 


        _CounterMin--;
        Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%d", _CounterMin);
        textAreaMinute.setWildcard(textAreaMinuteBuffer);
        textAreaMinute.resizeToCurrentText();
        textAreaMinute.invalidate();

    }
    else if (toggleButtonSecond.getState())
    {

        _CounterSec--;
        Unicode::snprintf(textAreaSecondBuffer, TEXTAREASECOND_SIZE, "%d", _CounterSec);
        textAreaSecond.setWildcard(textAreaSecondBuffer);
        textAreaSecond.resizeToCurrentText();
        textAreaSecond.invalidate();


    }


}
