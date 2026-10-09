#include <stdio.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>

float get_number()
{
    float number;
    cout << "Enter a number       : ";
    cin >> number;
    return number;
}

void determine_result(float num1, float num2, char op)
{
    cout << "\n";
    cout << "+----------------------------------------+\n";
    cout << "|           CALCULATION RESULT           |\n";
    cout << "+----------------------------------------+\n";

    switch(op)
    {
        case '+':
            cout << "|           Sum  = " << num1 + num2 << "\n";
            break;

        case '-':
            cout << "|           Difference  = " << num1 - num2 << "\n";
            break;

        case '*':
            cout << "|           Product  = " << num1 * num2 << "\n";
            break;

        case '/':
            cout << "|           Quotient  = " << num1 / num2 << "\n";
            break;

        case '%':
            cout << "|           Remainder  = " << (int)num1 % (int)num2 << "\n";
            break;

        case '^':
            cout << "|           Power  = " << pow(num1, num2) << "\n";
            break;

        case 'e':
        case 'E':
            cout << "|           Exponential  = " << exp(num1 + num2) << "\n";
            break;

        default:
            cout << "|           Invalid operator!" << "\n";
    }

    cout << "+----------------------------------------+";
}

void main()
{
    float num1, num2;
    char op;

    clrscr();

    cout << "+========================================+\n";
    cout << "|            SIMPLE CALCULATOR           |\n";
    cout << "+========================================+\n\n";

    num1 = get_number();
    num2 = get_number();

    cout << "\nEnter (+,-,*,/,%,^,e): ";
    cin >> op;

    determine_result(num1, num2, op);

    getch();
}