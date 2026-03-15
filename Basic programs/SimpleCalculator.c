#include <stdio.h>
#include <math.h>

float add(float a, float b) // Function to add two integers
{
    float sum = (a + b);
    return sum;
}

float sub(float a,float b) // Function to subtract two integers
{
    float subtract = ( a -  b);
    return subtract;
}

float mult(float a, float b) //Function to multiply two integers
{
    float multiply = ( a * b);
    return multiply;
}

float divd( float a, float b) // Function to divide two numbers
{
    float divide = ( a / b);
    return divide;
}
float power (float a, float b) // Function to calculate exponent of two numbers
{
    if ( b==0)
    {
        float pow = 1;
        return 1;
    }
    else
    {
        float pow = 1;
        for ( int i=1; i <= b; i++)
        {
            float pow=( pow * a);
            return pow;
        }
    
    }
    
}

int main()
{
    float x,y;
    char op;
    printf("\n Enter the first number: ");
    scanf(" %f", &x);
    printf("\n Enter the second number: ");
    scanf(" %f", &y);
    printf ("\n Enter the operator :+,-,*,/, ^ : ");
    scanf(" %c", &op);

    if (op == '+')
    {
        float sum = add(x,y);
        printf("\n The sum of two numbers is %f", sum);
        return 0;

    }
    else if (op == '-')
    {
        float subtract = sub(x,y);
        printf("\n The difference of two numbers is %f", subtract);
        return 0;
    }
    else if (op == '*')
    {
        float multiply = mult(x,y);
        printf("\n The multiplication of two numbers is %f", multiply);
        return 0;
    }
    else if (op == '/')
    {
        if (y == 0)
        {
            printf("\n Division by zero is not allowed.");
            return 0;
        }
        else
        {
            float divide = divd(x,y);
            printf("\n The division of two numbers is %f", divide);
            return 0;
        }
    }
    else if (op == '^')
    {
        float exponent = pow(x, y);
        printf("\n the exponet of first number to the second number is %f", exponent);
        return 0;
    }
    else
    {
        printf(" \n Invalid Operator chosen. Please choose a valid operator as shown.");
    }    
    
}
