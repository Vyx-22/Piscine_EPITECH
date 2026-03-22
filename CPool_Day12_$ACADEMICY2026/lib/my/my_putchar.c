#include <stdio.h>
#include <unistd.h>
#include "my.h"


void my_putchar(char c) {
    write (1, &c, 1);
} 