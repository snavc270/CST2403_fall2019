#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    double *sales, total = 0.0, average = 0;
    
    int numberDays;
    
    cout << "How many days of sales do you need to process? " << endl;
    cin >> numberDays;
    
    sales = new double[numberDays];
    // have user enter sales figures
    cout << "Please, enter your sales figures: " << endl;
    for (int i = 0; i < numberDays; i++) {
        cout << "Day: " << (i + 1) << ": ";
        cin >> sales[i]; //*(sales+i)
    }
    
    for (int i = 0; i < numberDays; i++) {
        total += sales[i];
    }
    average = total / numberDays;
    
    cout << "The average sales over the past "
    << numberDays << " days was : " << average << endl;
    
    delete[] sales;
    sales = 0;
    
    return 0;
}
