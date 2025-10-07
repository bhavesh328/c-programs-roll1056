#include<stdio.h>
void main()
{
   int arr[6]= {10,20,30,40,50,};
   int i,pos=2,values=25;
   for(i=5;i>pos;i--)
   {
   arr[i]=arr[i-1];
   }
   arr[pos]= value;
   for(i=0;i<6;i++)
   {  
   printf("%d", arr[i]);
   }
   }
