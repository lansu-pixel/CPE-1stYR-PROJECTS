#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define SIZE 100

struct grade
{
    char name[30];
    float lab1,lab2,q1,q2,mex,mg;
    float flab1,flab2,fq1,fq2,fex,tfg;
    float fg;
    char remarks[10];
};
grade student[SIZE] =
{
    {"Jose Manalo",85,80,86,80,75,0,65,90,91,92,93,0,0,""},
    {"Katrine Bernardo",90,91,92,93,94,0,95,96,97,98,99,0,0,""},
    {"Janice Dela Cruz",75,80,81,82,83,0,84,85,86,87,88,0,0,""},
    {"John Santos",65,75,76,77,78,0,80,81,82,83,84,0,0,""},
    {"Christian Zabala",70,79,82,83,77,0,99,95,94,93,92,0,0,""}
};

void computeGrades(int i)
{
    student[i].mg=(2.0/3.0)*((student[i].q1+student[i].q2)/2)+(1.0/3.0)*((student[i].lab1+student[i].lab2)/2);
    student[i].tfg=(2.0/3.0)*((student[i].fq1+student[i].fq2)/2)+(1.0/3.0)*((student[i].flab1+student[i].flab2)/2);
    student[i].fg=(student[i].mg+student[i].tfg)/2;
    if(student[i].fg>=75)
    {
	student[i].remarks[0]='P';
	student[i].remarks[1]='A';
	student[i].remarks[2]='S';
	student[i].remarks[3]='S';
	student[i].remarks[4]='E';
	student[i].remarks[5]='D';
	student[i].remarks[6]='\0';
    }
    else
    {
	student[i].remarks[0]='F';
	student[i].remarks[1]='A';
	student[i].remarks[2]='I';
	student[i].remarks[3]='L';
	student[i].remarks[4]='E';
	student[i].remarks[5]='D';
	student[i].remarks[6]='\0';
    }
}

void displayStudent(int i)
{
    printf("%-18s",student[i].name);
    printf("%-6.1f%-6.1f%-6.1f%-6.1f%-6.1f%-6.2f\n",student[i].lab1,student[i].lab2,student[i].q1,student[i].q2,student[i].mex,student[i].mg);
    printf("%-18s","");
    printf("%-6.1f%-6.1f%-6.1f%-6.1f%-6.1f%-6.2f%-6.2f%-10s\n",student[i].flab1,student[i].flab2,student[i].fq1,student[i].fq2,student[i].fex,student[i].tfg,student[i].fg,student[i].remarks);
}

void addData()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
	if(student[i].name[0]=='\0')
	    break;
    }
    if(i==SIZE)
    {
	cout<<"\nStructure is full!";
	return;
    }
    cout<<"\nEnter Student Name : ";
    gets(student[i].name);
    cout<<"Enter LAB1           : ";
    cin>>student[i].lab1;
    cout<<"Enter LAB2           : ";
    cin>>student[i].lab2;
    cout<<"Enter Q1             : ";
    cin>>student[i].q1;
    cout<<"Enter Q2             : ";
    cin>>student[i].q2;
    cout<<"Enter MEX            : ";
    cin>>student[i].mex;
    cout<<"Enter FLAB1          : ";
    cin>>student[i].flab1;
    cout<<"Enter FLAB2          : ";
    cin>>student[i].flab2;
    cout<<"Enter FQ1            : ";
    cin>>student[i].fq1;
    cout<<"Enter FQ2            : ";
    cin>>student[i].fq2;
    cout<<"Enter FEX            : ";
    cin>>student[i].fex;
    computeGrades(i);
    cout<<"\nData added successfully!\n\n";
    cout<<"NAME              LAB1  LAB2  Q1    Q2    MEX   MG\n";
    cout<<"                  FLAB1 FLAB2 FQ1   FQ2   FEX   TFG   FG    REMARKS\n";
    cout<<"--------------------------------------------------------------------------\n";
    displayStudent(i);
}

void searchData()
{
    char searchName[30];
    int i,found=0;
    cout<<"\nEnter name to search: ";
    gets(searchName);
    for(i=0;i<SIZE;i++)
    {
	if(student[i].name[0]=='\0')
	    break;
	if(strcmp(student[i].name,searchName)==0)
	{
	    cout<<"\nRecord Found:\n\n";
	    cout<<"NAME              LAB1  LAB2  Q1    Q2    MEX   MG\n";
	    cout<<"                  FLAB1 FLAB2 FQ1   FQ2   FEX   TFG   FG    REMARKS\n";
	    cout<<"--------------------------------------------------------------------------\n";
	    displayStudent(i);
	    found=1;
	    break;
	}
    }
    if(found==0)
	cout<<"\nRecord not found!";
}

void editData()
{
    char searchName[30];
    int i,found=0;
    cout<<"\nEnter name to edit: ";
    gets(searchName);
    for(i=0;i<SIZE;i++)
    {
	if(student[i].name[0]=='\0')
	    break;
	if(strcmp(student[i].name,searchName)==0)
	{
	    found=1;
	    cout<<"\nBEFORE EDIT:\n\n";
	    cout<<"NAME              LAB1  LAB2  Q1    Q2    MEX   MG\n";
	    cout<<"                  FLAB1 FLAB2 FQ1   FQ2   FEX   TFG   FG    REMARKS\n";
	    cout<<"--------------------------------------------------------------------------\n";
	    displayStudent(i);
	    cout<<"\nEnter new LAB1 : ";
	    cin>>student[i].lab1;
	    cout<<"Enter new LAB2   : ";
	    cin>>student[i].lab2;
	    cout<<"Enter new Q1     : ";
	    cin>>student[i].q1;
	    cout<<"Enter new Q2     : ";
	    cin>>student[i].q2;
	    cout<<"Enter new MEX    : ";
	    cin>>student[i].mex;
	    cout<<"Enter new FLAB1  : ";
	    cin>>student[i].flab1;
	    cout<<"Enter new FLAB2  : ";
	    cin>>student[i].flab2;
	    cout<<"Enter new FQ1    : ";
	    cin>>student[i].fq1;
	    cout<<"Enter new FQ2    : ";
	    cin>>student[i].fq2;
	    cout<<"Enter new FEX    : ";
	    cin>>student[i].fex;
	    computeGrades(i);
	    cout<<"\nAFTER EDIT:\n\n";
	    cout<<"NAME              LAB1  LAB2  Q1    Q2    MEX   MG\n";
	    cout<<"                  FLAB1 FLAB2 FQ1   FQ2   FEX   TFG   FG    REMARKS\n";
	    cout<<"--------------------------------------------------------------------------\n";
	    displayStudent(i);
	    break;
	}
    }
    if(found==0)
	cout<<"\nRecord not found!";
}

void saveData()
{
    char filename[30];
    FILE *fp;
    cout<<"\nEnter file name: ";
    gets(filename);
    fp=fopen(filename,"wb");
    if(fp==NULL)
    {
	cout<<"\nUnable to open file!";
	return;
    }
    fwrite(student,sizeof(grade),SIZE,fp);
    fclose(fp);
    cout<<"\nData saved successfully!";
}

void loadData()
{
    char filename[30];
    FILE *fp;
    cout<<"\nEnter file name: ";
    gets(filename);
    fp=fopen(filename,"rb");
    if(fp==NULL)
    {
	cout<<"\nUnable to open file!";
	return;
    }
    fread(student,sizeof(grade),SIZE,fp);
    fclose(fp);
    cout<<"\nData loaded successfully!";
}

void displayAll()
{
    int i;
    cout<<"\nSTUDENT GRADE RECORDS\n\n";
    cout<<"NAME              LAB1  LAB2  Q1    Q2    MEX   MG\n";
    cout<<"                  FLAB1 FLAB2 FQ1   FQ2   FEX   TFG   FG    REMARKS\n";
    cout<<"--------------------------------------------------------------------------\n";
    for(i=0;i<SIZE;i++)
    {
	if(student[i].name[0]=='\0')
	    break;
	displayStudent(i);
	cout<<"--------------------------------------------------------------------------\n";
    }
}

int main()
{
    int choice,i;
    for(i=0;i<SIZE;i++)
    {
	if(student[i].name[0]=='\0')
	    break;
	computeGrades(i);
    }

    do
    {
	clrscr();

	cout<<"\n============================================================";
	cout<<"\n              STUDENT GRADE SYSTEM";
	cout<<"\n============================================================";
	cout<<"\n[1] Add data to structure then compute";
	cout<<"\n[2] Search and display searched Data";
	cout<<"\n[3] Edit Data and display before and after";
	cout<<"\n[4] Save data to the file";
	cout<<"\n[5] Load or Open File";
	cout<<"\n[6] Display All content of Structure";
	cout<<"\n[7] End";
	cout<<"\n============================================================";
	cout<<"\nEnter choice: ";
	cin>>choice;

	clrscr();
	switch(choice)
	{
	    case 1:
		addData();
		break;
	    case 2:
		searchData();
		break;
	    case 3:
		editData();
		break;
	    case 4:
		saveData();
		break;
	    case 5:
		loadData();
		break;
	    case 6:
		displayAll();
		break;
	    case 7:
		cout<<"\nProgram ended.";
		break;
	    default:
		cout<<"\nInvalid choice!";
	}
	if(choice!=7)
	{
	    cout<<"\n\nPress any key to continue...";
	    getch();
	}
    }while(choice!=7);
    return 0;
}
