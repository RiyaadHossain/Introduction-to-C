#include <stdio.h>
#include <string.h>

typedef struct person{
    char name[100];
    int age;
    char address[200];
} per;

void func(per rahim); // struct person / per

int main(){
    per rahim = {"Rahim", 28, "Dhaka"}; // struct person / per
    struct person *rahimPtr = &rahim;
    printf("Name is: %s \n", rahim.name);
    printf("age is: %d \n", (*rahimPtr).age);
    printf("address is: %s \n", rahimPtr->address);

    func(rahim);
    return 0;
}

void func(struct person rahim){
    printf("from function: %s", rahim.name);
}