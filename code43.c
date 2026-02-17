#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the n value: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(i<=1)
{
continue;
}
printf("This is not either a prime or composite\n");
for(j=2;j<=n;j++)
{
if(i%j==0 || i%j==0)
{
printf("This is composite\n");
}

else
{
printf("This is not a composite\n");
}

}

return 0;





}


}
