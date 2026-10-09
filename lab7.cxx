#include <iostream.h>
#include <conio.h>
#include <stdio.h>

#define NUM_STUD 5

int main()
{
    clrscr();

    char name[NUM_STUD][40] =
    {
        "Jose Manalo",
        "Katrine Bernardo",
        "Janice Dela Cruz",
        "John Santos",
        "Christian Zabala"
    };

    float LAB1[NUM_STUD] = {85,90,75,65,70};
    float LAB2[NUM_STUD] = {80,91,80,75,79};
    float Q1[NUM_STUD] = {86,92,81,76,82};
    float Q2[NUM_STUD] = {80,93,82,77,83};
    float MEX[NUM_STUD] = {75,94,83,78,77};

    float FLAB1[NUM_STUD] = {65,95,84,80,99};
    float FLAB2[NUM_STUD] = {90,96,85,81,95};
    float FQ1[NUM_STUD] = {91,97,86,82,94};
    float FQ2[NUM_STUD] = {92,98,87,83,93};
    float FEX[NUM_STUD] = {93,99,88,84,92};

    float MG[NUM_STUD];
    float TFG[NUM_STUD];
    float FG[NUM_STUD];

    int x;

   

    for(x = 0; x < NUM_STUD; x++)
    {
        MG[x] = ((Q1[x] + Q2[x]) / 2 * (2.0 / 3.0))
               + ((LAB1[x] + LAB2[x]) / 2 * (1.0 / 3.0));

        TFG[x] = ((FQ1[x] + FQ2[x]) / 2 * (2.0 / 3.0))
               + ((FLAB1[x] + FLAB2[x]) / 2 * (1.0 / 3.0));

        FG[x] = (MG[x] + TFG[x]) / 2;
    }

   

    cout << "\n";
    cout << "======================================================================================================================\n";
    cout << "                                                   STUDENT GRADE SYSTEM\n";
    cout << "======================================================================================================================\n";
    cout << "\n";

    cout << "+----------------------+-------+-------+-------+-------+-------+--------+-------+-------+-------+-------+-------+-----\n";

    cout << " |STUDENT NAME|         LAB1  LAB2   Q1    Q2    MEX      MG     FLAB1 FLAB2  FQ1   FQ2  FEX     TFG       FG     REMARKS  |\n";

    cout << "+----------------------+-------+-------+-------+-------+-------+--------+-------+-------+-------+-------+-------+-----\n";

    for(x = 0; x < NUM_STUD; x++)
    {
        if(FG[x] >= 75)
        {
    printf("| %-20s |%5.2f|%5.2f|%5.2f|%5.2f |%5.2f | %6.2f |%5.2f|%5.2f|%5.2f|%5.2f|%5.2f| %6.2f | %6.2f | PASSED   |\n",
                   name[x],
                   LAB1[x],
                   LAB2[x],
                   Q1[x],
                   Q2[x],
                   MEX[x],
                   MG[x],
                   FLAB1[x],
                   FLAB2[x],
                   FQ1[x],
                   FQ2[x],
                   FEX[x],
                   TFG[x],
                   FG[x]);
        }
        else
        {
            printf("| %-20s | %5.2f | %5.2f | %5.2f | %5.2f | %5.2f | %6.2f | %5.2f | %5.2f | %5.2f | %5.2f | %5.2f | %6.2f | %6.2f | FAILED   |\n",
                   name[x],
                   LAB1[x],
                   LAB2[x],
                   Q1[x],
                   Q2[x],
                   MEX[x],
                   MG[x],
                   FLAB1[x],
                   FLAB2[x],
                   FQ1[x],
                   FQ2[x],
                   FEX[x],
                   TFG[x],
                   FG[x]);
        }
    }

    cout << "+----------------------+-------+-------+-------+-------+-------+--------+-------+-------+-------+-------+-------+-----\n";

    getch();
    return(0);
}