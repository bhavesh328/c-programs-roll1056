//Q15. print the first n natural number
#include <stdio.h>

int main()
 {
    int N, i;

 
    printf("Enter a positive integer N: ");
    scanf("%d", &N);


    printf("The first %d natural numbers are:\n", N);
    for(i = 1; i <= N; i++)
 {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

