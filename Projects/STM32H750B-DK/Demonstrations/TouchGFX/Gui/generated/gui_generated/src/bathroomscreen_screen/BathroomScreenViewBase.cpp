/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/bathroomscreen_screen/BathroomScreenViewBase.hpp>
#include "BitmapDatabase.hpp"

BathroomScreenViewBase::BathroomScreenViewBase() :
    buttonCallback(this, &BathroomScreenViewBase::buttonCallbackHandler)
{
    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BATHROOM_BG_ID));

    buttonBack.setXY(0, 0);
    buttonBack.setBitmaps(touchgfx::Bitmap(BITMAP_GO_BACK_BUTTON_ID), touchgfx::Bitmap(BITMAP_GO_BACK_BUTTON_ID));
    buttonBack.setAction(buttonCallback);

    imageBathtubUI.setXY(235, 138);
    imageBathtubUI.setVisible(false);
    imageBathtubUI.setBitmap(touchgfx::Bitmap(BITMAP_BATHTUB_DISPLAY_ON_ID));

    buttonBathtub.setXY(84, 142);
    buttonBathtub.setBitmaps(touchgfx::Bitmap(BITMAP_BATHTUB_GLOW_ID), touchgfx::Bitmap(BITMAP_BATHTUB_GLOW_ID));
    buttonBathtub.setAction(buttonCallback);
    buttonBathtub.setAlpha(0);

    buttonWasher.setXY(360, 0);
    buttonWasher.setBitmaps(touchgfx::Bitmap(BITMAP_WASHING_MACHINE_GLOW_ID), touchgfx::Bitmap(BITMAP_WASHING_MACHINE_GLOW_ID));
    buttonWasher.setAction(buttonCallback);
    buttonWasher.setAlpha(0);

    buttonHomeControl.setXY(36, 57);
    buttonHomeControl.setBitmaps(touchgfx::Bitmap(BITMAP_HOMECONTROL_GLOW_ID), touchgfx::Bitmap(BITMAP_HOMECONTROL_GLOW_ID));
    buttonHomeControl.setAction(buttonCallback);
    buttonHomeControl.setAlpha(0);

    imageBathtubWater.setXY(116, 165);
    imageBathtubWater.setVisible(false);
    imageBathtubWater.setBitmap(touchgfx::Bitmap(BITMAP_BATHTUB_WATER_ON_ID));

    imageWasherActive.setXY(389, 59);
    imageWasherActive.setVisible(false);
    imageWasherActive.setBitmap(touchgfx::Bitmap(BITMAP_WASHING_MACHINE_ON_ID));

    imageHomeUI.setXY(60, 83);
    imageHomeUI.setVisible(false);
    imageHomeUI.setBitmap(touchgfx::Bitmap(BITMAP_HOMECONTROL_DISPLAY_ON_ID));

    imageWasherUI.setXY(423, 17);
    imageWasherUI.setVisible(false);
    imageWasherUI.setBitmap(touchgfx::Bitmap(BITMAP_WASHING_MACHINE_DISPLAY_ON_ID));

    mcuLoad.setXY(-54, 252);

    add(background);
    add(buttonBack);
    add(imageBathtubUI);
    add(buttonBathtub);
    add(buttonWasher);
    add(buttonHomeControl);
    add(imageBathtubWater);
    add(imageWasherActive);
    add(imageHomeUI);
    add(imageWasherUI);
    add(mcuLoad);
}

void BathroomScreenViewBase::setupScreen()
{
    mcuLoad.initialize();
}

//Called when the screen is done with transition/load
void BathroomScreenViewBase::afterTransition()
{
    //ScreenIsEntered
    //When screen is entered call virtual function
    //Call startGlowAnimaton
    startGlowAnimaton();
}

void BathroomScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBack)
    {
        //GoToHallway
        //When buttonBack clicked change screen to HallwayScreen
        //Go to HallwayScreen with screen transition towards East
        application().gotoHallwayScreenScreenSlideTransitionEast();
    }
    else if (&src == &buttonBathtub)
    {
        //GoToBathtub
        //When buttonBathtub clicked change screen to BathtubScreen
        //Go to BathtubScreen with no screen transition
        application().gotoBathtubScreenScreenNoTransition();
    }
    else if (&src == &buttonWasher)
    {
        //GoToWasher
        //When buttonWasher clicked change screen to WasherScreen
        //Go to WasherScreen with no screen transition
        application().gotoWasherScreenScreenNoTransition();
    }
    else if (&src == &buttonHomeControl)
    {
        //GoToHomeControl
        //When buttonHomeControl clicked change screen to HomeControlScreen
        //Go to HomeControlScreen with no screen transition
        application().gotoHomeControlScreenScreenNoTransition();
    }
}
