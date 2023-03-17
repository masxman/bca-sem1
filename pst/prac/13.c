#include <stdio.h>

int string_length(char []);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = string_length(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

int string_length(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++);

    return i;
}

