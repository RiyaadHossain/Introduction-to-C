#include <stdio.h>

int main()
{

    /*
    Print all the odd number from 5 to 50

    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
    */

    /* Print all the reverse table int in a given number

    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", num * i);
    }
    */

    /* Print write a function to print:

    *****
    *****
    *****
    *****


    int num;
    printf("enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    */

    /*

     *******
      *****
       ***
        *

     */

    int num, i, count = 1;
    printf("enter a number: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {

        for (int k = 1; k <= count; k++){
            printf(" ");
        }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }
        printf("\n");
        ++count;
    }

    return 0;
}