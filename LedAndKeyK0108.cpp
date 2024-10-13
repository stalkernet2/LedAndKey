#include <U8g2lib.h>
 
constexpr uint8_t PIN_DB0 = 13;
constexpr uint8_t PIN_DB1 = 12;
constexpr uint8_t PIN_DB2 = 11;
constexpr uint8_t PIN_DB3 = 10;
constexpr uint8_t PIN_DB4 = 9;
constexpr uint8_t PIN_DB5 = 8;
constexpr uint8_t PIN_DB6 = 7;
constexpr uint8_t PIN_DB7 = 6;
constexpr uint8_t PIN_CS0 = 5;
constexpr uint8_t PIN_CS1 = 4;
constexpr uint8_t PIN_DC = 3;
constexpr uint8_t PIN_EN = 2;
/*
U8G2_KS0108_128X64_F display(U8G2_R0,
                             PIN_DB0, PIN_DB1, PIN_DB2, PIN_DB3, 
                             PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7,
                             PIN_EN, PIN_DC, U8X8_PIN_NONE, PIN_CS0, PIN_CS1,
                             U8X8_PIN_NONE);
*/

U8G2_KS0108_128X64_F_4W_SW_SPI display(U8G2_R0, PIN_DB0, PIN_DB1);
unsigned long deadInterval = 500;
unsigned long deadLine = 0;
 
const int SIZE_MESSAGE = 24;
uint8_t outputsPC[SIZE_MESSAGE];

void setup() {
  display.begin();
  display.clearBuffer();
  display.enableUTF8Print();
  display.setFont(u8g2_font_6x13_t_cyrillic);
  display.setCursor(0, 12);
  display.print("Алгоритм для данного");
  display.setCursor(0, 24);
  display.print("дисплея находится в");
  display.setCursor(0, 36);
  display.print("разработке...");
  display.setCursor(0, 48);
  display.print("Готово: 10% (5 задач");
  display.setCursor(0, 60);
  display.print("из 50)");
  display.sendBuffer();
}
 
void loop() 
{
  /*if(Serial.available() > 0)
  {
    Serial.readBytes(outputsPC, SIZE_MESSAGE);
  }

  if(millis() >= deadLine)
  {
    deadLine += deadInterval;
  }*/
}
