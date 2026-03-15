#include<stdio.h>
#include<conio.h>
#pragma pack(1)

struct Marks
{
    char Subject[7];
    int marks;
    float percentage;
};
int main()
{
    struct Marks m1 = {"Science", 5, 5.5};
    struct Marks m2 = {"Maths", 5, 5.2};
    struct Marks m3 = {"English", 2 , 5.2};
    printf("size of Marks is %d", sizeof (struct Marks));
    struct Marks *p3 = &m3;
    struct Marks *p2 = &m2;
    struct Marks *p1 = &m1;
    printf ("\nSubject: %s, \nMark:%d", p1-> Subject, p1->marks);
    printf ("\nSubject: %s, \nMark:%d", p2-> Subject, p2->marks);
    printf ("\nSubject: %s, \nMark:%d", p3-> Subject, p3->marks);
    printf ("\nThe value of m3 is %d", &m3);
    printf ("\nAddress of Marks= %p",p3);
}

