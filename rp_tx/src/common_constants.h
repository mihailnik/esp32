#pragma once

// data[D_ADR, D_CMD, D_PAR_0, D_PAR_1, D_PAR_2, D_PAR_3, D_PAR_4, D_PAR_5, D_PAR_6]
#define MAX_PACKET_SIZE 8 // розмір пакету даних - data

// chanels
#define ALL 0
#define CH1 1
#define CH2 2
#define CH3 3
#define CH4 4
#define CH5 5
#define CH6 6
#define CH7 7
#define CH8 8
#define CH9 9

// Индекс параметра в массиве пакета передаваемых данных
#define I_ADR   0
#define I_CMD   1
#define I_PAR_0 2
#define I_PAR_1 3
#define I_PAR_2 4
#define I_PAR_3 5
#define I_PAR_4 6
#define I_PAR_5 7

// Команди
#define CMD_NOP      0
#define CMD_WEKUP    1
#define CMD_FIER     2
#define CMD_SLEEP     3
#define CMD_AUTO     4
#define CMD_MOVE     5