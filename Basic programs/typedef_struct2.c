#include<stdio.h>
#include <conio.h>
#include <math.h>

typedef struct details 
{
    char name[50];
    int age;
    int ID_Num;
} Patient;

int main()
{
    char ch;
    Patient p1, p2, p3;
    printf("Enter the name of the patient: ");
    scanf("%s", &p1.name);
    printf("Enter the Age of the patient: ");
    scanf("%d", &p1.age);
    printf("Enter the ID Number of the patient: ");
    scanf("%d", &p1.ID_Num);
    printf("Enter the name of the patient: ");
    scanf("%s", &p2.name);
    printf("Enter the Age of the patient: ");
    scanf("%d", &p2.age);
    printf("Enter the ID Number of the patient: ");
    scanf("%d", &p2.ID_Num);
    printf("Enter the name of the patient: ");
    scanf("%s", &p3.name);
    printf("Enter the Age of the patient: ");
    scanf("%d", &p3.age);
    printf("Enter the ID Number of the patient: ");
    scanf("%d", &p3.ID_Num);

    printf ("\nDo you wish to see the details?\n");

    scanf(" %c", &ch);

        if (ch == 'y')
        {
            printf("\n Details of the patients are below \n");
            printf ("\nName of the patient is %s, age is %d, ID Number is %d \n", p1.name, p1.age,p1.ID_Num);
            printf ("\nName of the patient is %s, age is %d, ID Number is %d \n", p2.name, p2.age,p2.ID_Num);
            printf ("\nName of the patient is %s, age is %d, ID Number is %d \n", p3.name, p3.age,p3.ID_Num);
            return 0;
        }
        else
        {
            printf("\nPlease contact our admin department to add further detials. \nThey'll be happy to help you. \nThank you. Have a wonderfull day!! ");
            return 0;
        }
}
 