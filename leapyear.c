#include <stdio.h>

int main()
{
    // var. dec.
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    // 1900 % 4 ==0
    // 1900 is not leap year
    if (year % 4 == 0)
    {
        if ((year % 100 == 0) && (year % 400 == 0))
        {
            printf("%d is a leap year.\n", year);
        }
        else if (year % 100 != 0)
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    printf("Hello");
    printf("Hello");
    printf("Hello");
    return 0;
}