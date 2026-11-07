#include <stdio.h>
#include <stdlib.h>

int MultDigits(int iNo)
{
    int iCount = 0, iMul = 0;

    iMul = 1;
    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if (iCount != 0)
        {
            iMul = (iMul * iCount);
        }

        iNo = (iNo / 10);
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}