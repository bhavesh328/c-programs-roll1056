#include<stdio.h>
void main()
{
   int num,n,rev=0;
   printf("enter a number:-");
   scanf("%d",&n);
   for(;n>0;n=n/10)
   {
   num=n%10;
   rev=rev*10+num;
   }
   printf("%d/n",rev);
   }
