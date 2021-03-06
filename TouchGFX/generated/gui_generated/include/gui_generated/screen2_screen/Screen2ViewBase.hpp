/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void SetClock()
    {
        // Override and implement this function in Screen2
    }

    virtual void IncreaseValueFun()
    {
        // Override and implement this function in Screen2
    }

    virtual void DecreaseValueFun()
    {
        // Override and implement this function in Screen2
    }

    virtual void SetVariables()
    {
        // Override and implement this function in Screen2
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TiledImage tiledImage1;
    touchgfx::ToggleButton toggleButtonHour;
    touchgfx::ToggleButton toggleButtonSecond;
    touchgfx::ToggleButton toggleButtonMinute;
    touchgfx::ButtonWithLabel buttonBack;
    touchgfx::ButtonWithLabel buttonSet;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea3;
    touchgfx::TextAreaWithOneWildcard textAreaHour;
    touchgfx::TextAreaWithOneWildcard textAreaMinute;
    touchgfx::TextAreaWithOneWildcard textAreaSecond;
    touchgfx::ButtonWithIcon buttonIncrease;
    touchgfx::ButtonWithIcon buttonDecrease;
    touchgfx::ButtonWithLabel buttonNext;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREAHOUR_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaHourBuffer[TEXTAREAHOUR_SIZE];
    static const uint16_t TEXTAREAMINUTE_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaMinuteBuffer[TEXTAREAMINUTE_SIZE];
    static const uint16_t TEXTAREASECOND_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaSecondBuffer[TEXTAREASECOND_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen2ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN2VIEWBASE_HPP
