#include <stdio.h>
#include <string.h>

typedef struct address
{
    int block;
    char city[100];
    char house[100];
} addr;

int main()
{
    struct address addressOf5[5];
    addressOf5[0].block = 2;
    addressOf5[0].city = "Dhaka";
    addressOf5[0].house = "12ka";
    printf("%d", addressOf5[0].city);
    return 0;
}