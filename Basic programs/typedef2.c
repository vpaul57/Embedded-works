#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct detials {
    char name[60];
    int age;
    int ID;
}Student; 
int main()
{
    Student s1 = {"Vishnu", 21, 5412};
    Student s2 = {"Nithin", 21, 5413};
    Student s3 = {"Naina", 25, 5414};
    Student s4 = {"Hannah", 22, 5415};

    printf("Details of the Students \n");
    printf("\nName: %s,\nAge: %d,\nID Number:%d \n", s1.name,s1.age,s1.ID);
    printf("\nName: %s,\nAge: %d,\nID Number:%d \n", s2.name,s2.age,s2.ID);
    printf("\nName: %s,\nAge: %d,\nID Number:%d \n", s3.name,s3.age,s3.ID);
    printf("\nName: %s,\nAge: %d,\nID Number:%d \n", s4.name,s4.age,s4.ID);
    printf("\n");
    printf("size of Structure=%d", sizeof (Student));
}