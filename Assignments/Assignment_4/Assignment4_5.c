#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iNo)
{
    if ((iNo % 5) == 0)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by- 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}