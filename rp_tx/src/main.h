#ifndef Main_H_
#define Main_H_
#include <Arduino.h>
#include <Si446x.h>
#include <Keypad.h>

// data[D_ADR, D_CMD, D_PAR_0, D_PAR_1, D_PAR_2, D_PAR_3, D_PAR_4, D_PAR_5, D_PAR_6]
#define MAX_PACKET_SIZE 8 // розмір пакету даних - data

#define MY_ADR   1          // адрес данного приемника
#define MAIN_ADR   0        // Адрес пульта управления
#define BROAD_ADR   127     // Адрес широкого вещания

#define I_ADR   0
#define I_CMD   1
#define I_PAR_0 2
#define I_PAR_1 3
#define I_PAR_2 4
#define I_PAR_3 5
#define I_PAR_4 6
#define I_PAR_5 7

#define CMD_NOP      0
#define CMD_WEKUP    1
#define CMD_FIER     2
#define CMD_SLEP     3
#define CMD_AUTO     4
#define CMD_MOVE     5

void RP_SLEEP(void);
void RX_CMD_EXEC(void);

#endif