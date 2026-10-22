#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is greater number", iNo1);
    }
    else if (iNo2 > iNo1)
    {
        printf("%d is greater number", iNo2);
    }
    else
    {
        printf("%d is equal to %d", iNo1, iNo2);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}