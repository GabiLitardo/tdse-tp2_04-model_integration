/*
 * Copyright (c) 2023 Juan Manuel Cruz <jcruz@fi.uba.ar>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * @file   : board.h
 * @date   : Set 26, 2023
 * @author : Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>
 * @version	v1.0.0
 */

#ifndef BOARD_INC_BOARD_H_
#define BOARD_INC_BOARD_H_

/********************** CPP guard ********************************************/
#ifdef __cplusplus
extern "C" {
#endif

/********************** inclusions *******************************************/

/********************** macros ***********************************************/
#define NUCLEO_F103RC		(0)
#define NUCLEO_F401RE		(1)
#define NUCLEO_F446RE		(2)
#define NUCLEO_F429ZI		(3)
#define NUCLEO_F439ZI		(4)
#define NUCLEO_F413ZH		(5)
#define STM32F429I_DISCO1	(6)

#define BOARD (NUCLEO_F103RC)

/* STM32 Nucleo Boards - 64 Pins */
#if ((BOARD == NUCLEO_F103RC) || (BOARD == NUCLEO_F401RE) || (BOARD == NUCLEO_F446RE))

#define BTN_A_PIN		B1_Pin
#define BTN_A_PORT		B1_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_RESET
#define BTN_A_HOVER		GPIO_PIN_SET

#define BTN_01_PIN		GPIO_PIN_7
#define BTN_01_PORT		GPIOC
#define BTN_01_PRESSED	GPIO_PIN_RESET
#define BTN_01_HOVER	GPIO_PIN_SET

#define BTN_02_PIN		GPIO_PIN_9
#define BTN_02_PORT		GPIOA
#define BTN_02_PRESSED	GPIO_PIN_RESET
#define BTN_02_HOVER	GPIO_PIN_SET

#define BTN_03_PIN		GPIO_PIN_8
#define BTN_03_PORT		GPIOA
#define BTN_03_PRESSED	GPIO_PIN_RESET
#define BTN_03_HOVER	GPIO_PIN_SET

#define BTN_04_PIN		GPIO_PIN_10
#define BTN_04_PORT		GPIOB
#define BTN_04_PRESSED	GPIO_PIN_RESET
#define BTN_04_HOVER	GPIO_PIN_SET

#define BTN_05_PIN		GPIO_PIN_4
#define BTN_05_PORT		GPIOB
#define BTN_05_PRESSED	GPIO_PIN_RESET
#define BTN_05_HOVER	GPIO_PIN_SET

#define BTN_06_PIN		GPIO_PIN_5
#define BTN_06_PORT		GPIOB
#define BTN_06_PRESSED	GPIO_PIN_RESET
#define BTN_06_HOVER	GPIO_PIN_SET

#define LED_A_PIN		LD2_Pin
#define LED_A_PORT		LD2_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#define LED_01_PIN		GPIO_PIN_0
#define LED_01_PORT		GPIOA
#define LED_01_ON		GPIO_PIN_RESET
#define LED_01_OFF		GPIO_PIN_SET

#define LED_02_PIN		GPIO_PIN_1
#define LED_02_PORT		GPIOA
#define LED_02_ON		GPIO_PIN_RESET
#define LED_02_OFF		GPIO_PIN_SET

#endif/* STM32 Nucleo Boards - 144 Pins */

#if ((BOARD == NUCLEO_F429ZI) || (BOARD == NUCLEO_F439ZI) || (BOARD == NUCLEO_F413ZH))

#define BTN_A_PIN		USER_Btn_Pin
#define BTN_A_PORT		USER_Btn_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_SET
#define BTN_A_HOVER		GPIO_PIN_RESET

#define BTN_01_PIN		GPIO_PIN_3
#define BTN_01_PORT		GPIOA
#define BTN_01_PRESSED	GPIO_PIN_RESET
#define BTN_01_HOVER	GPIO_PIN_SET

#define BTN_02_PIN		GPIO_PIN_2
#define BTN_02_PORT		GPIOA
#define BTN_02_PRESSED	GPIO_PIN_RESET
#define BTN_02_HOVER	GPIO_PIN_SET

#define BTN_03_PIN		GPIO_PIN_10
#define BTN_03_PORT		GPIOA
#define BTN_03_PRESSED	GPIO_PIN_RESET
#define BTN_03_HOVER	GPIO_PIN_SET

#define BTN_04_PIN		GPIO_PIN_3
#define BTN_04_PORT		GPIOB
#define BTN_04_PRESSED	GPIO_PIN_RESET
#define BTN_04_HOVER	GPIO_PIN_SET

#define BTN_05_PIN		GPIO_PIN_5
#define BTN_05_PORT		GPIOB
#define BTN_05_PRESSED	GPIO_PIN_RESET
#define BTN_05_HOVER	GPIO_PIN_SET

#define BTN_06_PIN		GPIO_PIN_8
#define BTN_06_PORT		GPIOA
#define BTN_06_PRESSED	GPIO_PIN_RESET
#define BTN_06_HOVER	GPIO_PIN_SET

#define LED_A_PIN		LD1_Pin
#define LED_A_PORT		LD1_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#endif

/* STM32 Discovery Kits */
#if (BOARD == STM32F429I_DISCO1)

#define BTN_A_PIN		B1_Pin
#define BTN_A_PORT		B1_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_SET
#define BTN_A_HOVER		GPIO_PIN_RESET

#define LED_A_PIN		LD3_Pin
#define LED_A_PORT		LD3_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#endif

/********************** typedef **********************************************/

/********************** external data declaration ****************************/

/********************** external functions declaration ***********************/

/********************** End of CPP guard *************************************/
#ifdef __cplusplus
}
#endif

#endif /* BOARD_INC_BOARD_H_ */

/********************** end of file ******************************************/
