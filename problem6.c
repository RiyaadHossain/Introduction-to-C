#include <stdio.h>

int main()
{

    // int num;
    // for (int i = 0;; i++)
    // {
    //     printf("enter even number: ");
    //     scanf("%d", &num);

    //     if (num % 2 != 0)
    //     {
    //         printf("Sorry don't need to enter odd number :( \n");
    //         break;
    //     }

    //     printf("%d \n", num);
    // }

    int n;
    do{
        printf("enter a odd number: ");
        scanf("%d", &n);
        if(n % 2 == 0){
            printf("Sorry don't need to enter even number :( \n");
            break;
        }

        printf("%d \n", n);
    } while (1);

    return 0;
}