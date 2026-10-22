#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 2 * (iNo); iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}