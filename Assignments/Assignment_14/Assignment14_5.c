#include <stdio.h>
#include <stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum1 = (iSum1 + iCnt);
        }
        else
        {
            iSum2 = (iSum2 + iCnt);
        }
    }

    return iSum2 - iSum1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}