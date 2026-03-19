#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_div(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop: division by zero\n");
        return 0;
    }
    return a / b;
}