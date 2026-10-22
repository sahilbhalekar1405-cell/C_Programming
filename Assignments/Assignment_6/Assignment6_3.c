#include <stdio.h>
#include <stdlib.h>

void CalculateMarks(float fMarks)
{
    if ((fMarks < 0) || (fMarks > 100))
    {
        printf("Inavalid input");
        return;
    }

    if ((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade A");
    }
    else if ((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B");
    }
    else if ((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C");
    }
    else if ((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter your marks : ");
    scanf("%f", &fMarks);

    CalculateMarks(fMarks);

    return EXIT_SUCCESS;
}