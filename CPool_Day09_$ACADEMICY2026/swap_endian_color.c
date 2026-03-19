#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int swap_endian_color(int color) {

    int a = (color >> 24) & 0xFF;
    int r = (color >> 16) & 0xFF;
    int g = (color >> 8) & 0xFF;
    int b = color & 0xFF;

    return (b << 24) |(g << 16) | (r << 8) | a;
}