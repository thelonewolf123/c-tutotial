// header section

#include <stdio.h>
int add(int a, int b); // prototype

int main()
{
    // var. dec.
    int a, b;
    int sum;

    // program logic

    printf("Enter 1st value: ");
    scanf("%d", &a);
    printf("Enter 2nd value: ");
    scanf("%d", &b);

    sum = add(a, b);
    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
