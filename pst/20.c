
#include <stdio.h>
#include <string.h>

union student
{
            char name[10];
            char subject[20];
            float percentage;
};
struct student_record
{
            char name[20];
            char subject[20];
            float percentage;
};

int main()
{
    union student record1;
    struct student_record record2;

    // assigning values to record1 union variable
       strcpy(record1.name, "Raju");
       strcpy(record1.subject, "Maths");
       record1.percentage = 86.50;

       printf("Union record1 values example\n");
       printf(" Name       : %s \n", record1.name);
       printf(" Subject    : %s \n", record1.subject);
       printf(" Percentage : %f \n\n", record1.percentage);
       printf(" size of Union Record 1 is %ld", sizeof(record1));

    // assigning values to record2 struct variable
       printf("\n\nStruct record2 values example\n");
       strcpy(record2.name, "Mani");
           strcpy(record2.subject, "Physics");

       record2.percentage = 99.50;


        printf(" Name       : %s \n", record2.name);
         printf(" Subject    : %s \n", record2.subject);
       printf(" Percentage : %f \n", record2.percentage);
       printf("\n\n size of struct  Record 2 is %ld", sizeof(record2));
    printf("\n\n");

       return 0;
}

