#include <stdio.h>
/**
* main -Entry Point
* return - Always a success
*/int main(void)
{int size(int a, int b, int c);
{a = sizeof(char);
b = sizeof(int);
c = sizeof(long long int);
d = sizeof(float);
}
printf("Size of a char:%d byte\n", a);
printf("Size of an int:%d byte\n", b);
printf("Size of a long int:%d byte\n", b);
printf("Size of a long long int:%d byte\n", c);
printf("Size of a float:%d byte\n", d);
return (0);
}
