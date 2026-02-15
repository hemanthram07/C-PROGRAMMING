#include <stdio.h>
int main ()
{
    int a;
printf("Enter the value :");
scanf("%d",&a);

if (a%5==0 && a%11 == 0)
{
    printf("it is divisible by both 5 and 11");

}
else
    {
        printf("it is not divisible by both 5 and 11");

    }
return 0;
}
