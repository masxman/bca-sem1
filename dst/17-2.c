#include <stdio.h>
#include <string.h>

// Concatenate s1 and s2
void stringconcatenate(char s1[100], char s2[100]) {
  int length = 0;
  // Find the length of s1
  while (s1[length] != '\0') {
    ++length;
  }
  // Concatenate s2 to s1
  int j;
  for (j = 0; s2[j] != '\0'; ++j) {
    s1[length] = s2[j];
    ++length;
  }
  // Terminating the s1 string
  s1[length] = '\0';
}

int main() {
  char s1[100] = "programming ";
  char s2[100] = "is awesome";
  stringconcatenate(s1, s2);
  printf("\n\nAfter concatenation: %s", s1);
  return 0;
}
