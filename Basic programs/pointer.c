# include <stdio.h>

int main()
{
    int a=10;
    int *p = &a; //pointer assigned to variable a
    printf ("Value of a is %d \n", a);
    printf ("Value of memory allocated to a is %p", &a); //dereferencing the pointer to get the value of a
    printf ("\nAddress of a is %p", &a);
    printf ("\nAddress of p  is %p", &p);
    printf("\n Value stored in pointer p is %d", *p); //dereferencing the pointer to get the value of a
}