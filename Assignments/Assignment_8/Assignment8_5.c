#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 10;
    while (iCnt >= 1)
    {
        printf("%d\t", iNo * iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}