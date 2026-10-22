#include <stdio.h>
#include <stdlib.h>

void CheckAddmission(float fMarks, int iAge)
{
    if (fMarks < 0 || iAge <= 0)
    {
        printf("Invalid Input\n");

        return;
    }

    if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Addmission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter your marks : \n");
    scanf("%f", &fMarks);

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    CheckAddmission(fMarks, iAge);

    return EXIT_SUCCESS;
}