#include <stdio.h>
#include <string.h>

void replaceSubstring(char string[], char sub[], char new_str[]) {
  int stringLen = strlen(string);
  int subLen = strlen(sub);
  int newLen = strlen(new_str);
  int i, j, k;
  int flag, start, end;
  for (i = 0; i < stringLen; i++) {
    flag = 0;
    start = i;
    for (j = 0; string[i] == sub[j]; j++, i++) {
      if (j == subLen - 1) {
        flag = 1;
      }
    }
    end = i;
    if (flag == 0) {
      i -= j;
    } else {
      // Shift the remaining characters in the string to the left to make room for the new substring
      for (j = start; j < end; j++) {
        for (k = start; k < stringLen; k++) {
          string[k] = string[k + 1];
        }
        stringLen--;
        i--;
      }
      // Insert the new substring into the string
      for (j = start; j < start + newLen; j++) {
        for (k = stringLen; k >= j; k--) {
          string[k + 1] = string[k];
        }
        string[j] = new_str[j - start];
        stringLen++;
        i++;
      }
    }
  }
}

int main() {
  char string[100], sub[100], new_str[100];
  printf("Enter a string: ");
  gets(string);
  printf("Enter the substring: ");
  gets(sub);
  printf("Enter the new substring: ");
  gets(new_str);
  replaceSubstring(string, sub, new_str);
  printf("The string after replacing: %s\n", string);
  return 0;
}

