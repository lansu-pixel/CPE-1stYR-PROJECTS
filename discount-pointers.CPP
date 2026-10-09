#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void get_data(char *name_p, float *price_p, int *qty_p, int *code_p)
{
    cout << "Enter item name          : ";
    cin >> name_p;

    cout << "Enter price              : ";
    cin >> *price_p;

    cout << "Enter quantity           : ";
    cin >> *qty_p;

    cout << "Enter discount code (1-3): ";
    cin >> *code_p;
}

void determine_amount(float *price_p, int *qty_p, int *code_p,
		      float *amount_p, float *discount_p, float *newprice_p)
{
    float rate = 0;
    float additional = 0;

    *amount_p = (*price_p) * (*qty_p);

    if (*code_p == 1)
	rate = 0.10;
    else if (*code_p == 2)
	rate = 0.20;
    else if (*code_p == 3)
	rate = 0.30;

    if (*amount_p > 10000)
	additional = 0.10;

    *discount_p = *amount_p * (rate + additional);

    *newprice_p = *amount_p - *discount_p;
}

int main()
{
    clrscr();

    char name[10][30];

    float price[10], amount[10], discount[10], newprice[10];
    float total_amount = 0;
    float total_discount = 0;
    float total_newprice = 0;

    int qty[10], code[10];
    int i;

    cout << "==============================================" << "\n";
    cout << "           ITEM PURCHASE SYSTEM" << "\n";
    cout << "==============================================" << "\n";

    for (i = 0; i < 10; i++)
    {
	cout << "\nTRANSACTION " << i + 1 << "\n";
	cout << "----------------------------------------------" << "\n";

	get_data(name[i], &price[i], &qty[i], &code[i]);

	determine_amount(&price[i], &qty[i], &code[i],
			 &amount[i], &discount[i], &newprice[i]);

	cout << "\nRESULT" << "\n";
	cout << "Item Name       : " << name[i] << "\n";
	cout << "Quantity        : " << qty[i] << "\n";
	cout << "Price           : " << price[i] << "\n";
	cout << "Amount Purchase : " << amount[i] << "\n";
	cout << "Total Discount  : " << discount[i] << "\n";
	cout << "New Price       : " << newprice[i] << "\n";

	total_amount = total_amount + amount[i];
	total_discount = total_discount + discount[i];
	total_newprice = total_newprice + newprice[i];
    }

    cout << "\n==============================================" << "\n";
    cout << "              TOTAL SUMMARY" << "\n";
    cout << "==============================================" << "\n";

    cout << "Total Amount Purchase : " << total_amount << "\n";
    cout << "Total Discount        : " << total_discount << "\n";
    cout << "Total New Price       : " << total_newprice << "\n";

    getch();
    return 0;
}
