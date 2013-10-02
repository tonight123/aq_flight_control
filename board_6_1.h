/*
    This file is part of AutoQuad.

    AutoQuad is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AutoQuad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with AutoQuad.  If not, see <http://www.gnu.org/licenses/>.

    Copyright © 2011, 2012, 2013  Bill Nesbitt
*/

#ifndef _board_h
#define _board_h

#define SDIO_DMA			DMA2
#define SDIO_DMA_STREAM			DMA2_Stream3
#define SDIO_DMA_CHANNEL		DMA_Channel_4
#define SDIO_DMA_FLAG_FEIF		DMA_FLAG_FEIF3
#define SDIO_DMA_FLAG_DMEIF		DMA_FLAG_DMEIF3
#define SDIO_DMA_FLAG_TEIF		DMA_FLAG_TEIF3
#define SDIO_DMA_FLAG_HTIF		DMA_FLAG_HTIF3
#define SDIO_DMA_FLAG_TCIF		DMA_FLAG_TCIF3
#define SDIO_DMA_IRQHANDLER		DMA2_Stream3_IRQHandler
#define SDIO_DMA_IRQn			DMA2_Stream3_IRQn
#define SDIO_POWER_PORT			GPIOC
#define SDIO_POWER_PIN			GPIO_Pin_14
#define SDIO_DETECT_GPIO_PORT		GPIOC
#define SDIO_DETECT_PIN			GPIO_Pin_13
#define SDIO_DETECT_PORT_SOURCE		EXTI_PortSourceGPIOC
#define SDIO_DETECT_PIN_SOURCE		EXTI_PinSource13
#define SDIO_DETECT_IRQ			EXTI15_10_IRQn
#define SDIO_DETECT_HANDLER		EXTI15_10_IRQHandler
#define SDIO_DETECT_EXTI_LINE		EXTI_Line13
//#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x00)	// SDIO Data Transfer Frequency (24MHz max)
//#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x02)	// SDIO Data Transfer Frequency (12MHz max)
#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x04)	// SDIO Data Transfer Frequency (6MHz max)
//#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x08)	// SDIO Data Transfer Frequency (3MHz max)
//#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x10)	// SDIO Data Transfer Frequency (1.5MHz max)

enum pwmPorts {
    PWM_1 = 0,
    PWM_2,
    PWM_3,
    PWM_4,
    PWM_5,
    PWM_6,
    PWM_7,
    PWM_8,
    PWM_9,
    PWM_10,
    PWM_11,
    PWM_12,
    PWM_13,
    PWM_14,
    PWM_NUM_PORTS
};

#define PPM_PWM_CHANNEL		13	// which PWM channel to use for PPM capture

#define PWM_TIMERS  const TIM_TypeDef *pwmTimers[] = { \
    TIM1, \
    TIM1, \
    TIM1, \
    TIM1, \
    TIM4, \
    TIM4, \
    TIM4, \
    TIM4, \
    TIM9, \
    TIM9, \
    TIM2, \
    TIM2, \
    TIM10, \
    TIM11 \
};

#define	PWM_AFS	    const uint8_t pwmAFs[] = { \
    GPIO_AF_TIM1, \
    GPIO_AF_TIM1, \
    GPIO_AF_TIM1, \
    GPIO_AF_TIM1, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM9, \
    GPIO_AF_TIM9, \
    GPIO_AF_TIM2, \
    GPIO_AF_TIM2, \
    GPIO_AF_TIM10, \
    GPIO_AF_TIM11 \
};

#define PWM_PORTS   const GPIO_TypeDef *pwmPorts[] = { \
    GPIOE, \
    GPIOE, \
    GPIOE, \
    GPIOE, \
    GPIOD, \
    GPIOD, \
    GPIOD, \
    GPIOD, \
    GPIOE, \
    GPIOE, \
    GPIOB, \
    GPIOB, \
    GPIOB, \
    GPIOB \
};

#define PWM_PINS    const uint32_t pwmPins[] = { \
    GPIO_Pin_9, \
    GPIO_Pin_11, \
    GPIO_Pin_13, \
    GPIO_Pin_14, \
    GPIO_Pin_12, \
    GPIO_Pin_13, \
    GPIO_Pin_14, \
    GPIO_Pin_15, \
    GPIO_Pin_5, \
    GPIO_Pin_6, \
    GPIO_Pin_10, \
    GPIO_Pin_11, \
    GPIO_Pin_8, \
    GPIO_Pin_9 \
};

#define PWM_PINSOURCES	const uint16_t pwmPinSources[] = { \
    GPIO_PinSource9, \
    GPIO_PinSource11, \
    GPIO_PinSource13, \
    GPIO_PinSource14, \
    GPIO_PinSource12, \
    GPIO_PinSource13, \
    GPIO_PinSource14, \
    GPIO_PinSource15, \
    GPIO_PinSource5, \
    GPIO_PinSource6, \
    GPIO_PinSource10, \
    GPIO_PinSource11, \
    GPIO_PinSource8, \
    GPIO_PinSource9 \
};

#define PWM_TIMERCHANNELS   const uint8_t pwmTimerChannels[] = { \
    TIM_Channel_1, \
    TIM_Channel_2, \
    TIM_Channel_3, \
    TIM_Channel_4, \
    TIM_Channel_1, \
    TIM_Channel_2, \
    TIM_Channel_3, \
    TIM_Channel_4, \
    TIM_Channel_1, \
    TIM_Channel_2, \
    TIM_Channel_3, \
    TIM_Channel_4, \
    TIM_Channel_1, \
    TIM_Channel_1 \
};

#define PWM_BDTRS   const uint8_t pwmBDTRs[] = { \
    1, \
    1, \
    1, \
    1, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0 \
};

#define PWM_CLOCKS  const uint32_t pwmClocks[] = { \
    168000000, \
    168000000, \
    168000000, \
    168000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    168000000, \
    168000000, \
    84000000, \
    84000000, \
    168000000, \
    168000000 \
};

#define PWM_IC_IRQS  const uint8_t pwmIcIrqChannels[] = { \
    TIM1_CC_IRQn, \
    TIM1_CC_IRQn, \
    TIM1_CC_IRQn, \
    TIM1_CC_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM1_BRK_TIM9_IRQn, \
    TIM1_BRK_TIM9_IRQn, \
    TIM2_IRQn, \
    TIM2_IRQn, \
    TIM1_UP_TIM10_IRQn, \
    TIM1_TRG_COM_TIM11_IRQn \
};

#define PWM_IRQ_TIM1_CH1	0
#define PWM_IRQ_TIM1_CH2	1
#define PWM_IRQ_TIM1_CH3	2
#define PWM_IRQ_TIM1_CH4	3
#define PWM_IRQ_TIM4_CH1	4
#define PWM_IRQ_TIM4_CH2	5
#define PWM_IRQ_TIM4_CH3	6
#define PWM_IRQ_TIM4_CH4	7
#define PWM_IRQ_TIM9_CH1	8
#define PWM_IRQ_TIM9_CH2	9
#define PWM_IRQ_TIM2_CH3	10
#define PWM_IRQ_TIM2_CH4	11
#define PWM_IRQ_TIM10_CH1	12
#define PWM_IRQ_TIM11_CH1	13


#define RC1_UART		UART4

#define SUPERVISOR_READY_PORT	GPIOA
#define SUPERVISOR_READY_PIN	GPIO_Pin_8
#define SUPERVISOR_DEBUG_PORT	GPIOD
#define SUPERVISOR_DEBUG_PIN	GPIO_Pin_11

#define GPS_LED_PORT		GPIOE
#define GPS_LED_PIN		GPIO_Pin_0
#define GPS_USART		USART3

#define GPS_TP_PORT		GPIOE
#define GPS_TP_PIN		GPIO_Pin_1
#define GPS_TP_PORT_SOURCE	EXTI_PortSourceGPIOE
#define GPS_TP_PIN_SOURCE	EXTI_PinSource1
#define GPS_TP_IRQ		EXTI1_IRQn
#define GPS_TP_HANDLER		EXTI1_IRQHandler
#define GPS_TP_EXTI_LINE	EXTI_Line1


#define ADC_PRESSURE_3V3

#define ADC_DMA_STREAM	    DMA2_Stream4
#define ADC_DMA_CHANNEL	    DMA_Channel_0
#define ADC_DMA_FLAGS	    (DMA_IT_TEIF4 | DMA_IT_DMEIF4 | DMA_IT_FEIF4 | DMA_IT_TCIF4 | DMA_IT_HTIF4)
#define ADC_DMA_TC_FLAG	    DMA_IT_TCIF4
#define ADC_DMA_ISR	    DMA2->HISR
#define ADC_DMA_CR	    DMA2->HIFCR
#define ADC_DMA_IRQ	    DMA2_Stream4_IRQn
#define ADC_DMA_HANDLER	    DMA2_Stream4_IRQHandler


#define CANx			    CAN1
#define CAN_CLK			    RCC_APB1Periph_CAN1
#define CAN_RX_PIN		    GPIO_Pin_0
#define CAN_TX_PIN		    GPIO_Pin_1
#define CAN_GPIO_PORT		    GPIOD
#define CAN_AF_PORT		    GPIO_AF_CAN1
#define CAN_RX_SOURCE		    GPIO_PinSource0
#define CAN_TX_SOURCE		    GPIO_PinSource1

//#define SPI_SPI1_CLOCK		    RCC_APB2Periph_SPI1
//#define SPI_SPI1_AF		    GPIO_AF_SPI1
//#define SPI_SPI1_SCK_PORT	    GPIOA
//#define SPI_SPI1_MISO_PORT	    GPIOA
//#define SPI_SPI1_MOSI_PORT	    GPIOA
//#define SPI_SPI1_SCK_PIN	    GPIO_Pin_5
//#define SPI_SPI1_MISO_PIN	    GPIO_Pin_6
//#define SPI_SPI1_MOSI_PIN	    GPIO_Pin_7
//#define SPI_SPI1_SCK_SOURCE	    GPIO_PinSource5
//#define SPI_SPI1_MISO_SOURCE	    GPIO_PinSource6
//#define SPI_SPI1_MOSI_SOURCE	    GPIO_PinSource7
//
//#define SPI_SPI1_DMA_RX		    DMA2_Stream0
//#define SPI_SPI1_DMA_RX_CHANNEL	    DMA_Channel_3
//#define SPI_SPI1_DMA_RX_FLAGS	    (DMA_IT_TEIF0 | DMA_IT_DMEIF0 | DMA_IT_FEIF0 | DMA_IT_TCIF0 | DMA_IT_HTIF0)
//#define SPI_SPI1_DMA_RX_IRQ	    DMA2_Stream0_IRQn
//#define SPI_SPI1_DMA_RX_HANDLER	    DMA2_Stream0_IRQHandler
//
//#define SPI_SPI1_DMA_TX		    DMA2_Stream3
//#define SPI_SPI1_DMA_TX_CHANNEL	    DMA_Channel_3
//#define SPI_SPI1_DMA_TX_FLAGS	    (DMA_IT_TEIF3 | DMA_IT_DMEIF3 | DMA_IT_FEIF3 | DMA_IT_TCIF3 | DMA_IT_HTIF3)

#define SPI_SPI2_CLOCK		    RCC_APB1Periph_SPI2
#define SPI_SPI2_AF		    GPIO_AF_SPI2
#define SPI_SPI2_SCK_PORT	    GPIOB
#define SPI_SPI2_MISO_PORT	    GPIOB
#define SPI_SPI2_MOSI_PORT	    GPIOB
#define SPI_SPI2_SCK_PIN	    GPIO_Pin_13
#define SPI_SPI2_MISO_PIN	    GPIO_Pin_14
#define SPI_SPI2_MOSI_PIN	    GPIO_Pin_15
#define SPI_SPI2_SCK_SOURCE	    GPIO_PinSource13
#define SPI_SPI2_MISO_SOURCE	    GPIO_PinSource14
#define SPI_SPI2_MOSI_SOURCE	    GPIO_PinSource15

#define SPI_SPI2_DMA_RX		    DMA1_Stream3
#define SPI_SPI2_DMA_RX_CHANNEL	    DMA_Channel_0
#define SPI_SPI2_DMA_RX_FLAGS	    (DMA_IT_TEIF3 | DMA_IT_DMEIF3 | DMA_IT_FEIF3 | DMA_IT_TCIF3 | DMA_IT_HTIF3)
#define SPI_SPI2_DMA_RX_IRQ	    DMA1_Stream3_IRQn
#define SPI_SPI2_DMA_RX_HANDLER	    DMA1_Stream3_IRQHandler

#define SPI_SPI2_DMA_TX		    DMA1_Stream4
#define SPI_SPI2_DMA_TX_CHANNEL	    DMA_Channel_0
#define SPI_SPI2_DMA_TX_FLAGS	    (DMA_IT_TEIF4 | DMA_IT_DMEIF4 | DMA_IT_FEIF4 | DMA_IT_TCIF4 | DMA_IT_HTIF4)


#define DIMU_EEPROM_SPI		    SPI2
#define DIMU_EEPROM_CS_PORT	    GPIOB
#define DIMU_EEPROM_CS_PIN	    GPIO_Pin_12

#define DIMU_HMC5983_SPI	    SPI2
#define DIMU_HMC5983_CS_PORT	    GPIOD
#define DIMU_HMC5983_CS_PIN	    GPIO_Pin_10
#define DIMU_HMC5983_INT_PORT	    GPIOE
#define DIMU_HMC5983_INT_PIN	    GPIO_Pin_2
#define DIMU_HMC5983_INT_EXTI_PORT  EXTI_PortSourceGPIOE
#define DIMU_HMC5983_INT_EXTI_PIN   EXTI_PinSource2
#define DIMU_HMC5983_INT_EXTI_LINE  EXTI_Line2
#define DIMU_HMC5983_INT_EXTI_IRQ   EXTI2_IRQn
#define DIMU_HMC5983_INT_ISR	    EXTI2_IRQHandler

#define DIMU_MS5611_CS_PORT	    GPIOE
#define DIMU_MS5611_CS_PIN	    GPIO_Pin_7
#define DIMU_MS5611_SPI		    SPI2

#define DIMU_MPU6000_SPI	    SPI2
#define DIMU_MPU6000_CS_PORT	    GPIOD
#define DIMU_MPU6000_CS_PIN	    GPIO_Pin_4

#define DIMU_MPU6000_INT_PORT	    GPIOD
#define DIMU_MPU6000_INT_PIN	    GPIO_Pin_6
#define DIMU_MPU6000_INT_EXTI_PORT  EXTI_PortSourceGPIOD
#define DIMU_MPU6000_INT_EXTI_PIN   EXTI_PinSource6
#define DIMU_MPU6000_INT_EXTI_LINE  EXTI_Line6
#define DIMU_MPU6000_INT_EXTI_IRQ   EXTI9_5_IRQn
#define DIMU_MPU6000_INT_ISR	    EXTI9_5_IRQHandler


#define COMM_PORT1		    USART1	    // front FTDI interface
#define COMM_PORT2		    USART2	    // expansion header


#define SERIAL_UART1_PORT	GPIOA
#define SERIAL_UART1_RX_PIN	GPIO_Pin_10
#define SERIAL_UART1_TX_PIN	GPIO_Pin_9
#define SERIAL_UART1_CTS_PIN	GPIO_Pin_11
#define SERIAL_UART1_RTS_PIN	GPIO_Pin_12
#define SERIAL_UART1_RX_SOURCE	GPIO_PinSource10
#define SERIAL_UART1_TX_SOURCE	GPIO_PinSource9
#define SERIAL_UART1_CTS_SOURCE	GPIO_PinSource11
#define SERIAL_UART1_RTS_SOURCE	GPIO_PinSource12
#define SERIAL_UART1_RX_DMA_ST	DMA2_Stream5
#define SERIAL_UART1_TX_DMA_ST	DMA2_Stream7
#define SERIAL_UART1_RX_DMA_CH	DMA_Channel_4
#define SERIAL_UART1_TX_DMA_CH	DMA_Channel_4
#define SERIAL_UART1_TX_DMA_IT	DMA2_Stream7_IRQHandler
#define SERIAL_UART1_TX_IRQn	DMA2_Stream7_IRQn
#define SERIAL_UART1_RX_TC_FLAG	DMA_FLAG_TCIF5
#define SERIAL_UART1_RX_HT_FLAG	DMA_FLAG_HTIF5
#define SERIAL_UART1_RX_TE_FLAG	DMA_FLAG_TEIF5
#define SERIAL_UART1_RX_DM_FLAG	DMA_FLAG_DMEIF5
#define SERIAL_UART1_RX_FE_FLAG	DMA_FLAG_FEIF5
#define SERIAL_UART1_TX_TC_FLAG	DMA_FLAG_TCIF7
#define SERIAL_UART1_TX_HT_FLAG	DMA_FLAG_HTIF7
#define SERIAL_UART1_TX_TE_FLAG	DMA_FLAG_TEIF7
#define SERIAL_UART1_TX_DM_FLAG	DMA_FLAG_DMEIF7
#define SERIAL_UART1_TX_FE_FLAG	DMA_FLAG_FEIF7

#define SERIAL_UART2_PORT	GPIOD
#define SERIAL_UART2_RX_PIN	GPIO_Pin_6
#define SERIAL_UART2_TX_PIN	GPIO_Pin_5
#define SERIAL_UART2_CTS_PIN	GPIO_Pin_3
#define SERIAL_UART2_RTS_PIN	GPIO_Pin_4
#define SERIAL_UART2_RX_SOURCE	GPIO_PinSource6
#define SERIAL_UART2_TX_SOURCE	GPIO_PinSource5
#define SERIAL_UART2_CTS_SOURCE	GPIO_PinSource3
#define SERIAL_UART2_RTS_SOURCE	GPIO_PinSource4
#define SERIAL_UART2_RX_DMA_ST	DMA1_Stream5
#define SERIAL_UART2_TX_DMA_ST	DMA1_Stream6
#define SERIAL_UART2_RX_DMA_CH	DMA_Channel_4
#define SERIAL_UART2_TX_DMA_CH	DMA_Channel_4
#define SERIAL_UART2_TX_DMA_IT	DMA1_Stream6_IRQHandler
#define SERIAL_UART2_TX_IRQn	DMA1_Stream6_IRQn
#define SERIAL_UART2_RX_TC_FLAG	DMA_FLAG_TCIF5
#define SERIAL_UART2_RX_HT_FLAG	DMA_FLAG_HTIF5
#define SERIAL_UART2_RX_TE_FLAG	DMA_FLAG_TEIF5
#define SERIAL_UART2_RX_DM_FLAG	DMA_FLAG_DMEIF5
#define SERIAL_UART2_RX_FE_FLAG	DMA_FLAG_FEIF5
#define SERIAL_UART2_TX_TC_FLAG	DMA_FLAG_TCIF6
#define SERIAL_UART2_TX_HT_FLAG	DMA_FLAG_HTIF6
#define SERIAL_UART2_TX_TE_FLAG	DMA_FLAG_TEIF6
#define SERIAL_UART2_TX_DM_FLAG	DMA_FLAG_DMEIF6
#define SERIAL_UART2_TX_FE_FLAG	DMA_FLAG_FEIF6

#define SERIAL_UART3_PORT	GPIOD
#define SERIAL_UART3_RX_PIN	GPIO_Pin_9
#define SERIAL_UART3_TX_PIN	GPIO_Pin_8
//#define SERIAL_UART3_CTS_PIN	GPIO_Pin_11
//#define SERIAL_UART3_RTS_PIN	GPIO_Pin_12
#define SERIAL_UART3_RX_SOURCE	GPIO_PinSource9
#define SERIAL_UART3_TX_SOURCE	GPIO_PinSource8
//#define SERIAL_UART3_CTS_SOURCE	GPIO_PinSource11
//#define SERIAL_UART3_RTS_SOURCE	GPIO_PinSource12
#define SERIAL_UART3_RX_DMA_ST	DMA1_Stream1
//#define SERIAL_UART3_TX_DMA_ST	DMA1_Stream3
#define SERIAL_UART3_RX_DMA_CH	DMA_Channel_4
//#define SERIAL_UART3_TX_DMA_CH	DMA_Channel_4
//#define SERIAL_UART3_TX_DMA_IT	DMA1_Stream3_IRQHandler
//#define SERIAL_UART3_TX_IRQn	DMA1_Stream3_IRQn
#define SERIAL_UART3_RX_TC_FLAG	DMA_FLAG_TCIF1
#define SERIAL_UART3_RX_HT_FLAG	DMA_FLAG_HTIF1
#define SERIAL_UART3_RX_TE_FLAG	DMA_FLAG_TEIF1
#define SERIAL_UART3_RX_DM_FLAG	DMA_FLAG_DMEIF1
#define SERIAL_UART3_RX_FE_FLAG	DMA_FLAG_FEIF1
//#define SERIAL_UART3_TX_TC_FLAG	DMA_FLAG_TCIF3
//#define SERIAL_UART3_TX_HT_FLAG	DMA_FLAG_HTIF3
//#define SERIAL_UART3_TX_TE_FLAG	DMA_FLAG_TEIF3
//#define SERIAL_UART3_TX_DM_FLAG	DMA_FLAG_DMEIF3
//#define SERIAL_UART3_TX_FE_FLAG	DMA_FLAG_FEIF3

#define SERIAL_UART4_PORT	GPIOA
#define SERIAL_UART4_RX_PIN	GPIO_Pin_1
//#define SERIAL_UART4_TX_PIN	GPIO_Pin_0
#define SERIAL_UART4_RX_SOURCE	GPIO_PinSource1
//#define SERIAL_UART4_TX_SOURCE	GPIO_PinSource0
#define SERIAL_UART4_RX_DMA_ST	DMA1_Stream2
//#define SERIAL_UART4_TX_DMA_ST
#define SERIAL_UART4_RX_DMA_CH	DMA_Channel_4
//#define SERIAL_UART4_TX_DMA_CH
//#define SERIAL_UART4_TX_DMA_IT
//#define SERIAL_UART4_TX_IRQn
#define SERIAL_UART4_RX_TC_FLAG	DMA_FLAG_TCIF2
#define SERIAL_UART4_RX_HT_FLAG	DMA_FLAG_HTIF2
#define SERIAL_UART4_RX_TE_FLAG	DMA_FLAG_TEIF2
#define SERIAL_UART4_RX_DM_FLAG	DMA_FLAG_DMEIF2
#define SERIAL_UART4_RX_FE_FLAG	DMA_FLAG_FEIF2
//#define SERIAL_UART4_TX_TC_FLAG
//#define SERIAL_UART4_TX_HT_FLAG
//#define SERIAL_UART4_TX_TE_FLAG
//#define SERIAL_UART4_TX_DM_FLAG
//#define SERIAL_UART4_TX_FE_FLAG

#define SERIAL_UART5_PORT	GPIOD
//#define SERIAL_UART5_TX_PIN	GPIO_Pin_10
#define SERIAL_UART5_RX_PIN	GPIO_Pin_2
//#define SERIAL_UART5_TX_SOURCE	GPIO_PinSource10
#define SERIAL_UART5_RX_SOURCE	GPIO_PinSource2
#define SERIAL_UART5_RX_DMA_ST	DMA1_Stream0
//#define SERIAL_UART5_TX_DMA_ST	DMA1_Stream7
#define SERIAL_UART5_RX_DMA_CH	DMA_Channel_4
//#define SERIAL_UART5_TX_DMA_CH	DMA_Channel_4
//#define SERIAL_UART5_TX_DMA_IT	DMA1_Stream7_IRQHandler
//#define SERIAL_UART5_TX_IRQn		DMA1_Stream7_IRQn
#define SERIAL_UART5_RX_TC_FLAG	DMA_FLAG_TCIF0
#define SERIAL_UART5_RX_HT_FLAG	DMA_FLAG_HTIF0
#define SERIAL_UART5_RX_TE_FLAG	DMA_FLAG_TEIF0
#define SERIAL_UART5_RX_DM_FLAG	DMA_FLAG_DMEIF0
#define SERIAL_UART5_RX_FE_FLAG	DMA_FLAG_FEIF0
//#define SERIAL_UART5_TX_TC_FLAG	DMA_FLAG_TCIF7
//#define SERIAL_UART5_TX_HT_FLAG	DMA_FLAG_HTIF7
//#define SERIAL_UART5_TX_TE_FLAG	DMA_FLAG_TEIF7
//#define SERIAL_UART5_TX_DM_FLAG	DMA_FLAG_DMEIF7
//#define SERIAL_UART5_TX_FE_FLAG	DMA_FLAG_FEIF7

#define SERIAL_UART6_PORT	GPIOC
#define SERIAL_UART6_RX_PIN	GPIO_Pin_7
#define SERIAL_UART6_TX_PIN	GPIO_Pin_6
//#define SERIAL_UART6_CTS_PIN	GPIO_Pin_11
//#define SERIAL_UART6_RTS_PIN	GPIO_Pin_12
#define SERIAL_UART6_RX_SOURCE	GPIO_PinSource7
#define SERIAL_UART6_TX_SOURCE	GPIO_PinSource6
//#define SERIAL_UART6_CTS_SOURCE	GPIO_PinSource11
//#define SERIAL_UART6_RTS_SOURCE	GPIO_PinSource12
#define SERIAL_UART6_RX_DMA_ST	DMA2_Stream1
#define SERIAL_UART6_TX_DMA_ST	DMA2_Stream6
#define SERIAL_UART6_RX_DMA_CH	DMA_Channel_5
#define SERIAL_UART6_TX_DMA_CH	DMA_Channel_5
#define SERIAL_UART6_TX_DMA_IT	DMA2_Stream6_IRQHandler
#define SERIAL_UART6_TX_IRQn	DMA2_Stream6_IRQn
#define SERIAL_UART6_RX_TC_FLAG	DMA_FLAG_TCIF1
#define SERIAL_UART6_RX_HT_FLAG	DMA_FLAG_HTIF1
#define SERIAL_UART6_RX_TE_FLAG	DMA_FLAG_TEIF1
#define SERIAL_UART6_RX_DM_FLAG	DMA_FLAG_DMEIF1
#define SERIAL_UART6_RX_FE_FLAG	DMA_FLAG_FEIF1
#define SERIAL_UART6_TX_TC_FLAG	DMA_FLAG_TCIF6
#define SERIAL_UART6_TX_HT_FLAG	DMA_FLAG_HTIF6
#define SERIAL_UART6_TX_TE_FLAG	DMA_FLAG_TEIF6
#define SERIAL_UART6_TX_DM_FLAG	DMA_FLAG_DMEIF6
#define SERIAL_UART6_TX_FE_FLAG	DMA_FLAG_FEIF6


#define UKF_VEL_Q		+7.6020e-02	// +0.076019661680	 0.000109304521 -0.001443424436
#define UKF_VEL_ALT_Q		+1.4149e-01	// +0.141489724652	 0.000109419473 +0.000987597731
#define UKF_POS_Q		+6.0490e+03	// +6048.951523179588	 0.000109199532 +97.58772834123110
#define UKF_POS_ALT_Q		+4.5576e+03	// +4557.622475819297	 0.000109580650 +19.44625975731340
#define UKF_ACC_BIAS_Q		+9.3722e-04	// +0.000937220476	 0.000109347614 +0.000009865862
#define UKF_GYO_BIAS_Q		+4.6872e-02	// +0.046871534288	 0.000109380732 -0.000123894440
#define UKF_QUAT_Q		+7.3021e-04	// +0.000730213283	 0.000109472899 +0.000000995669
#define UKF_PRES_ALT_Q		+6.5172e+01	// +65.171935456104	 0.000109418082 -0.2151891180844
#define UKF_ACC_BIAS_V		+2.7535e-07	// +0.000000275353	 0.000109561088 -0.000000004212
#define UKF_GYO_BIAS_V		+8.2738e-07	// +0.000000827379	 0.000107923369 +0.000000009107
#define UKF_RATE_V		+6.0568e-05	// +0.000060568461	 0.000109458065 +0.000000498081
#define UKF_PRES_ALT_V		+1.0204e-04	// +0.000102039667	 0.000109254406 -0.000002050090
#define UKF_POS_V		+6.4505e-08	// +0.000000064505	 0.000109587486 -0.000000000240
#define UKF_VEL_V		+1.0980e-07	// +0.000000109802	 0.000109537353 -0.000000000134
#define UKF_ALT_POS_V		+5.3821e-09	// +0.000000005382	 0.000109525531 +0.000000000093
#define UKF_ALT_VEL_V		+2.8103e-07	// +0.000000281035	 0.000109279082 +0.000000000639
#define UKF_GPS_POS_N		+1.7620e-05	// +0.000017619672	 0.000109467204 -0.000000022679
#define UKF_GPS_POS_M_N		+4.7413e-05	// +0.000047413187	 0.000108906551 -0.000000419440
#define UKF_GPS_ALT_N		+7.6558e-05	// +0.000076558177	 0.000109472033 -0.000000162714
#define UKF_GPS_ALT_M_N		+3.8535e-05	// +0.000038534766	 0.000109525552 +0.000000007101
#define UKF_GPS_VEL_N		+4.6256e-02	// +0.046255979499	 0.000109061365 +0.000395208418
#define UKF_GPS_VEL_M_N		+1.2336e-02	// +0.012336395925	 0.000109431436 +0.000140398236
#define UKF_GPS_VD_N		+3.7820e+00	// +3.782028700864	 0.000109323731 -0.028830318912
#define UKF_GPS_VD_M_N		+1.5841e-02	// +0.015840936058	 0.000109475273 -0.000030160915
#define UKF_ALT_N		+1.7077e-01	// +0.170768080733	 0.000109571562 +0.000084225765
#define UKF_ACC_N		+9.5468e-05	// +0.000095468045	 0.000109331710 -0.000000932407
#define UKF_DIST_N		+1.8705e-02	// +0.018704747883	 0.000109457024 +0.000038618360
#define UKF_MAG_N		+3.8226e-01	// +0.382258731690	 0.000109407461 +0.002851611558
#define UKF_POS_DELAY		+2.0574e+03	// +2057.421963899194	 0.001097611925 -48.37809534324900
#define UKF_VEL_DELAY		-1.0373e+05	// -103727.997010331557	 0.000109494449 -293.522967971236500


#define HAS_AIMU

#define ANALOG_VIN_RTOP            4.7f   // first run beta boards were 4.7K, second run are 8.45K
#define ANALOG_VIN_RBOT            1.33f

#endif
