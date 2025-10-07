#include<stdio.h>
int main()
 {
 char str[100];
 printf("\n enter string :-");
 fgets(str, sizeof(str),stdin);
 puts(str);
 return 0;
 }
