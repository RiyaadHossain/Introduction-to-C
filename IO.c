#include <stdio.h>

int main()
{
    /*    FILE *fpt;
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
       printf("Number is - %d \n", n); */

    /* FILE *fptr;
    fptr = fopen("string.txt", "r");
    char greet[300];

    fscanf(fptr, "%s", &greet);
    printf("%s \t", greet);

    fscanf(fptr, "%s", &greet);
    printf("%s \t", greet);

    fscanf(fptr, "%s", &greet);
    printf("%s \t", greet); */

    FILE *fptr;
    fptr = fopen("stu.txt", "w");

    char name[100];
    int age;
    int roll;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter roll: ");
    scanf("%d", &roll);

    fprintf(fptr, "Name - %s \n", name);
    fprintf(fptr, "Age - %d \n", age);
    fprintf(fptr, "Roll - %d \n", roll);

    fclose(fptr);

    return 0;
}