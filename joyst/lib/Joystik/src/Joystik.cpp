#include "Joystik.h"

// ініціалізуємо піни 
// ініціалізуємо середню точку, верхню та нижню точки мертвої зони вісі X та Y
joystik::joystik(byte initPinX, int halfDedBand_X, byte initPinY, int halfDedBand_Y, byte initPinBtn, int iniPeriod ){
   
    this->pin_X = initPinX;
    this->half_ded_band_X = halfDedBand_X; //центр вісі X

    this->pin_Y = initPinY;
    this->half_ded_band_Y = halfDedBand_Y; //центр вісі Y

    this->pin_Btn = initPinBtn;
    this->period = iniPeriod;
}

// ініціалізуємо
void joystik::init(){
    this->mid_X = analogRead(this->pin_X); //центр вісі X
	this->deadTop_X = this->mid_X + this->half_ded_band_X ; //верх мертвої зони вісі X
	this->deadBottom_X = this->mid_X - this->half_ded_band_X; //низ мертвої зони вісі X

    this->mid_Y = analogRead(this->pin_Y); //центр вісі Y
	this->deadTop_Y = this->mid_Y + this->half_ded_band_Y ; //верх мертвої зони вісі Y
	this->deadBottom_Y = this->mid_Y - this->half_ded_band_Y; //низ мертвої зони вісі Y
}

// Опитуємо значення вісей та прораховуємо їх, опитуємо кнопку
bool joystik::tick()
{
    static unsigned long joy_stik_millis;
    if ( (millis() - joy_stik_millis) > this->period) {
    joy_stik_millis = millis();
    
        this->X_axis = analogRead(this->pin_X);
        if (this->X_axis > this->deadTop_X )
        {// джойстік вище середньої мертвої зони
            this->X_axis -= this->deadTop_X ;  
        }
        else if (this->X_axis < this->deadBottom_X)
        {// джойстік нище середньої мертвої зони
            this->X_axis -= this->deadBottom_X;
        }
        else
        {// джойстік в мертвій зоні
            this->X_axis = 0;
        }

        this->Y_axis = analogRead(this->pin_Y);
        if (this->Y_axis > this->deadTop_Y )
        {// джойстік вище середньої мертвої зони
            this->Y_axis -= this->deadTop_Y ;  
        }
        else if (this->Y_axis < this->deadBottom_Y)
        {// джойстік нище середньої мертвої зони
            this->Y_axis -= this->deadBottom_Y;
        }
        else
        {// джойстік в мертвій зоні
            this->Y_axis = 0;
        }

        return true; // інтервал опитування пройшов, значення зчитані і приготовлені
    }
    return false; //інтервал опитування не скінчився
}
