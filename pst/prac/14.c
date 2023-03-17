#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, alphabets, digits, vowels, consonants, spaces, special;

    alphabets = digits = vowels = consonants = spaces = special = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; ++i) {
        if(isalpha(str[i])) {
            ++alphabets;
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                ++vowels;
            }
            else {
                ++consonants;
            }
        }
        else if(isdigit(str[i])) {
            ++digits;
        }
        else if(isspace(str[i])) {
            ++spaces;
        }
        else {
            ++special;
        }
    }

    printf("\n");
    printf("Alphabets: %d\n", alphabets);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}

