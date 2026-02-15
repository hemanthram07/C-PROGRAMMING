#include <stdio.h>
int main ()
{
int a,b,c;
printf("a=");
scanf("%d",&a);

printf("b=");
scanf("%d",&b);

printf("c=");
scanf("%d",&c);

if (a>=b && a>=c)
{
printf("A is largest");
}
else if (b>=a && b>=c)
{
printf("b is largest");
}
else
{
printf("c is largest");

}
return 0;
}
