#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

float get_score();
float compute_classtanding(float mq1, float mq2, float mq3, float lab1, float lab2, float lab3);
float compute_midterm(float cs, float exam);
float determine_pointgrade(float grade);
void print_result(char name[], float grade, float pointgrade);

float get_score()
{

float score;

input:

cin>> score;

if(score<60)
{

cout<< "Invalid Input!!! Enter Again:  ";

goto input;
}

if(score>100)
{

cout<< "Invalid Input!!! Enter Again:  ";
goto input;
}

return(score);
}

float compute_classtanding(float mq1, float mq2, float mq3, float lab1, float lab2, float lab3)
{

float mquiz_ave;
float lab_ave;
float classtanding;

mquiz_ave = (mq1+mq2+mq3) / 3;
lab_ave = (lab1+lab2+lab3) / 3;

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

if(grade>=98)
  point=1.00;
else if(grade>=95)
  point=1.25;
else if(grade>=92)
  point=1.50;
else if(grade>=89)
  point=1.75;
else if(grade>=86)
  point=2.00;
else if(grade>=83)
  point=2.25;
else if(grade>=80)
  point=2.50;
else if(grade>=77)
  point=2.75;
else if(grade>=75)
  point=3.00;
else if(grade>=72)
  point=4.00;
else
  point=5.00;

  return(point);
}

void print_result(char name[], float grade, float point)
{
cout<<"\n\nStudent Name: "<<name;
cout<<"\nMidterm Grade: "<<grade;
cout<<"\nPoint Grade: "<<point;

if(point<=3.00)
   cout<<"\nRemark:CONGRATS!!! YOU PASSED";
else
   cout<<"\nRemark:SORRY YOU FAILED";
}

int main()
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

cout<<" STUDENT GRADE EVALUATION\n";

cout<<" ENTER STUDENT NAME: ";
gets(name);

cout<<"ENTER MQ1: ";
mq1=get_score();

cout<<"ENTER MQ2: ";
mq2=get_score();

cout<<"ENTER MQ3: ";
mq3=get_score();

cout<<"ENTER LAB1: ";
lab1=get_score();

cout<<"ENTER LAB2: ";
lab2=get_score();

cout<<"ENTER LAB3: ";
lab3=get_score();

cout<<"ENTER MIDTERM EXAM: ";
exam=get_score();

classtanding=compute_classtanding(mq1,mq2,mq3,lab1,lab2,lab3);

midterm=compute_midterm(classtanding,exam);

point=determine_pointgrade(midterm);

print_result(name,midterm,point);

cout<<"\nDo you want to try again (Y/N)?: ";
cin>>ans;

if(tolower(ans)=='y')
   goto top;

cout<<"THANK YOU FOR USING THE APP.";

getch();

return(0);
}