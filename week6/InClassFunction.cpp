//
//  InClassFunction.cpp
//  
//
//  Created by Courtney Snavely on 10/3/19.
//

#include <stdio.h>
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
//prototype
int maxValue(int a, int b, int c);

int main()
{
    unsigned int seed{ 0 }; //
    char answer;
    //prompt user to enter pseudo random seed
    do {
        /*cout << "Please enter seed value";
         cin >> seed;
         srand(seed);
         
         cout << (rand() % 6 + 1) << endl;
         */
        int number1, number2, number3;
        cout << "enter 3 numbers";
        cin >> number1 >> number2 >> number3;
        cout<< maxValue(number1, number2, number3) << endl;
        cout << "Do you want to roll again?\n Y or N?\n";
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');
    return 0;
}

//function to find the maximum value
int maxValue(int a, int b, int c) {
    int maxValue{ a };
    if (b > maxValue) {
        maxValue = b;
    }
    if (c > maxValue) {
        maxValue = c;
    }
    return maxValue;
}
