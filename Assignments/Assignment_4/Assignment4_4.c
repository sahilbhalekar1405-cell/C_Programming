#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge <= 0)
    {
        printf("Invalid Input");
        return;
    }

    if (iAge >= 18)
    {
        printf("You are Eligible to vote");
    }
    else
    {
        printf("You are under age");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}