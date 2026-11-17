#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 0;

    for (i = 1, iNum = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++, iNum++)
        {
            if (iNum < 10)
            {
                printf("%d\t", iNum);
            }
            else
            {
                iNum = 1;
                printf("%d\t", iNum);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}