#include <stdio.h>
#include <stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue1);

    Accept(iValue1);

    return EXIT_SUCCESS;
}