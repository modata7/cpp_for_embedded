/*File Guardian*/
#pragma once
/*Pin Value*/
#define	HIGH	1
#define	LOW	    0

/*Pin Mode*/
#define	INPUT	1
#define	OUTPUT  0

/*GPIO Ports*/
typedef enum
{
    PORTA = 0,
    PORTB,
    PORTC,
    PORTD
}PORTS;

/*GPIO Pins*/
typedef enum
{
    PIN0 = 0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7
}BINS;

/*Abstract GPIO Class*/
class GPIO
{
    protected:

            PORTS port_type;
            BINS bin_number;
    
    public:
            virtual void set_Bin_Direction() = 0;

            virtual void set_Bin_Value() = 0;
};

/*ARM GPIO Class*/
class ARM_GPIO : public GPIO
{
    public:
            void set_Bin_Direction(PORTS port , BINS bin , char mode);

            void set_Bin_Value(PORTS port , BINS bin, char value);
};

/*AVR GPIO Class*/
class AVR_GPIO : public GPIO
{
    public:
            void set_Bin_Direction(PORTS port , BINS bin , char mode);

            void set_Bin_Value(PORTS port , BINS bin, char value);
};