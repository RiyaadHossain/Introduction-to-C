/* #include <stdio.h>

void reverse(int arr[], int n); // Declaration of function

int main()
{
    // 1. Write a function to reverse an array:
    int arr1[5] = {1, 2, 3, 4, 5};
    int *ptrArr = arr1; // ------ arr1 | &arr1[0] ------
    reverse(arr1, 5);   // Funciton call

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", arr1[i]);
    }
    return 0;
}

// Funtion defination
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstIndex = arr[i];
        int lastIndex = arr[n - 1 - i];
        arr[i] = lastIndex;
        arr[n - 1 - i] = firstIndex ;
    }
} */

/*
    2. Write a function to print the first n of Fibonacci number

    #include <stdio.h>

    void makeFibo(int fibo[], int n);

    int main()
    {
        int num;
        int fiboArr[] = {};
        printf("Enter a number: ");
        scanf("%d", &num);
        makeFibo(fiboArr, num);
        return 0;
    }

    void makeFibo(int fibo[], int n)
    {
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i = 2; i < n; i++)
        {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
            printf("%d \t", fibo[i]);
        }
    }

*/

/*
    3. Create a 2D array storing the table of 2 & 3

 */

#include <stdio.h>

void printTable(int arr[][10], int m, int number);
void largestNum(int arr[], int len);

int main()
{

    int tableTwo[2][10];
    int arr[5] = {1, 25, 3, 4, 5};

    printTable(tableTwo, 0, 2);
    printTable(tableTwo, 1, 3);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d \t", tableTwo[0][i]);
    // }
    // printf("\n");

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d \t", tableTwo[1][i]);
    // }

    largestNum(arr, 5);
    return 0;
}

void printTable(int arr[][10], int n, int number)
{
    for (int i = 0; i < 10; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

void largestNum(int arr[], int len){
    int large = arr[1];
    for (int i = 0; i < len; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    printf("Largest Num: %d", large);
}
