#include <stdio.h>
#include <stdlib.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iFreq = 0;

    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if ((iCount > 3) && (iCount < 7))
        {
            iFreq = (iFreq + 1);
        }

        iNo = (iNo / 10);
    }

    return iFreq;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}