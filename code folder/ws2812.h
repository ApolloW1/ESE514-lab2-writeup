#ifndef _WS2812_H
#define _WS2812_H
void set_neopixel_color(); 
void turn_on_LED_power();
void pattern_greys(uint len, uint t);
void pattern_sparkle(uint len, uint t);
void pattern_random(uint len, uint t);
void pattern_snakes(uint len, uint t);
#endif