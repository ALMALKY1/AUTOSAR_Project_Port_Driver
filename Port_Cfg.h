 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: pre compile file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: ALMALKY
 * 
 * Date : 3/8/2021
 * 
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)


/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                                   (STD_ON)
      
#define PORT_SET_PIN_MODE_API                                   (STD_ON)
            
/* Pre-compile option for Version Info API */                   
#define PORT_VERSION_INFO_API                                   (STD_OFF)


/* Pre-compile option for SET_Direction Info API */
        
#define PORT_SET_PIN_DIRECTION_API                              (STD_ON)
      
/* Pre-compile option for SET_Mode Info API */                   
        
#define PORT_SET_PIN_MODE_API                                   (STD_ON)   
   

/* Macros to define whether pin direction can be changed
   during runtime or not */
#define PORT_PIN_DIR_NOT_CHANGEABLE                                    (uint8)(0x00U)
#define PORT_PIN_DIR_CHANGEABLE                                        (uint8)(0x01U)


/* Macros to define whether pin Mode can be changed
   during runtime or not */
#define MODE_EN_CHANGE                                                 (uint8)(0x01U)
#define MODE_DIS_CHANGE                                                (uint8)(0x00U)
     


/* Macros to define whether pin Mode can be changed
   during runtime or not */
#define DIRECTION_EN_CHANGE                                                 (uint8)(0x01U)
#define DIRECTION_DIS_CHANGE                                                (uint8)(0x00U)

     
     
     
     
#define PORT_LEVEL_Digital                                             (uint8)(0x00U)
#define PORT_LEVEL_Analog                                              (uint8)(0x01U)
                                                                       
                                                                       
/* Number of the configured PORT PINS */                               
#define PORT_CONFIGURED_PIN                                            (uint8)(43)
   
#define PORT_DEFAULT_MODE_GPIO                                         (uint8)(0x01U)    

#endif /* PORT_CFG_H */