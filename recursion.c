#include <stdio.h>

int sum(int a);
void printHW(int q);

int main(){
    printf("sum is: %d \n", sum(5));
    printHW(4);
    return 0;
}

int sum(int a){
    if(a == 1){
        return 1;
    }
    return sum(a - 1) * a;
}

void printHW(int q){
    if(q == 0)
        return;
    printf("hello World\n");
    printHW(q - 1);
}