#include<stdio.h>
int main()
{
   int n,i,j=1;
   printf("Enter  the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     j=j*i;
   }
   printf("factorial for %d is %d",n,j);
   return 0;
}

