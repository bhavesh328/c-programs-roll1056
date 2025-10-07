
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100];

   
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

  
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);

    if(len1 > len2) 
{
        printf("First string is longer.\n");
    } 
else if(len2 > len1) 
{
        printf("Second string is longer.\n");
    } 
else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}

