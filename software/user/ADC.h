/*****************************************************************************
* Project:            PLUGALL
* Target:             
* Type:               ADC controlls
* Version:            1.0
* Author:             Noah Huetter
* Creation-Date:      07.2014
******************************************************************************
* Modification History:
* 
* [1.0]     07.2014   NHU   first release
*
*****************************************************************************/  
#ifndef __ADC_H
#define __ADC_H




/*****************************************************************************
* Defines
*****************************************************************************/ 



/*****************************************************************************
* Public Functions
*****************************************************************************/ 
void ADC_fInit (void);

void ADC_fGetRawValues (uint16_t* values );
void ADC_fGetFilteredValues (uint16_t* values );

#endif
