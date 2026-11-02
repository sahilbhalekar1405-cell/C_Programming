#include <stdio.h>
#include <stdlib.h>

int ODDFactorial(int iNo)
{
    int iCnt = 0, iSum = 0;
    iSum = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iSum = iSum * iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = ODDFactorial(iValue);

    printf("Odd Factorial : %d", iRet);

    return EXIT_SUCCESS;
}