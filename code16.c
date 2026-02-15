#include <stdio.h>
int main()
{
int a,b;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
if (a>b)
    {
    printf("a is largest");
    }
    else if (a<b)
    {
        printf("a is smallest");
    }
    else
    {
        printf("it is equal");
    }
return 0;
}
