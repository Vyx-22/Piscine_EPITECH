#include "my_struct.h"

struct operator g_opptab[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"*", &my_mul},
    {"/", &my_div},
    {"%", &my_mod},
    {NULL, &my_usage}    
};