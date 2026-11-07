#include <stdio.h>
#include <stdlib.h>

int CountEven(int iNo)
{
    int iCount = 0;
    int iFreq = 0;

    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if ((iCount % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}