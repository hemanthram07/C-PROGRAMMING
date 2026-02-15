#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    c = a%2 ==0;
    printf("c=%d\n",c);
    if (c=a%2==0)
    {
        printf("it is even",c);

    }
else
{
    printf("it is odd",c);

}
return 0;
}
