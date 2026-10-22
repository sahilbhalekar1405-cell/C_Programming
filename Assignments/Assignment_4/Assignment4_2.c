#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}