#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i = i + 1;
    }

    printf("Sum of %d numbers is, %d\n", n, sum);

    return 0;
}