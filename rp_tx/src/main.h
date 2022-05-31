#pragma once
#include "common_constants.h"
#include <CircularBuffer.h>
#include "rp_chanel.h"
#include "Joystik.h"
#include <Arduino.h>
#include <Si446x.h>
#include <Keypad.h>

#define MY_ADR   1          // адрес данного приемника
#define MAIN_ADR   0        // Адрес пульта управления
#define BROAD_ADR   127     // Адрес широкого вещания

// події з матричної клавіатури
#define EV_KEY_0   1     // Натиснута кнопка "0"

// структура подій з клавіатури, кнопки джойстіка, потенціометрів джойстіка
typedef struct {
  byte eventSource;
  int eventParam;
} EVQUEUE_OBJ_t;

void RP_SLEEP(void);
void RX_CMD_EXEC(void);
uint8_t RadioTX(si446x_state_t state_after_tx);

// channel states function
void fsm_channels_swich(void);
void fsm_ALL(void);
void fsm_CH1(void);
void fsm_CH2(void);
void fsm_CH3(void);
void fsm_CH4(void);
void fsm_CH5(void);
void fsm_CH6(void);
void fsm_CH7(void);
void fsm_CH8(void);
void fsm_CH9(void);