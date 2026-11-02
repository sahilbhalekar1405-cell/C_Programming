#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number %d is : %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}