#include <stdio.h>
int main()
{
    int p,r,t,si; //SI-SIMPLE INTEREST, P-PRINCIPLE,R-RATE OF THE INTEREST,T-TIME FORMULA:P*R*T/100
    printf("enter the principle p:");
    scanf("%d",&p);
    printf("enter the rate r:");
    scanf("%d",&r);
    printf("enter the time t:");

    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("si = %d",si);
    return 0;

}