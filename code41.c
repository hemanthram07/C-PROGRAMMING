#include <stdio.h>
int main()
{
    int i=1,j=1,n;
    scanf("%d",&n);
    //i=row j=column
   for(i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
     {
         if(i==1 || i==n || j==1 || j==n)
         {
        printf("*\n");

         }
         else
         {
             printf(" ");
         }


     }

    }

return 0;
}

