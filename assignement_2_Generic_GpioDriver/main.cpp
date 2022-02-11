#include <iostream>
#include "GPIO.hpp"
using namespace std;

int main()
{
    ARM_GPIO ARM_OBJ;

    AVR_GPIO AVR_OBJ;

    ARM_OBJ.set_Bin_Direction(PORTA , PIN0 , OUTPUT);

    ARM_OBJ.set_Bin_Value(PORTA , PIN0 , HIGH);

    AVR_OBJ.set_Bin_Direction(PORTB , PIN1 , OUTPUT);

    AVR_OBJ.set_Bin_Value(PORTB , PIN1 , LOW);


    return 0;
}