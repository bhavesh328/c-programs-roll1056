//write a program to accept a string from user and to count number of space and length of string//
#include<stdio.h>
int main()
{
   char str[50];
   int i, len=0 v=0;
     printf("\n enter str");
     fgets(str,sizeof(str),stdin);
     for(i=0;str[i]!="\0";i++)
     {
     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
     {
     V++
     }
     len++;
     }
     puts("str is");
     puts(str);
     printf("len=%d",len);
     printf("VOL=%d",V);
     return 0;
     }
     
