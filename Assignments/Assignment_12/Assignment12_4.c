#include <stdio.h>
#include <stdlib.h>

int CountFour(int iNo)
{
    int iCount = 0;
    int iFreq = 0;

    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if (iCount == 4)
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}