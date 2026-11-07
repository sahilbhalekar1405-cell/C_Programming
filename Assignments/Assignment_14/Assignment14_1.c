#include <stdio.h>
#include <stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1, iMult = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMult = (iMult * iCnt);
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors : %d", iRet);

    return EXIT_SUCCESS;
}