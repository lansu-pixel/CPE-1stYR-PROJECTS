#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
    int x, quantity, code;
    char name[30];
    float price, amount, discount, newprice;
    float totalamount = 0, totaldiscount = 0, totalnewprice = 0;

    clrscr();

    cout << "========================================";
    cout << "\n         SHOPPING DISCOUNT";
    cout << "\n========================================";

    for(x = 1; x <= 10; x++)
    {
        cout << "\n\nTRANSACTION " << x;
        cout << "\n----------------------------------------";

        cout << "\nItem name    : ";
        cin >> name;

        cout << "Price        : ";
        cin >> price;

        cout << "Quantity     : ";
        cin >> quantity;

        cout << "Discount code: ";
        cin >> code;

        amount = price * quantity;

        if(code == 1)
            discount = amount * .10;
        else if(code == 2)
            discount = amount * .20;
        else if(code == 3)
            discount = amount * .30;
        else
            discount = 0;

        if(amount > 10000)
            discount = discount + amount * .10;

        newprice = amount - discount;

        totalamount = totalamount + amount;
        totaldiscount = totaldiscount + discount;
        totalnewprice = totalnewprice + newprice;

        cout << "\n----------------------------------------";
        cout << "\nItem        : " << name;
        cout << "\nQuantity    : " << quantity;
        cout << "\nPrice       : " << price;
        cout << "\nAmount      : " << amount;
        cout << "\nDiscount    : " << discount;
        cout << "\nNew Price   : " << newprice;
    }

    cout << "\n\n========================================";
    cout << "\n              FINAL BILL";
    cout << "\n========================================";
    cout << "\nTotal Amount    : " << totalamount;
    cout << "\nTotal Discount  : " << totaldiscount;
    cout << "\nTotal New Price : " << totalnewprice;
    cout << "\n========================================";
    cout << "\n        THANK YOU FOR SHOPPING!";
    cout << "\n========================================";

    getch();
}