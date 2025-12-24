<<<<<<< HEAD
#include <stdio.h>

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

int main()
{
    float x,y;
    char op;
    printf("\n Enter the first number: ");
    scanf(" %f", &x);
    printf("\n Enter the second number: ");
    scanf(" %f", &y);
    printf ("\n Enter the operator :+,-,*,/ : ");
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
            return 1;
        }
        else
        {
            float divide = divd(x,y);
            printf("\n The division of two numbers is %f", divide);
            return 0;
        }
    }
}
    
=======
#include <stdio.h>

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

int main()
{
    float x,y;
    char op;
    printf("\n Enter the first number: ");
    scanf(" %f", &x);
    printf("\n Enter the second number: ");
    scanf(" %f", &y);
    printf ("\n Enter the operator :+,-,*,/ : ");
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
            return 1;
        }
        else
        {
            float divide = divd(x,y);
            printf("\n The division of two numbers is %f", divide);
            return 0;
        }
    }
}
    
>>>>>>> f78543e3e7abcc5cc2b4f21944168f6a1e4b0795
