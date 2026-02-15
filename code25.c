#include <stdio.h>
int main()
{
    int Age;
    printf("Age :");
    scanf("%d",&Age);

    if (Age>=18)
    {
        printf("You are eligible to vote");

    }
    else
    {
        printf("you are not eligible to vote");

    }
    return 0;
}
