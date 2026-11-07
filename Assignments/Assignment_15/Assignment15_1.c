#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[30];

    printf("Enter your name : \n");
    scanf("%[^\n]s", &Name);

    printf("Your name is : %s\n", Name);

    return EXIT_SUCCESS;
}