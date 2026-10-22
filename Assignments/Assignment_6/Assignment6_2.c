#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iNo)
{
    if (iNo % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not an leap year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}