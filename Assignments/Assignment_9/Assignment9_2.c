#include <stdio.h>
#include <stdlib.h>

int DollarToINR(int iNo)
{
    int iRup = 70, Ans = 0;

    Ans = (iRup * iNo);

    return Ans;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Dollar : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("In rupees INR : %d\n", iRet);

    return EXIT_SUCCESS;
}