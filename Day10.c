#include <stdio.h>

//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.



int main() {
    int a, b, c;

    // Input three sides of a triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }


    //Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>


    int day;

    // Input number
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Switch-case to display day of the week
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }


    return 0;
}
