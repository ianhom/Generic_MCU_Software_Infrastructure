/****************************************************************************
*  Copyright 2017 Gorgon Meducer (Email:embedded_zhuoran@hotmail.com)       *
*                                                                           *
*  Licensed under the Apache License, Version 2.0 (the "License");          *
*  you may not use this file except in compliance with the License.         *
*  You may obtain a copy of the License at                                  *
*                                                                           *
*     http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                           *
*  Unless required by applicable law or agreed to in writing, software      *
*  distributed under the License is distributed on an "AS IS" BASIS,        *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
*  See the License for the specific language governing permissions and      *
*  limitations under the License.                                           *
*                                                                           *
****************************************************************************/

/*============================ INCLUDES ======================================*/
#include ".\app_cfg.h"

/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/

//! \brief random seed
static uint16_t s_hwRandomSeed = 0xAA55;

/*============================ PROTOTYPES ====================================*/
/*============================ IMPLEMENTATION ================================*/

/*! \note set random generator seed 
 *  \param hwSeed random seed
 *  \return none
 */
void set_random_seed( uint16_t hwSeed )
{
    s_hwRandomSeed ^= hwSeed;
}


/*! \note reset software random generator
 *! \param none
 *! \return none
 */
void reset_random( void )
{
    s_hwRandomSeed = 0xAA55;
}

/*! \note get a random integer
 *  \param none
 *  \return random integer value
 */
uint16_t get_random_u16( void )
{
    s_hwRandomSeed = 22695477ul * s_hwRandomSeed + 1;
    
    return s_hwRandomSeed;
}

/* EOF */
