#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        printf("Inavalid Input\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == iRow)
            {
                printf("*\t");
            }
            else if (j == iCol)
            {
                printf("*\t");
            }
            else if (i == j)
            {
                printf("*\t");
            }
            else if (i == 1)
            {
                printf("*\t");
            }
            else if (j == 1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
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