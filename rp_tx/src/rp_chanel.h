#pragma once
#include <Arduino.h>

// канал, зберігає в собі координати осей, номер канала
class rp_chanel {
public:
	// members
  byte ch_number; //номер канала
	int X_axis; //буфер оси X
	int Y_axis; //буфер оси Y
	int Z_axis; //буфер оси Z

	int dB; //буфер кнопки
    byte state;// состояние джойстика
    byte pin_Btn;// аналоговый вход кнопки
	// methods
	rp_chanel(byte);
private:
};

rp_chanel::chanel(byte number)
{
    ch_number = number;
}