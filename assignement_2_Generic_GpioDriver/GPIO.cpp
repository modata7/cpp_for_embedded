#include "GPIO.hpp"
#include <iostream>

/*
#include "ARM_GPIO.h"

#include "AVR_GPIO.h"
*/

/*ONLY USED TO SHOWCASE THE CALLED METHOD*/
char *ports[] ={"PORTA","PORTB","PORTC","PORTD"};
char *pins[] ={"PIN0","PIN1","PIN2","PIN3","PIN4","PIN5","PIN6","PIN7"};
char *direction[] ={"LOW","HIGH"};
char *values[] ={"OUTPUT","INPUT"};

/*ARM GPIO Class*/
void ARM_GPIO::set_Bin_Direction(PORTS port , BINS bin , char mode)
{
    //set_Bin_Direction(port,bin,mode);

    std::cout<<"ARM: Set The Direction of "<< ports[port] <<" "<< pins[bin] << " as " << direction[mode]<<std::endl;
}

void ARM_GPIO::set_Bin_Value(PORTS port , BINS bin, char value)
{
    //set_Bin_Value(port,bin,value);

    std::cout<<"ARM: SET The Value of "<< ports[port] <<" "<< pins[bin] << " as " << values[value]<<std::endl;
}

/*AVR GPIO Class*/
void AVR_GPIO::set_Bin_Direction(PORTS port , BINS bin , char mode)
{
    //set_Bin_Direction(port,bin,mode);

    std::cout<<"AVR: Set The Direction of "<< ports[port] <<" "<< pins[bin] << " as " << direction[mode]<<std::endl;
}

void AVR_GPIO::set_Bin_Value(PORTS port , BINS bin, char value)
{
    //set_Bin_Value(port,bin,value);

    std::cout<<"AVR: SET The Vlaue of "<< ports[port] <<" "<< pins[bin] << " as " << values[value]<<std::endl;
}