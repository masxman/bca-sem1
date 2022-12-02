

#include <stdio.h>
#include<string.h>
//structure definition
struct Student{
char name[50];
int id;
int age;
char course[50];
};

union Books{
  char bookname[70];
  int id;
  char author[50];
};   //70 bytes of memory allocates union variable

int main(void) {
//structure declaration
  struct Student stud1, stud2;
  //. -> access member
   union Books book1;
    //student 1 details
   strcpy(stud1.name, "Rahul");
   stud1.id = 10;
   stud1.age= 20;
   strcpy(stud1.course, "BCA");


    //student 2 details
   strcpy(stud2.name, "Aruna");
   stud2.id = 11;
   stud2.age= 20;
   strcpy(stud2.course, "BCA");

   printf("\n Student 1 Records:\n");
   printf("\nName =%s", stud1.name);
   printf("\n Age =%d", stud1.age);
   printf("\n id = %d", stud1.id);
   printf("\n course = %s\n", stud1.course);


printf("\n\n Student 2 Records:");
   printf("\nName =%s", stud2.name);
   printf("\n Age =%d", stud2.age);
   printf("\n id = %d", stud2.id);
   printf("\n course = %s", stud2.course);



   //accessing Union values
   strcpy(book1.bookname, "Programming");
   printf("\n\nBookname = %s",book1.bookname);
   return 0;
}

