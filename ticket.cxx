#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define Regular_fare 220.00
#define Student_discount 20.00
#define Senior_discount 30.00
#define Matinee_discount 40.00
#define Double_discount 10.00

void get_name(char name[])
{
  cout<<"Enter Customer Name: ";
  gets(name);
}

int get_age()
{
  int age;

  cout<<"Enter your age: ";
  cin>>age;

  return(age);
}

int get_type()
{
  int type;
  cout<<"\n";
  cout<<"1 - Student\n";
  cout<<"2 - Senior\n";
  cout<<"3 - Regular\n";

  cout<<"Customer Type: ";
  cin>>type;

  return(type);
}

int get_matinee()
{
  int matinee;

  cout<<"Is the movie showing before 5 PM? (1 = True, 0 = False: ";
  cin>>matinee;

  return(matinee);
}

float determine_rate(int age,int type,int matinee)
{
  float fare;

  fare = Regular_fare;

  if(type==1)
    fare = fare - Student_discount;
  if(type==2 && age >=60)
    fare = fare - Senior_discount;
  else if(matinee==1)
    fare = fare - Matinee_discount;
  if(type==1 && age < 18)
    fare = fare - Double_discount;

   return(fare);
}

void display_result(char name[],int age,int matinee, float fare)
{
  cout<<"\nTRANSACTION SUMMARY";
  cout<<"\n\n\n";

  cout<<"Customer Name; "<<name;
  cout<<"Age: "<<age;

  if(matinee==1)
     cout<<"\nMatinee: True";
  else
     cout<<"\nMatinee: False";
  cout<<"\nFinal Price: PHP "<<fare;
}

void main()
{
  char name[67];
  int age;
  int type;
  int matinee;
  float fare;
  char ans;

top:
  clrscr();

  get_name(name);
  age = get_age();
  type = get_type();
  matinee = get_matinee();
  fare = determine_rate(age,type,matinee);

  display_result(name,age,matinee,fare);

  cout<<"\nAnother Transaction(Y/N)?: ";
  cin>>ans;

  if(tolower(ans)=='y')
  goto top;

  getch();
}

