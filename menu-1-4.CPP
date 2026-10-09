#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

#define pi 3.1416
#define G 32.17

void activity1()
{
    float r, circumference, area;

    clrscr();

    cout << "Enter radius of the circle: ";
    cin >> r;

    circumference = 2 * pi * r;
    area = pi * pow(r, 2);

    cout << "Radius   |   Circumference   |   Area \n";
    printf("%.2f        %.2f            %.2f", r, circumference, area);

    getch();
}

void activity2()
{
    float yards, inches, meters, feet, millimeter, kilometers, miles, centimeters;

    clrscr();

    cout << "Enter the length in yards: ";
    cin >> yards;

    inches = yards * 36;
    meters = yards * 0.9144;
    feet = yards * 3;
    millimeter = yards * 914.4;
    kilometers = yards * 0.0009144;
    miles = yards * 0.00056818;
    centimeters = yards * 91.44;

    cout << ("\n");
    cout << ("Length Convertion\n");
    cout << ("\n");

    printf("inches       = %.2f\n", inches);
    printf("meters       = %.2f\n", meters);
    printf("feet         = %.2f\n", feet);
    printf("millimeter   = %.2f\n", millimeter);
    printf("kilometers   = %.6f\n", kilometers);
    printf("miles        = %.6f\n", miles);
    printf("centimeters  = %.2f\n", centimeters);

    getch();
}

float get_theta()
{
    float theta;

    cout << "Enter angle (degrees): ";
    cin >> theta;

    return theta;
}

float get_dist()
{
    float dist;

    cout << "Enter distance (feet): ";
    cin >> dist;

    return dist;
}

float get_velocity()
{
    float velocity;

    cout << "Enter velocity (fps) : ";
    cin >> velocity;

    return velocity;
}

float compute_time(float theta, float dist, float velocity)
{
    float rad, time;

    rad = theta * pi / 180;
    time = dist / (velocity * cos(rad));

    return time;
}

float compute_height(float theta, float velocity, float time)
{
    float rad, height;

    rad = theta * pi / 180;

    height = velocity * sin(rad) * time - (G * time * time) / 2;

    return height;
}

void display_result(float theta, float dist, float velocity,
		    float rad, float time, float height)
{
    cout << "\n";
    cout << " Projectile Data\n";
    cout << "\nTheta    : " << theta << " degrees";
    cout << "\nDistance : " << dist << " feet";
    cout << "\nVelocity : " << velocity << " fps";
    cout << "\n";
    cout << "\nRadians  : " << rad;
    cout << "\nTime     : " << time << " seconds";
    cout << "\nHeight   : " << height << " feet";
}

void activity3()
{
    float theta, dist, velocity;
    float rad, time, height;

    clrscr();

    theta = get_theta();
    dist = get_dist();
    velocity = get_velocity();

    rad = theta * pi / 180;

    time = compute_time(theta, dist, velocity);
    height = compute_height(theta, velocity, time);

    display_result(theta, dist, velocity, rad, time, height);

    getch();
}

float get_score()
{
    float score;

input:

    cin >> score;

    if(score < 60)
    {
	cout << "Invalid Input!!! Enter Again:  ";
	goto input;
    }

    if(score > 100)
    {
	cout << "Invalid Input!!! Enter Again:  ";
	goto input;
    }

    return(score);
}

float compute_classtanding(float mq1, float mq2, float mq3,
			   float lab1, float lab2, float lab3)
{
    float mquiz_ave;
    float lab_ave;
    float classtanding;

    mquiz_ave = (mq1 + mq2 + mq3) / 3;
    lab_ave = (lab1 + lab2 + lab3) / 3;

    classtanding = (2 * mquiz_ave + lab_ave) / 3;

    return(classtanding);
}

float compute_midterm(float cs, float exam)
{
    float midterm;

    midterm = (2 * cs + exam) / 3;

    return(midterm);
}

float determine_pointgrade(float grade)
{
    float point;

    if(grade >= 98)
	point = 1.00;
    else if(grade >= 95)
	point = 1.25;
    else if(grade >= 92)
	point = 1.50;
    else if(grade >= 89)
	point = 1.75;
    else if(grade >= 86)
	point = 2.00;
    else if(grade >= 83)
	point = 2.25;
    else if(grade >= 80)
	point = 2.50;
    else if(grade >= 77)
	point = 2.75;
    else if(grade >= 75)
	point = 3.00;
    else if(grade >= 72)
	point = 4.00;
    else
	point = 5.00;

    return(point);
}

void print_result(char name[], float grade, float point)
{
    cout << "\n\nStudent Name       : " << name;
    cout << "\nMidterm Grade      : " << grade;
    cout << "\nPoint Grade        : " << point;

    if(point <= 3.00)
	cout << "\nRemark             : CONGRATS!!! YOU PASSED";
    else
	cout << "\nRemark             : SORRY YOU FAILED";
}

void activity4()
{
    char name[30];
    char ans;

    float mq1, mq2, mq3;
    float lab1, lab2, lab3;
    float exam;
    float classtanding;
    float midterm;
    float point;

top:

    clrscr();

    cout << " STUDENT GRADE EVALUATION\n";

    cout << "ENTER STUDENT NAME : ";
    gets(name);

    cout << "ENTER MQ1          : ";
    mq1 = get_score();

    cout << "ENTER MQ2          : ";
    mq2 = get_score();

    cout << "ENTER MQ3          : ";
    mq3 = get_score();

    cout << "ENTER LAB1         : ";
    lab1 = get_score();

    cout << "ENTER LAB2         : ";
    lab2 = get_score();

    cout << "ENTER LAB3         : ";
    lab3 = get_score();

    cout << "ENTER MIDTERM EXAM : ";
    exam = get_score();

    classtanding = compute_classtanding(
	mq1, mq2, mq3, lab1, lab2, lab3
    );

    midterm = compute_midterm(classtanding, exam);

    point = determine_pointgrade(midterm);

    print_result(name, midterm, point);

    cout << "\nDo you want to try again (Y/N)?: ";
    cin >> ans;

    if(tolower(ans) == 'y')
	goto top;

    cout << "THANK YOU FOR USING THE APP.";

    getch();

    return;
}

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
	    cout << "|           Remainder  = "
		 << (int)num1 % (int)num2 << "\n";
	    break;

	case '^':
	    cout << "|           Power  = "
		 << pow(num1, num2) << "\n";
	    break;

	case 'e':
	case 'E':
	    cout << "|           Exponential  = "
		 << exp(num1 + num2) << "\n";
	    break;

	default:
	    cout << "|           Invalid operator!\n";
    }

    cout << "+----------------------------------------+";
}

void activity5()
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

void main()
{
    int choice;
    char answer;

    do
    {
	clrscr();

	cout << "\n";
	cout << "====================================\n";
	cout << "          M A I N   M E N U\n";
	cout << "====================================\n";
	cout << "\n";
	cout << "       [1] Circle\n";
	cout << "       [2] Yard Convertion\n";
	cout << "       [3] Function\n";
	cout << "       [4] Grade Evaluation\n";
	cout << "       [5] Simple Calculator\n";
	cout << "       [6] End\n";
	cout << "\n";
	cout << "------------------------------------\n";
	cout << "       Select Option : ";
	cin >> choice;
	cout << "------------------------------------\n";

	switch(choice)
	{
	    case 1:
		activity1();
                break;

            case 2:
                activity2();
                break;

            case 3:
                activity3();
                break;

            case 4:
                activity4();
                break;

            case 5:
                activity5();
                break;

            case 6:
                cout << "\nDo you really want to end? (Y/N): ";
                cin >> answer;

                if(tolower(answer) == 'y')
                    return;

                break;

            default:
                cout << "\nInvalid choice!";
                getch();
        }

    } while(1);
}
