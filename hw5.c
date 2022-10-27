#include <stdio.h>

int squareRoot(int n);
int myPow(int num, int pw);

int main(){
    printf("root is: %d \n", squareRoot(3));
    printf("my power is: %d", myPow(3, 3));
    return 0;
}

int squareRoot(int n){
    return n * n;
}

int myPow(int n, int p){
    int result = 1;
    for (int i = 1; i <= p; i++){
        result *= n;
    }
    return result;
}