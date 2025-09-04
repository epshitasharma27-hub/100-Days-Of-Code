 // Write a program to input two numbers and display their sum.

#include<stdio.h>




int main () { 
    int a;
    int b;   

    printf("enter a");
    scanf("%d" ,&a);
    printf("enter b");
    scanf("%d" ,&b);


    int sum = a + b;
    printf("sum is %d" , sum);




//Write a program to input two numbers and display their sum, difference, product, and quotient.

    int c;
    int d;
    int w;

    printf("enter c");
    scanf("%d" ,&c);

    printf("enter d");
    scanf("%d" ,&d);

    w = c+d;
    printf("sum is %d" ,w);


    int q;
    int p;
    int s;

    printf("enter q");
    scanf("%d" ,&q);

    printf("enter p");
    scanf("%d" ,&p);

    s = q-p;
    printf("diff is %d" ,s);


    int u;
    int v;
    int y;

    printf("enter u");
    scanf("%d" ,&u);
     
    printf("enter v");
    scanf("%d" ,&v);

    y = u*v;
    printf("prod is %d" ,y);


    int f;
    int g;
    float h;

    printf("enter f");
    scanf("%d" ,&f);
    
    printf("enter g");
    scanf("%d" ,&g);

    h = f/g;
    printf("div is %f" ,h);

   





    return 0;
}




