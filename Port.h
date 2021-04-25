 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: ALMALKY
 * 
 * Date : 3/8/2021
 * 
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

/* Id for the company in the AUTOSAR
 * for example Mohamed Tarek's ID = 1000 :) */
#define PORT_VENDOR_ID    (1000U)

/* Dio Module Id */
#define PORT_MODULE_ID    (120U)

/* Dio Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)


/*
 * Macros for PORT Status
 */
#define PORT_DIR_EN_CHANGE                (1U)
#define PORT_DIR_DIS_CHANGE               (0U)

#define PORT_MODE_DIS_CHANGE               (0U)
#define PORT_MODE_EN_CHANGE                (1U)
   


/* PORT Configured Port ID's  */ 

#define PORTA              (uint8)0
#define PORTB              (uint8)1
#define PORTC              (uint8)2
#define PORTD              (uint8)3
#define PORTE              (uint8)4
#define PORTF              (uint8)5


/* PORT Configured Port PIN */ 

#define PIN0 				(Port_PinType)0
#define PIN1 				(Port_PinType)1
#define PIN2 				(Port_PinType)2
#define PIN3 				(Port_PinType)3
#define PIN4 				(Port_PinType)4
#define PIN5 				(Port_PinType)5
#define PIN6 				(Port_PinType)6
#define PIN7 				(Port_PinType)7
#define PIN8 				(Port_PinType)8
#define PIN9 				(Port_PinType)9
#define PIN10				(Port_PinType)10
#define PIN11				(Port_PinType)11
#define PIN12				(Port_PinType)12
#define PIN13				(Port_PinType)13
#define PIN14				(Port_PinType)14
#define PIN15				(Port_PinType)15
  

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and PORT Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* PORT Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between PORT_Cfg.h and PORT.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PORT_Cfg.h does not match the expected version"
#endif

/* Software Version checking between PORT_Cfg.h and PORT.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PORT_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"


   

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/ 

/* Service ID for PORT Init */
#define PORT_INIT_SID                       (uint8)0x00
   
/* Service ID for Set PIN Direction */   
#define PORT_SETPINDIRECTION_SID            (uint8)0x01
   
/* Service ID for Set PORT Direction */ 
#define PORT_REFRESHPORTDIRECTION_SID       (uint8)0x02
    
/* Service ID for PORT GetVersionInfo */ 
#define PORT_GETVERSIONINFO_SID             (uint8)0x03
 
/* Service ID for Set PORT Mode  */  
#define PORT_SETPINMODE_SID                 (uint8)0x04        
   

   
/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
 
/* DET code to report Invalid Port Pin ID requested  */
#define PORT_E_PARAM_PIN                           (uint8)0x0A 
   
   
/* DET code to report Port Pin not configured as changeable */ 
#define PORT_E_DIRECTION_UNCHANGEABLE              (uint8)0x0B
                                                          
                                                          
 /* DET code to report API Port_Init service  */          
#define PORT_E_PARAM_CONFIG                        (uint8)0x0C
                                                          
                                                          
 /* DET code to report INVALID MODE */           
#define PORT_E_PARAM_INVALID_MODE                   (uint8)0x0D
                                                          
                                                          
/* DET code to report mode is unchangeable  */            
#define PORT_E_MODE_UNCHANGEABLE                    (uint8)0x0E
                                                          
                                                          
/* DET code to report without module initialization  */   
#define PORT_E_UNINIT                               (uint8)0x0F 
                                                          
                                                          
/* DET code to report APIs called with a Null Pointer */   
#define PORT_E_PARAM_POINTER                         (uint8)0x10  
   
   
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Type definition for  Port_PinType used by the PORT APIs */
typedef  uint32 Port_PinType;  




/* Enum definition for Port_ConfigType used by the PORT APIs */
typedef enum { 
  
  PORT_PIN_IN,
  PORT_PIN_OUT,
 
}Port_PinDirectionType;  
  
/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    PULL_UP,
    PULL_DOWN ,
    NO_PULL_UP_DOWN, 
}Port_InternalResistor;


/* Type definition for Port_PinModeType  used by the PORT APIs */
typedef uint8  Port_PinModeType ;  



/* Struct definition for Port_ConfigType used by the PORT APIs */
 typedef  struct {
   Port_PinType PORT_ID ; 
   Port_PinType PORT_PIN ; 
   Port_PinDirectionType PORT_DIRECTION; 
   Port_InternalResistor PORT_Resistor; 
   uint8 Level ;
   uint8 Init_value ; 
   Port_PinModeType PORT_MODE ;   
   uint8 MODE_CHANGEABLE ;
   uint8 DIRECTION_CHANGEABLE; //Can change Pin Direction 
}PIN_ConfigType; 


/* Data Structure required for initializing the Dio Driver */
typedef struct PORT_Config
{
	PIN_ConfigType PORT_Channels[PORT_CONFIGURED_PIN];
}Port_ConfigType;



/*******************************************************************************
 *                      Function Prototypes                                    *
*******************************************************************************/
/* Function for PORT Initialization API */

void Port_Init(const Port_ConfigType * ConfigPtr);




#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
/* Function for PORT Port_SetPinDirection API */
void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction);
#endif 



/* Function for PORT RefreshPortDirection API */ 
void Port_RefreshPortDirection(void);


/* Enable / Disable the use of the function */
#if (PORT_SET_PIN_MODE_API == STD_ON)
/* Function for PORT Port_SetPinMode API */
void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode);
#endif




/* Function for PORT Get Version Info API */
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType * versioninfo);
#endif  

   

/* Extern PB structures to be used by port and other modules */
extern const Port_ConfigType Port_Configuration;


#endif /* PORT_H */

