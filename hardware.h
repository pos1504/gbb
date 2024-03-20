#ifndef HARDWARE_H_
#define HARDWARE_H_

//손

#define set_bit(r,b) r |=(b)
#define clear_bit(r,b) r &=~(b)

#define PORT_LED_HAND_23_FOLD PORTD
#define DDR_LED_HAND_23_FOLD DDRD
#define BIT_LED_HAND_23_FOLD (1<<0)

#define LED_HAND_23_FOLD_ON() set_bit(PORT_LED_HAND_23_FOLD,BIT_LED_HAND_23_FOLD)
#define LED_HAND_23_FOLD_OFF() clear_bit(PORT_LED_HAND_23_FOLD,BIT_LED_HAND_23_FOLD)

#define PORT_LED_HAND_23_UNFOLD PORTD
#define DDR_LED_HAND_23_UNFOLD DDRD
#define BIT_LED_HAND_23_UNFOLD (1<<1)

#define LED_HAND_23_UNFOLD_ON() set_bit(PORT_LED_HAND_23_UNFOLD,BIT_LED_HAND_23_UNFOLD)
#define LED_HAND_23_UNFOLD_OFF() clear_bit(PORT_LED_HAND_23_UNFOLD,BIT_LED_HAND_23_UNFOLD)

#define PORT_LED_HAND_145_FOLD PORTD
#define DDR_LED_HAND_145_FOLD DDRD
#define BIT_LED_HAND_145_FOLD (1<<2)

#define LED_HAND_145_FOLD_ON() set_bit(PORT_LED_HAND_145_FOLD,BIT_LED_HAND_145_FOLD)
#define LED_HAND_145_FOLD_OFF() clear_bit(PORT_LED_HAND_145_FOLD,BIT_LED_HAND_145_FOLD)

#define PORT_LED_HAND_145_UNFOLD PORTD
#define DDR_LED_HAND_145_UNFOLD DDRD
#define BIT_LED_HAND_145_UNFOLD (1<<3)

#define LED_HAND_145_UNFOLD_ON() set_bit(PORT_LED_HAND_145_UNFOLD,BIT_LED_HAND_145_UNFOLD)
#define LED_HAND_145_UNFOLD_OFF() clear_bit(PORT_LED_HAND_145_UNFOLD,BIT_LED_HAND_145_UNFOLD)

//==============================

#define PORT_LED_WIN PORTD
#define DDR_LED_WIN DDRD
#define BIT_LED_WIN (1<<4)

#define LED_WIN_ON() set_bit(PORT_LED_WIN,BIT_LED_WIN)
#define LED_WIN_OFF() clear_bit(PORT_LED_WIN,BIT_LED_WIN)

#define PORT_LED_WIN_SUB PORTD
#define DDR_LED_WIN_SUB DDRD
#define BIT_LED_WIN_SUB (1<<5)

#define LED_WIN_SUB_ON() set_bit(PORT_LED_WIN_SUB,BIT_LED_WIN_SUB)
#define LED_WIN_SUB_OFF() clear_bit(PORT_LED_WIN_SUB,BIT_LED_WIN_SUB)

#define PORT_LED_LOSE PORTD
#define DDR_LED_LOSE DDRD
#define BIT_LED_LOSE (1<<6)

#define LED_LOSE_ON() set_bit(PORT_LED_LOSE,BIT_LED_LOSE)
#define LED_LOSE_OFF() clear_bit(PORT_LED_LOSE,BIT_LED_LOSE)

#define PORT_LED_DRAW PORTD
#define DDR_LED_DRAW DDRD
#define BIT_LED_DRAW (1<<7)

#define LED_DRAW_ON() set_bit(PORT_LED_DRAW,BIT_LED_DRAW)
#define LED_DRAW_OFF() clear_bit(PORT_LED_DRAW,BIT_LED_DRAW)

//=====================

//룰렛
#define PORT_LED_RULLET_0 PORTB
#define DDR_LED_RULLET_0 DDRB
#define BIT_LED_RULLET_0 (1<<0)

#define LED_RULLET_0_ON() set_bit(PORT_LED_RULLET_0,BIT_LED_RULLET_0)
#define LED_RULLET_0_OFF() clear_bit(PORT_LED_RULLET_0,BIT_LED_RULLET_0)

#define PORT_LED_RULLET_1 PORTB
#define DDR_LED_RULLET_1 DDRB
#define BIT_LED_RULLET_1 (1<<1)

#define LED_RULLET_1_ON() set_bit(PORT_LED_RULLET_1,BIT_LED_RULLET_1)
#define LED_RULLET_1_OFF() clear_bit(PORT_LED_RULLET_1,BIT_LED_RULLET_1)

#define PORT_LED_RULLET_2 PORTB
#define DDR_LED_RULLET_2 DDRB
#define BIT_LED_RULLET_2 (1<<2)

#define LED_RULLET_2_ON() set_bit(PORT_LED_RULLET_2,BIT_LED_RULLET_2)
#define LED_RULLET_2_OFF() clear_bit(PORT_LED_RULLET_2,BIT_LED_RULLET_2)

#define PORT_LED_RULLET_3 PORTB
#define DDR_LED_RULLET_3 DDRB
#define BIT_LED_RULLET_3 (1<<3)

#define LED_RULLET_3_ON() set_bit(PORT_LED_RULLET_3,BIT_LED_RULLET_3)
#define LED_RULLET_3_OFF() clear_bit(PORT_LED_RULLET_3,BIT_LED_RULLET_3)

#define PORT_GIVE_COIN PORTB
#define DDR_GIVE_COIN DDRB
#define BIT_GIVE_COIN (1<<4)

#define GIVE_COIN_HIGH() set_bit(PORT_GIVE_COIN,BIT_GIVE_COIN)
#define GIVE_COIN_LOW() clear_bit(PORT_GIVE_COIN,BIT_GIVE_COIN)

//==================

#define read_pin(r,b) (r & b)
#define is_sw_pushed(r,b) (!(r & b))

//스위치
#define PORT_SW_GAWI PORTC
#define DDR_SW_GAWI DDRC
#define PIN_SW_GAWI PINC

#define BIT_SW_GAWI (1<<5)

#define is_sw_gawi_pushed() is_sw_pushed(PIN_SW_GAWI,BIT_SW_GAWI)

#define PORT_SW_BAWI PORTC
#define DDR_SW_BAWI DDRC
#define PIN_SW_BAWI PINC

#define BIT_SW_BAWI (1<<6)

#define is_sw_bawi_pushed() is_sw_pushed(PIN_SW_BAWI,BIT_SW_BAWI)


#define PORT_SW_BO PORTC
#define DDR_SW_BO DDRC
#define PIN_SW_BO PINC

#define BIT_SW_BO (1<<7)

#define is_sw_bo_pushed() is_sw_pushed(PIN_SW_BO,BIT_SW_BO)

#define PORT_SW_COIN PORTC
#define DDR_SW_COIN DDRC
#define PIN_SW_COIN PINC

#define BIT_SW_COIN (1<<7)

#define is_sw_coin_pushed() is_sw_pushed(PIN_SW_COIN,BIT_SW_COIN)

//

void setup_hardware();
void led_gawi_bawi_bo(uint8_t gbb);
uint8_t sw_gawi_bawi_bo();

#endif /* HARDWARE_H_ */