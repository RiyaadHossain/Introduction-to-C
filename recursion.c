#include <stdio.h>

int sum(int a);

int main(){
    printf("sum is: %d", sum(5));
    return 0;
}

int sum(int a){
    if(a == 1){
        return 1;
    }
    return sum(a - 1) * a;
}

// 15