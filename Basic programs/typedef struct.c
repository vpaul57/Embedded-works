#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Marks {
    int maths;
    float science;
    int english;
}Student;

int main()
{
    Student Nithin = {85, 86, 84};
    Student Naina = {84, 82, 88};
    Student Hannah = {88, 87, 89};

    printf ("\n Marks for Nithin\n");
    printf ("\nMarks fo Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n ", Nithin.maths, Nithin.science, Nithin.english);
    printf ("\n Marks for Naina\n");
    printf ("\nMarks fo Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n ", Naina.maths, Naina.science, Naina.english);
    printf ("\n Marks for Hannah\n");
    printf ("\nMarks fo Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n ", Hannah.maths, Hannah.science, Hannah.english);
    printf("\n");

}
