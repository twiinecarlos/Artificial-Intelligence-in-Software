#include <stdio.h>

#define MULTIPLY(a, b) a * b

int main(void)
{
    int result = MULTIPLY(2 + 3, 4 + 5);
    printf("Result: %d\n", result);
    return 0;
}
