#include<stdio.h>
#include<conio.h>

struct Marks
{
    double marks;
    char Subject[1];
    float percentage;
    char grade[1];
};
int main()
{
    struct Marks m1 = { 65,"S", 65.5,"A"};
    struct Marks m2 = { 75,"M", 75.2,"B"};
    struct Marks m3 = { 78,"E", 78.2,"C"};
    printf("sizeof float is %d\n", sizeof(float));
    printf("sizeof int is %d\n", sizeof(int));
    printf("sizeof char is %d\n", sizeof(char));
    printf("sizeof struct Marks is %d\n", sizeof(struct Marks));
}


