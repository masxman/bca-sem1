#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[] = {"Flowers "};
    char s2[] = {"are beautiful"};
    char s3[100];
    int i, j, count = 0;

    printf("String before concatenation: %s\n", s1);
    printf("String before concatenation: %s\n", s2);

    // copy s1 to s3
    for (i = 0; s1[i] != '\0'; i++) {
        s3[i] = s1[i];
        count++;
    }

    // concatenate s2 to s3
    for (j = 0; s2[j] != '\0'; j++) {
        s3[i+j] = s2[j];
        count++;
    }

    s3[i+j] = '\0';

    printf("Concatenated string: %s\n", s3);
    printf("Number of letters: %d\n", count);

    return 0;
}

