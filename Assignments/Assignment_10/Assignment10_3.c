#include <stdio.h>
#include <stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0, iAns = 0;
    iMeter = 1000;

    iAns = (iMeter * iNo);

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter : %d\n", iRet);

    return EXIT_SUCCESS;
}