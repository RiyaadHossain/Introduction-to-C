#include <stdio.h>

int main(){

    // 1. Write a function to check if a given number is armstrong or not
   /*  int num;
    printf("Please enter a number: ");
    scanf("%d", &num); */

    // 2. Write a function to check if a given number is nutural or not
    int num1;
    printf("Please enter a number: ");
    scanf("%d", &num1);

    // num1 > 1 ? printf("%d is natural", num1) : printf("%d isn't natural", num1);
    if(num1 > 1){
        printf("%d is natural", num1);
    }else{
        printf("%d isn't natural", num1);
    }

    return 0;
}