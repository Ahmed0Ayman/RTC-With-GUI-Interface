// 4.17.0 0xd040230f
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID = 0, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_clocks_backgrounds_clock_classic_background[]; // BITMAP_BLUE_CLOCKS_BACKGROUNDS_CLOCK_CLASSIC_BACKGROUND_ID = 2, Size: 233x243 pixels
extern const unsigned char image_blue_clocks_hands_clock_classic_hour_hand[]; // BITMAP_BLUE_CLOCKS_HANDS_CLOCK_CLASSIC_HOUR_HAND_ID = 3, Size: 5x45 pixels
extern const unsigned char image_blue_clocks_hands_clock_classic_minute_hand[]; // BITMAP_BLUE_CLOCKS_HANDS_CLOCK_CLASSIC_MINUTE_HAND_ID = 4, Size: 5x65 pixels
extern const unsigned char image_blue_clocks_hands_clock_classic_second_hand[]; // BITMAP_BLUE_CLOCKS_HANDS_CLOCK_CLASSIC_SECOND_HAND_ID = 5, Size: 9x103 pixels
extern const unsigned char image_blue_icons_back_arrow_32[]; // BITMAP_BLUE_ICONS_BACK_ARROW_32_ID = 6, Size: 17x30 pixels
extern const unsigned char image_blue_icons_next_arrow_32[]; // BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID = 7, Size: 17x30 pixels
extern const unsigned char image_blue_icons_settings_32[]; // BITMAP_BLUE_ICONS_SETTINGS_32_ID = 8, Size: 30x30 pixels
extern const unsigned char image_dark_buttons_round_icon_button_pressed[]; // BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID = 9, Size: 60x60 pixels
extern const unsigned char image_weather_background_1[]; // BITMAP_WEATHER_BACKGROUND_1_ID = 10, Size: 240x202 pixels
extern const unsigned char image_weather_background_2[]; // BITMAP_WEATHER_BACKGROUND_2_ID = 11, Size: 240x202 pixels
extern const unsigned char image_weather_background_3[]; // BITMAP_WEATHER_BACKGROUND_3_ID = 12, Size: 240x202 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_round_icon_button, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_clocks_backgrounds_clock_classic_background, 0, 233, 243, 46, 50, 143, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 142, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_clocks_hands_clock_classic_hour_hand, 0, 5, 45, 2, 4, 1, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 39, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_clocks_hands_clock_classic_minute_hand, 0, 5, 65, 2, 2, 1, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 61, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_clocks_hands_clock_classic_second_hand, 0, 9, 103, 4, 1, 1, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 94, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_back_arrow_32, 0, 17, 30, 3, 11, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_next_arrow_32, 0, 17, 30, 10, 11, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_settings_32, 0, 30, 30, 28, 12, 1, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 6, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_weather_background_1, 0, 240, 202, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 202, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_weather_background_2, 0, 240, 202, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 202, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_weather_background_3, 0, 240, 202, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 202, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase