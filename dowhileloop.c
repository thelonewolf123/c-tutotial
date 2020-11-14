#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i = i + 1;
    } while (i <= n);

    printf("Sum of %d numbers is, %d\n", n, sum);

    return 0;
}