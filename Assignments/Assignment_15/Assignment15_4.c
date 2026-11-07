#include <stdio.h>
#include <stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    if ((iNo1 == 0 && iNo2 == 0))
    {
        iMul = iNo3;
    }
    else if ((iNo1 == 0 && iNo3 == 0))
    {
        iMul = iNo2;
    }
    else if ((iNo2 == 0 && iNo3 == 0))
    {
        iMul = iNo1;
    }
    else if ((iNo1 == 0))
    {
        iMul = iNo2 * iNo3;
    }
    else if ((iNo3 == 0))
    {
        iMul = iNo2 * iNo1;
    }
    else if ((iNo2 == 0))
    {
        iMul = iNo1 * iNo3;
    }
    else
    {
        iMul = (iNo1 * iNo2 * iNo3);
    }
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three numbers are : %d\n", iRet);

    return EXIT_SUCCESS;
}