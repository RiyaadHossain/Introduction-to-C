#include <stdio.h>

int main(){
    FILE *sptr;
    sptr = fopen("student.txt", "w");

    char name[100];
    int age;
    int cgpa;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%d", &cgpa);

    fprintf(sptr, "Student Name- %s \n", name);
    fprintf(sptr, "Student age- %d \n", age);
    fprintf(sptr, "Student cgpa- %d", cgpa);

    return 0;
}