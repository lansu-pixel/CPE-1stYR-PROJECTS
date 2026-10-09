#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.1416

void main()
{
    float r, circumference, area;
    clrscr();

    cout << "Enter radius of the circle: ";
    cin >> r;

    
    circumference = 2 * pi * r;
    area = pi * pow(r, 2);

    
    cout << "Radius  Circumference  Area \n";
    printf("%.2f   %.2f          %.2f", r, circumference, area);

    getch(); 
}
