#include <stdio.h>

int main(){

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf(" age: %d \n", age);
    printf(" &age: %p \n", &age);
    printf(" ptr: %p \n", ptr);
    printf(" *(&age): %p \n", *(&age));
    printf(" *ptr: %p \n", *ptr);
    printf(" _age: %p \n", _age);

    return 0;
}