#include <stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d and b=%d",a,b);
    return 0;

}