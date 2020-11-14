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
    int a;
    int i = 0;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d", &a);

    // 500 -> 1+2+3+4+5 =

    for (i = 1; i <= a; i++)
    {
        sum += i;
        // sum = sum + i -> sum =0 -> i=1 --> sum + i = sum
    }

    printf("Sum of %d numbers is, %d\n",a,sum);

    return 0;
}