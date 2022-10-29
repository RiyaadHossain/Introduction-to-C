#include <stdio.h>
#include <string.h>

char getUpperCase(char str[]);
char saltedPass(char str[]);

int main()
{

    saltedPass("MyPass");

    /*
        char str[300];
        char ch;
        printf("Enter string: ");
        int n = 0;

        while (ch != '\n'){
           scanf("%c", &ch);
           str[n] = ch;
           n++;
        }

        str[n] = '\0';
        puts(str); */

    // char name[50];
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is: %s", name);

    // char fullName[100];
    // printf("Enter your name: ");
    // fgets(fullName, 100, stdin);
    // puts(fullName);

    /* 1. Write a program to convert all lowercase vowels to uppercase in a string. */

    /* 2. Write a program to print the highest frequency character in a string. */
    /* 3. Write a program to remove blank spaces in a string. */
    /* 4. Write a program to replace lowercase letters with uppercase & vice versa in a string. */

    return 0;
}

char saltedPass(char str[]){
    char newPass[200];
    strcpy(newPass, str);
    strcat(newPass, "123");
    printf("%s", newPass);
}

char getUpperCase(char str[])
{
    char vowelStr[200];
    int num = 0;
    for (int i = 0; i != '\0'; i++)
    {
        if (str[num] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowelStr[num] = str[i];
        }
        else
        {
            vowelStr[num] = str[i];
        }
        num++;
    }
}