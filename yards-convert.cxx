#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	
	float yards, inches, meters, feet, millimeter, kilometers, miles, centimeters;
	
	
	cout<< "Enter the length in yards: ";
	cin>> yards;
	
	inches = yards * 36;
	meters = yards * 0.9144;
	feet = yards * 3;
	millimeter = yards * 914.4;
	kilometers = yards * 0.0009144;
	miles = yards * 0.00056818;
	centimeters = yards * 91.44;
	
	cout<< ("\n");
	cout<< ("Length Convertion\n");
	cout<< ("\n");
	printf ("inches       = %.2f\n", inches);
	printf ("meters       = %.2f\n", meters);
	printf ("feet         = %.2f\n", feet);
	printf ("millimeter   = %.2f\n", millimeter);
	printf ("kilometers   = %.6f\n", kilometers);
	printf ("miles        = %.6f\n", miles);
	printf ("centimeters  = %.2f\n", centimeters);
	
	getch();
	
}
