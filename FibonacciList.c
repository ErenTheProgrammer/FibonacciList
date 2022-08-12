#include <stdio.h>
int main()
{
    int fibonacci_limit = 55;
    int a = 0;
    int b = 1;
    int c;
    printf("Fibonacci List: ");
    for (int c = 0; c <= fibonacci_limit;)
    {
        printf("%d, ", c);
        c = a + b;
        a = b;
        b = c;
        if (c == 55)
        {
            printf("%d", c);
            break;
        }
    }
    return 0;
}