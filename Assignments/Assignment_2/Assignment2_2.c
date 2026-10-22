#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo >= 1)
    {
        printf("*\t");

        iNo--;
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