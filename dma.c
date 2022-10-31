#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;

    // ptr = (int*) malloc(5 * sizeof(int));
    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", ptr[i]);
    }

    free(ptr);

    ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;

    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        printf("%d \t", ptr[i]);
    }

    printf("\n");

    ptr = realloc(ptr, 8);

    for (int i = 0; i < 8; i++)
    {
        printf("Enter number: \t");
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d \t", ptr[i]);
    }

    return 0;
}