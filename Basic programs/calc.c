#include <stdio.h>

void add(int a, int b){
    int sum = a+b;
    printf("\nSum of the numbers are: %d", sum);
}
void sub(int a, int b){
    int diff= a-b;
    printf ("\nThe difference of the two numbers are: %d", diff);
}
void div(int a, int b)
{
    int div = a/b;
    printf ("\nThe division of two numbers are: %d", div);
}
void mult(int a, int b)
{
    int mult =a*b;
    printf("\nThe multiplication of the two numbers are : %d", mult);
    printf("\n");
}
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf ("Enter the second number: ");
    scanf("%d", &num2);
    add(num1, num2);
    sub(num1, num2);
    div(num1, num2);
    mult(num1, num2);
    return 0;
}