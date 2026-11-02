#include <stdio.h>
#include <stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while (iCnt <= 10)
    {
        printf("%d\t", iNo * iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}