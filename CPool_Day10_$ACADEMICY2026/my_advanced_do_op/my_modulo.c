#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_mod(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop: modulo by zero\n");
        return 0;
    }
    return a % b;
}