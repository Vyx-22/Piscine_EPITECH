struct operator {
    char *op;                         
    int (*func)(int a, int b);      
};

int my_add(int a, int b);
int my_sub(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_mod(int a, int b);
int my_usage(int a, int b); 

