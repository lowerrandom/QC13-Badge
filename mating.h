/*
 * mating.h
 *
 *  Created on: Jul 13, 2016
 *      Author: George
 */

#ifndef MATING_H_
#define MATING_H_

#define MATE_NUM_SYNC_BYTES 4
extern const uint8_t mate_sync_bytes[MATE_NUM_SYNC_BYTES];

#define MATE_PROTO_ACHIEVEMENTS BIT7 //1=achievements, 0=badge
#define MATE_PROTO_BADGE BIT6 //0=achievements, 1=badge
#define MATE_CRC_SEED 0x1C03

#define MS_IDLE 0
#define MS_PLUG 1
#define MS_HALF_PAIR 2
#define MS_PAIRED 3
#define MS_INK_WAIT 4
#define MS_SUPER_INK 5
#define MS_PIPE_PLUG 6
#define MS_PIPE_DONE 7

extern uint8_t mate_state;

void init_mating();
void mate_send();
void mate_deferred_rx_interrupt();

#endif /* MATING_H_ */