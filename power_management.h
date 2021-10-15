/*
 * power_management.h
 *
 *  Created on: Oct 13, 2021
 *      Author: saranyan
 */

#ifndef POWER_MANAGEMENT_H_
#define POWER_MANAGEMENT_H_

#define ENABLE_ADC		CLEAR_BIT(PRR, PRADC)
#define ENABLE_USART0	CLEAR_BIT(PRR, PRUSART0)
#define ENABLE_SPI		CLEAR_BIT(PRR, PRSPI)
#define ENABLE_TIMER0	CLEAR_BIT(PRR, PRTIM0)
#define ENABLE_TIMER1	CLEAR_BIT(PRR, PRTIM1)
#define ENABLE_TIMER2	CLEAR_BIT(PRR, PRTIM2)
#define ENABLE_I2C		CLEAR_BIT(PRR, PRTWI)

#define DISABLE_ADC		SET_BIT(PRR, PRADC)
#define DISABLE_USART0	SET_BIT(PRR, PRUSART0)
#define DISABLE_SPI		SET_BIT(PRR, PRSPI)
#define DISABLE_TIMER0	SET_BIT(PRR, PRTIM0)
#define DISABLE_TIMER1	SET_BIT(PRR, PRTIM1)
#define DISABLE_TIMER2	SET_BIT(PRR, PRTIM2)
#define DISABLE_I2C		SET_BIT(PRR, PRTWI)

#endif /* POWER_MANAGEMENT_H_ */
