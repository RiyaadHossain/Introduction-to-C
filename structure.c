#include <stdio.h>
#include <string.h>

struct people
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct people p1;
    strcpy(p1.name, "Riyad \n");
    p1.roll = 1;
    p1.cgpa = 3.88;
    // printf("%s", p1.name);

    struct people p2 = {"Shuvo", 33, 3.55};
    // printf("CGPA- %f", p2.cgpa);

    // Pointer ->
    struct people rahim;
    strcpy(rahim.name, "Rahim");
    rahim.roll = 2;
    rahim.cgpa = 3.2;

    struct people *rahimPt = &rahim;

    printf("Name: %s\n", (*rahimPt).name); // Using pointer - way 1
    printf("Name: %s\n", rahimPt->name); // Using pointer - way 2

    return 0;
}