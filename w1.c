//write a program to check prime number //
#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter a value n :-");
scanf("%d", &n);
for(i=1;i<n;i++)
{
  
  if(n%i==0)
  {
    c++;
  }
}
  if(c==1)
  {
    printf(" a prime number :-");
  }
  else
  {
  printf(" not a prime number ");
  }
  return 0;
 
 }
