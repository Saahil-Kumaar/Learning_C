#include <stdio.h>

int main()
{
    int a = 5, b = 0, c;
    c = a + --b;
    printf("Sum: %d\nB: %d", c, b);

    a = 5, b = 0;

    c = a + b--;
    printf("\nSum: %d\nB: %d\n", c, b);
}