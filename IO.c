#include <stdio.h>

int main(){
    FILE *fpt;
    fpt = fopen("test.txt", "r");

    int n;
    fscanf(fpt, "%d", &n);
    printf("Number is - %d \n", n);
    fscanf(fpt, "%d", &n);
    printf("Number is - %d \n", n);
    fscanf(fpt, "%d", &n);
    printf("Number is - %d \n", n);
    fscanf(fpt, "%d", &n);
    printf("Number is - %d \n", n);
    fscanf(fpt, "%d", &n);
    printf("Number is - %d \n", n);

    return 0;
}