#include <stdio.h>
#include <stdint.h>
#include <Module1/Module1_exports.h>

uint8_t FirstModule__func(void)
{
    MODULE1__print_hello();
    return 1;
}
