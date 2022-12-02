


#include<stdio.h>
#include<string.h>
char a[20];
char b[20];
char stringcopy(char a[20]);
char stringreversal( char a[100]);
int i;
char s1[100] = "programming ", s2[100] = "is awesome";
  int length, j;
char stringconcatenate(char s1[100], char s2[100]);

int main(){
printf("\n Enter the string:");
scanf("%s", a);

printf("\n entered string is %s", a);

 stringcopy(a);
 stringconcatenate(s1, s2);
  stringreversal(a);

}

//string copy function
char stringcopy(char a[20]){
  printf("\n before  Copy string in b = %s", b);
for( i=0; a[i]!= '\0'; i++){
b[i]= a[i];
}
b[i] = '\0';
 printf("\nafter Copy string in b = %s", b);
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

// string reversal
char stringreversal( char s[100]){
char r[20];
   int begin, end, count = 0;

   // Calculating string length

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';
printf("\n\n string after reversal\n");
printf("%s\n",r);
}

