#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Marks {
    int maths;
    float science;
    int english;
};

int main()
{
    struct Marks Nithin = { 25, 85.5, 88 };
    struct Marks Naina = { 25, 75.5,76 };
    struct Marks Hannah = {90, 95.5, 95};
    printf ("\nMarks for Nithin\n");
    printf("\nMarks for Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n", Nithin.maths, Nithin.science, Nithin.english);
    printf ("\nMarks for Naina\n");
    printf("\nMarks for Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n", Naina.maths, Naina.science, Naina.english);
    printf ("\nMarks for Hannah\n");
    printf("\nMarks for Maths: %d,\nMarks for Science: %.1f,\nMarks for English: %d \n", Hannah.maths, Hannah.science, Hannah.english);
    printf("\n");


}
