/*
 * menu.h
 *
 *  Created on: Apr 1, 2021
 *      Author: hyeok
 */

#ifndef INC_MENU_H_
#define INC_MENU_H_

/* Includes ------------------------------------------------------------------*/
#include "flash_if.h"
#include "ymodem.h"

/* Imported variables --------------------------------------------------------*/
extern uint8_t aFileName[FILE_NAME_LENGTH];

/* Private variables ---------------------------------------------------------*/
typedef  void (*pFunction)(void);

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Main_Menu(void);


#endif /* INC_MENU_H_ */
