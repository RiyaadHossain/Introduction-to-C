#include <stdio.h>
#include <string.h>

void removeBlank(char s[]);
void lowercaseUppercase(char str[]);
void highFreq(char str[]);

int main()
{
    char str1[200] = "A B";
    char str2[300] = "Riyad z Hossain";
    /* 1. Write a program to convert all lowercase vowels to uppercase in a string. */

    /* 2. Write a program to print the highest frequency character in a string. */
    highFreq(str2);

    /* 3. Write a program to remove blank spaces in a string. */
    // removeBlank(str1);

    /* 4. Write a program to replace lowercase letters with uppercase & vice versa in a string.
    char str4[200];
    printf("Write something: ");
    fgets(str4, 200, stdin);
    lowercaseUppercase(str4);
   */

    return 0;
}

void highFreq(char str[]){
    char high = str[0];
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] > high){
            high = str[i];
        }
    }
    printf("%c", high);
}

void removeBlank(char s[]){
    int i, k = 0;
    for (i = 0; s[i] != '\0'; i++){
        s[i] = s[i + k];
        if (s[i] == ' ' || s[i] == '\t'){
            k++;
            i--;
        }
    }
    printf("\n");
    puts(s);
}

void lowercaseUppercase(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    puts(str);
}