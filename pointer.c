#include <stdio.h>

int main(){

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d \n", age);
    printf("%p \n", &age);
    printf("%p \n", ptr);
    printf("%p \n", *ptr);
    printf("%p \n", _age);

    return 0;
}