#include <stdio.h>

int main(){
    // char name[50];
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is: %s", name);

    char fullName[100];
    printf("Enter your name: ");
    fgets(fullName, 100, stdin);
    puts(fullName);
    return 0;
}
