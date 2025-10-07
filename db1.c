#include<stdio.h>
int main()
{
  start:
  int n,remainder,binary[32],i=0,r;
  char ch;
  printf("Enter any Decimal number:");
  scanf("%d",&n);
    
    if (n == 0) 
    {
        printf("Binary number: 0");
    }
    for(i=0;n>0;i++)
    {
        remainder = n % 2;   
        binary[i] = remainder; 
        n = n / 2; 
    }
    printf("Binary number: ");
    for (r=i-1;r>=0;r--) 
    {
        printf("%d", binary[r]);
    }
    getchar();
    printf("\n Do you want to continue??");
    scanf(" %c",&ch);
    if(ch=='y')
    {
      goto start;
    }
    else
    {
      printf("Have a good day!");
    }
    return 0;
} 
