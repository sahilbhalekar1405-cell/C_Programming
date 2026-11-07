#include <stdio.h>
#include <stdlib.h>

int CountDiff(int iNo)
{
    int iCount = 0, eSum = 0, oSum = 0;

    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if ((iCount % 2) == 0)
        {
            eSum = (eSum + iCount);
        }

        else
        {
            oSum = (oSum + iCount);
        }

        iNo = (iNo / 10);
    }

    return eSum - oSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}