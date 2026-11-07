#include <stdio.h>
#include <stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0f;

    fPercent = (((float)iNo2 / (float)iNo1) * 100);

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks : \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage : %.2f%%\n", fRet);

    return EXIT_SUCCESS;
}