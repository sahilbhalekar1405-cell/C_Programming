#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("%d is the greatest number\n", iNo1);
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("%d is the greatest number\n", iNo2);
    }
    else
    {
        printf("%d is the greatest number\n", iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}