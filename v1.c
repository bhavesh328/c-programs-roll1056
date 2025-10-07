//write a program to print vowels//
#include<stdio.h>
int main()
{
 char str [100];
 int i,vowels=0;
 printf("\n enter string :-");
 fgets(str,sizeof(str),stdin);
 puts(str);
 for(i=0;str[i]!='\0';i++)
 {
 if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
 {
 vowels++;
 }
 }
 printf("\n vowels =%d",vowels);
 return 0;
}
