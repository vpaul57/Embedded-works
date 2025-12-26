#include <stdio.h>
int add(float a , float b)
{
    float sum = (a + b);
    return sum;
}
int subtract( float a , float b)
{
    float diff = (a-b);
    return diff;
}
int multiply(float a , float b)
{
    float prod = (a*b);
    return prod;
}
int division ( float a , float b)
{
    float div = (a/b);
    return div;
}

int main()
{
    float x, y;
    char op;
    printf ("Enter the first number: ");
    scanf("%f", &x);
    printf ("Enter the second number: ");
    scanf ("%f", &y);
    printf("Enter the Operator (+,-,*,/): ");
    scanf ("%c", &op);
    switch (op)
    {
    case '+':
        printf("Result: %.2f\n", add(x, y));
        break;
    case '-':
        printf("Result: %.2f\n", subtract(x, y));
        break;
    case '*':
        printf("Result: %.2f\n", multiply(x, y));
        break;    
    default:
        break;
    }


}
