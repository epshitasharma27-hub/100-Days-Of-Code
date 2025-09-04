#include<stdio.h>

// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

int main () {
    int l;
    int b;
    int area;
    int perimeter;
    printf("enter l");
    scanf("%d" ,&l);

    printf("enter b");
    scanf("%d" ,&b);
    
    area = l*b;
    perimeter = 2*(l+b);
    printf("area of rectangle is %d \n" ,area);
    printf("perimeter of rectangle is %d \n" ,perimeter);


    // Write a program to calculate the area and circumference of a circle given its radius.

    float radius;
    float Area;
    float Perimeter;
    printf("enter radis");
    scanf("%f" ,&radius);

    Area = 3.1415*radius*radius;
    Perimeter = 2*3.1415*radius;

    printf("circle_area is %f \n" ,Area);
    printf("circle_perimeter of circle is %f \n" ,Perimeter);


    return 0;

}