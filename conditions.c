#include <stdio.h>

int main()
{
    // var. dec.
    int a, b;

    printf("Enter 1st value: ");
    scanf("%d", &a);
    printf("Enter 2nd value: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A is greater than B\n");
    }
    else if (a == b)
    {
        printf("Both numbers are equal\n");
    }

    else
    {
        printf("B is greater than A\n");
    }

    return 0;
}