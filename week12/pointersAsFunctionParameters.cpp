#include "stdafx.h"
#include <iostream>
using namespace std;

//get the number from our pointer
void getNumber(int *);
//double the value from our pointer
void doubleNumber(int *);

//void displayPayRates(double [], int size)
void displayPayRates(const double *, int size);
void calcGrossPay(const double *,const double *, int size);
int main()
{
    int number;
    
    getNumber(&number);
    doubleNumber(&number);
    
    cout << "The value of our number is: " << number;
    
    const int SIZE = 6;
    const double payRates[SIZE] = { 16.55, 15.25, 17.45, 12.85, 10.35, 18.75 };
    const double hours[SIZE] = { 20,32,22,25,30,20};
    displayPayRates(payRates, SIZE);
    calcGrossPay(payRates,hours, SIZE);
    return 0;
}

//getting user input, passing the value to
//a pointer address
void getNumber(int *input) {
    cout << "Please, enter an integer: " << endl;
    cin >> *input;
}

void doubleNumber(int *value) {
    *value *= 2;
}

void displayPayRates(const double *rates, int size) {
    for (int i = 0; i < size; i++) {
        cout << "the pay rate for employee number: " << (i + 1);
        cout << "is " << *(rates + i) << endl;
        // cout << "the pay rate for employee number: " << (i + 1);
        //cout << " is " << *(rates + i) * 20 << endl;
    }
    
}

//write a function to calc total pay for 20 hrs
void calcGrossPay(const double *rates, const double *hours, int size) {
    for (int i = 0; i < size; i++) {
        cout << "the pay rate for employee number: " << (i + 1);
        cout << " is " << *(rates + i)*(*hours+i) << endl;
    }
}
