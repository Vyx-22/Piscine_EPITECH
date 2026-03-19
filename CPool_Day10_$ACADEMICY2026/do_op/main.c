#include <stdio.h>
#include <unistd.h>
#include "my.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        return (84);

    int nb1 = my_getnbr(argv[1]);
    int nb2 = my_getnbr(argv[3]);
    char op = argv[2][0];

    if (op == '+') {
        my_put_nbr(nb1 + nb2);
        my_putchar('\n');
    } else if (op == '-') {
        my_put_nbr(nb1 - nb2);
        my_putchar('\n');
    } else if (op == '*') {
        my_put_nbr(nb1 * nb2);
        my_putchar('\n');
    } else if (op == '/') {
        if (nb2 == 0) {
            my_putstr("Stop: division by zero\n");
            return (84);
        }
        my_put_nbr(nb1 / nb2);
        my_putchar('\n');
    } else if (op == '%') {
        if (nb2 == 0) {
            my_putstr("Stop: modulo by zero\n");
            return (84);
        }
        my_put_nbr(nb1 % nb2);
        my_putchar('\n');
    } else {
        my_putstr("0\n");
    }
    return (0);
}
