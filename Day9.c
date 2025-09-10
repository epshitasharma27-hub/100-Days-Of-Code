#include <stdio.h>
#include <math.h>

//Write a program to find the roots of a quadratic equation and categorize them.



int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Real and distinct
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %f and Root2 = %f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Real and equal
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Imaginary roots
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary (complex conjugates).\n");
        printf("Root1 = %f + %fi and Root2 = %f - %fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;

    //Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:

    #include <stdio.h>

    int percentage;

    // Input percentage
    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    // Validate percentage
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;




}
