// header section

#include <stdio.h>

// global variable section

int a = 7;

// main func.

/*
multi
line 
comment
*/

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

    sum = a % b; // 5%2 = 1
    printf("%d % % %d = %d\n", a, b, sum);

    return 0;
}