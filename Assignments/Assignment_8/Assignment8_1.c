#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("The number is small");
    }
    else if ((iNo >= 50) && (iNo <= 100))
    {
        printf("The number is medium");
    }
    else
    {
        printf("The number is large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}