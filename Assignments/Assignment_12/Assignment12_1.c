#include <stdio.h>
#include <stdlib.h>

void DisplayDigit(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iCount = (iNo % 10);
        printf("%d\n", iCount);
        iNo = (iNo / 10);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}