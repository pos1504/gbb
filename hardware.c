#include "hardware.h"
#include "define.h"

void setup_hardware()
{
	LED_HAND_23_FOLD_OFF();
	set_bit(DDR_LED_HAND_23_FOLD,BIT_LED_HAND_23_FOLD);
	
	LED_HAND_145_FOLD_OFF();
	set_bit(DDR_LED_HAND_145_FOLD,BIT_LED_HAND_145_FOLD);
	
	LED_HAND_23_UNFOLD_OFF();
	set_bit(DDR_LED_HAND_23_UNFOLD,BIT_LED_HAND_23_UNFOLD);
	
	LED_HAND_145_UNFOLD_OFF();
	set_bit(DDR_LED_HAND_145_UNFOLD,BIT_LED_HAND_145_UNFOLD);
	
	//
	
	clear_bit(DDR_SW_GAWI,PIN_SW_GAWI);
	set_bit(PORT_SW_GAWI,BIT_SW_GAWI);//내부 풀업
	
	clear_bit(DDR_SW_BAWI,PIN_SW_BAWI);
	set_bit(PORT_SW_BAWI,BIT_SW_BAWI);//내부 풀업
	
	clear_bit(DDR_SW_BO,PIN_SW_BO);
	set_bit(PORT_SW_BO,BIT_SW_BO);//내부 풀업
	
	clear_bit(DDR_SW_COIN,PIN_SW_COIN);
	set_bit(PORT_SW_COIN,BIT_SW_COIN);//내부 풀업
}


void led_gawi_bawi_bo(uint8_t gbb)
{
	//손가락 끄기
	LED_HAND_23_FOLD_OFF();
	LED_HAND_23_UNFOLD_OFF();
	LED_HAND_145_FOLD_OFF();
	LED_HAND_145_UNFOLD_OFF();
	
	if(gbb==GAWI)
	{
		LED_HAND_23_UNFOLD_ON();
		LED_HAND_145_FOLD_ON();
	
	}
	else if(gbb==BAWI)
	{
		LED_HAND_23_FOLD_ON();
		LED_HAND_145_FOLD_ON();
	}
	else if(gbb==BO)
	{
		LED_HAND_23_UNFOLD_ON();
		LED_HAND_145_UNFOLD_ON();
	}
}

uint8_t sw_gawi_bawi_bo()
{
	if(is_sw_gawi_pushed())
		return GAWI;
	else if(is_sw_bawi_pushed())
		return BAWI;
	else if(is_sw_bo_pushed())
		return BO;
		
	return NONE;
}
