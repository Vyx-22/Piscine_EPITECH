#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue){
    int color = (red << 16) | (green << 8) | blue;
    return (color);

}