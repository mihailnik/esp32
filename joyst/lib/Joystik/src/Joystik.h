#pragma once

#include <Arduino.h>

//две оси X, Y, и кнопка Btn, гистерезис dA, центры осей mX, mY
// pin_X, half_dead_band_X, pin_Y, half_dead_band_Y, pin_Btn, tine period
class joystik {
public:
	// members

	int X_axis; //буфер оси X
	int Y_axis; //буфер оси Y

	int dB; //буфер кнопки
    byte state;// состояние джойстика
    byte pin_Btn;// аналоговый вход кнопки

	// methods
	joystik(byte, int, byte, int, byte, int);
	void init();
	bool tick();

    int period;// період опитування

    byte pin_X;// аналоговый вход осиX
  	int mid_X; //центр вісі X
  	int half_ded_band_X; //центр вісі X
	int deadTop_X; //верх мертвої зони вісі X
	int deadBottom_X;//низ мертвої зони вісі X

    byte pin_Y;// аналоговый вход осиY
  	int mid_Y; //центр вісі Y
  	int half_ded_band_Y; //центр вісі Y
	int deadTop_Y; //верх мертвої зони вісі Y
	int deadBottom_Y;//низ мертвої зони вісі Y
private:
};