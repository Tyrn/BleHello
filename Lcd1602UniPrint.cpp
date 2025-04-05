#include <Lcd1602UniPrint.h>

int Lcd1602UniPrint::len(const char *s) {
  int len = 0;
  while (*s)
    len += (*s++ & 0xc0) != 0x80;
  return len;
}
