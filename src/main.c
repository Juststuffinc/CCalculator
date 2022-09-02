#include <stdio.h>
#include <math.h>


int Num1 = NULL;
int Num2 = NULL;
int Sum = NULL;

char array[] = {'+', '-', 'x', '/' };
char op = NULL;

int main(){

    // prints the text below
    printf("What is the first number?");
    
    // User input for first number
    scanf("%d", &Num1);
    
    // prints the text below
    printf("What is the second number?");

    // User input for the second number
    scanf("%d", &Num2);
   
    // prints the text below
    printf("+, -, *, or / ?");


    // User input for operation type
    scanf("\n%c", &op);


    // Compares the input to everything in the switch
    switch(op)
    {
        case'+':
        Sum = Num1 + Num2;
        printf("%d", Sum);
        break;

        case'-':
        Sum = Num1 - Num2;
        printf("%d", Sum);
        break;

        case'*':
        Sum = Num1 * Num2;
        printf("%d", Sum);
        break;

        case'/':
        Sum = Num1 / Num2;
        printf("%d", Sum);
        break;
    }
    //Sum = Num1 + Num2;

    //printf("%d", Sum);
}