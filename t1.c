// write a program to search a element into 1 dimensional array all array element enter by user
/*
enter value of a[0]=11
a[1]=12
a[2]=13
which elemnet you want to find
11 is available on index of 0
*/

#include<stdio.h>
void main()
{
int i[100],n,search;
printf("enter a value :-");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter a value of a[%d]:-",i);
scanf("%d",&a[i]);
}
search=a[0];
for(i=0;i<n;i++);
{
if(a[i]>search)
{
search=a[i];
}
}
printf("\nsearch a number is :- %d",search);
}
