#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()

{
clrscr();

float miles, TankSize, FuelPrice, kilometers, FuelNeeded, FullTanksNeeded, FuelLeft, TotalFuelCost;

cout<< "Enter the total distance (miles): ";
cin>> miles;

cout<< "Enter the fuel tank size (liters): ";
cin>> TankSize;

cout<< "Enter the price of fuel/liter: ";
cin>> FuelPrice;
kilometers = miles * 1.60934;
FuelNeeded = miles / 15;
FullTanksNeeded = (int) (FuelNeeded / TankSize);
FuelLeft = TankSize - FuelNeeded;
TotalFuelCost = FuelNeeded * FuelPrice;

cout<< "\n";
cout<< "            ROAD TRIP SUMMARY\n";
cout<< "\n";

printf("Distance (miles)      : %.2f miles\n", miles);
printf("Distance (kilometers) : %.2f km\n", kilometers);
printf("Fuel Tank Size        : %.2f Liters\n", TankSize);
printf("Fuel Price per Liter  : %.2f Pesos/liter\n", FuelPrice);
printf("Fuel Needed           : %.2f Liters\n", FuelNeeded);
printf("Full Tanks Needed     : %.2f Full tank(s)\n", FullTanksNeeded);
printf("Fuel Left             : %.2f Liters\n", FuelLeft);
printf("Total Fuel Cost       : %.2f Pesos\n", TotalFuelCost);

getch();

}











