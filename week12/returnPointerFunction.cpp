#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    const int numStudents = 3;
    const int numHW = 3;
    
    int grades[numStudents][numHW] = { {95, 90, 91},{80, 85, 89},{91,82,83} };
    double averageGrades[numStudents];
    double average;
    double total; // for each student
    for (int i = 0; i < numStudents; i++) {
        total = 0;
        for (int j = 0; j < numHW; j++) {
            total += grades[i][j];
            cout << "The score at : " << i << ", " << j << " is : ";
            cout << grades[i][j] << endl;
        }
        average = total / numHW;
        averageGrades[i] = average;
        cout << "the average for student " << (i + 1) << " is : " << average << endl;
    }
    cout << averageGrades[1]; //printing out the average for student 2
    return 0;
}
