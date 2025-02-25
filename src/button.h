#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

enum ButtonState
{
  NOP, CLICKED, LONG_PRESSED
};

class Button
{
public:
  Button(uint8_t pin);
  ButtonState get_state();
  void tick(unsigned long now);
private:
  uint8_t m_pin;
  int m_pinState;
  bool m_released;
  bool m_long_pressed;
  unsigned long m_lastDebounce;
  unsigned long m_lastPressed;
};

#endif // SELECTOR_H