#ifndef _LCD1602UNIPRINT_H
#define _LCD1602UNIPRINT_H

// Display mode: 1 - I2C; 2 - 10-pin.
#define _LCD_TYPE 1
#include <LCD_1602_RUS_ALL.h>

class Lcd1602UniPrint {
public:
  Lcd1602UniPrint(uint8_t lcd_Addr, uint8_t lcd_cols, uint8_t lcd_rows) : lcd(lcd_Addr, lcd_cols, lcd_rows) {}
  static int len(const char *s);
private:
  LCD_1602_RUS lcd;
};

#endif
