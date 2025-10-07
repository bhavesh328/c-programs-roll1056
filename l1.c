//write a program to accept a string from user an count length of the string//
#include<stdio.h>
int main()
{
   char str[50];
   int i, len=0;
     printf("\n enter str");
     fgets(str,sizeof(str),stdin);
     for(i=0;str[i]!="\0";i++)
     {
     len++;
     }
     puts("str is");
     puts(str);
     printf("len=%d",len);
     return 0;
     }
     
