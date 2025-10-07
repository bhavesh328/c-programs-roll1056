#include <stdio.h>

int main() 
{
    int num, i = 0;
    char hex[32];   

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("Hexadecimal: 0\n");
        return 0;
    }

    
    while (num > 0) 
    {
        int rem = num % 16;   
        if (rem < 10)
            hex[i] = rem + '0';     
        else
            hex[i] = rem - 10 + 'A'; 
        num = num / 16;
        i++;
    }


    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}
