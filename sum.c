#include <stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "Sum is: %d", a+b);

    fclose(fptr);

    return 0;
}