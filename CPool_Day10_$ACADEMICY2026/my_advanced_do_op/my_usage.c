#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_usage(int a, int b)
{
    my_putstr("error: only [ + - / * % ] are supported\n");
    return 0;
}