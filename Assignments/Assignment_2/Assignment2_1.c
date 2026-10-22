#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("*\t");

        iCnt++;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue1);

    Display(iValue1);

    return EXIT_SUCCESS;
}