//II. Concatenate S1 and S2
#include<stdio.h>
#include<string.h>
int main(){
char a[20];
char b[20];
int i;
char s1[100] = "programming ", s2[100] = "is awesome";
int length, j;
stringconcatenate(s1, s2);
}
// string concatenate
char stringconcatenate(char s1[100], char s2[100]){
length = 0;
while (s1[length] != '\0') {
++length;
}
// concatenate s2 to s1
for (j = 0; s2[j] != '\0'; ++j) {
s1[length] = s2[j];
++length;
}
// terminating the s1 string
s1[length] = '\0';
printf("\n \n After concatenation: ");
printf("%s", s1);
}
