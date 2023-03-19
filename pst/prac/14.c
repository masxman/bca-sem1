#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, alphabets, digits, vowels, consonants, spaces, special;

    alphabets = digits = vowels = consonants = spaces = special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        str[i]=tolower(str[i]);
        if(isalpha(str[i])) {
            alphabets++;
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
        else if(isdigit(str[i]))
            digits++;
        else if(isspace(str[i]))
            spaces++;
        else
            special++;
    }

    printf("Number of Alphabets: %d\n", alphabets);
    printf("Number of Digits: %d\n", digits);
    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);
    printf("Number of Spaces: %d\n", spaces);
    printf("Number of Special Characters: %d\n", special);

    return 0;
}
