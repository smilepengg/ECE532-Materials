#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xparameters.h"

volatile unsigned int* led = (unsigned int*) XPAR_GPIO_LED_BASEADD;
volatile unsigned int* swt = (unsigned int*) XPAR_GPIO_SWITCH_BASEADD;

int main()
{
    init_platform();

    print("Hello World\n\r");
    
    while(1)
    {
        *led = *swt;
    }

    cleanup_platform();
    return 0;
}