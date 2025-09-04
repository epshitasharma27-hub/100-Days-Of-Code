#include<stdio.h>

//Write a program to convert temperature from Celsius to Fahrenheit.

int main () {

    
    float celsius, fahrenheit;

    // Take input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);

   


    //Write a program to swap two numbers using a third variable.

   
    int a, b, temp;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = a;   // store value of a in temp
    a = b;      // assign value of b to a
    b = temp;   // assign value of temp (old a) to b

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

  



    return 0;
}