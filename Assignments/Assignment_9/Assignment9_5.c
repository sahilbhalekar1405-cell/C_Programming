#include <stdio.h>
#include <stdlib.h>

int FactorialDiffer(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;
    iSum1 = 1;
    iSum2 = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iSum1 = iSum1 * iCnt;
        }
        else if ((iCnt % 2) == 0)
        {
            iSum2 = iSum2 * iCnt;
        }
    }

    return iSum2 - iSum1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiffer(iValue);

    printf("Factorial difference is : %d", iRet);

    return EXIT_SUCCESS;
}