#include <stdio.h>

int main() {
    char s1[] = "Flowers";
    char s2[] = " are beautiful";
    int len = 0;

    // Find the length of S1
    while (s1[len] != '\0') {
        len++;
    }
    printf("The length of S1 is %d\n", len);

    // Concatenate S1 and S2
    int i = 0;
    while (s2[i] != '\0') {
        s1[len] = s2[i];
        len++;
        i++;
    }
    s1[len] = '\0';
    printf("The concatenated string is: %s\n", s1);

    return 0;
}

