#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.1416

void main() {
	float r, h, TSA, V;
	clrscr();
	
	cout << "Enter radius of the cylindrical tank:" ;

	cin >> r;
	
	cout << "Enter height of the cylindrical tank:" ;
	
	cin >> h;
	
	TSA = 2 * pi * r * h + r;
	V = pi * pow(r,2) * h;

	
	
	cout << "TSA, V  \n";
	printf ("%.2f       %.2f", r, h, TSA, V);
	
	getch();
}

	
	


