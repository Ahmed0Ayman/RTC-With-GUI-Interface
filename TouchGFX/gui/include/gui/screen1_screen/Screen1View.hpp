#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

extern  unsigned int CounterHour , CounterMin , CounterSec ;
extern unsigned int AlarmCounterHour, AlarmCounterMin, AlarmCounterSec;

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void handleTickEvent();

    void SetClock();

    void SetAlarm();

protected:
    int tickCounter;

};

#endif // SCREEN1VIEW_HPP
