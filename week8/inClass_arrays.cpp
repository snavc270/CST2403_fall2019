//
//  inClass_arrays.cpp
//  
//
//  Created by Courtney Snavely on 10/15/19.
//


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>

using namespace std;




int main()
{
    const int size = 30;
    int numbers[size];
    /*numbers[2] = 34;
     cin >> numbers[4];
     
     numbers[0] = numbers[2] + numbers[4];
     //cout << numbers[0]; */
    
    
    
    //assigning random values to numbers array
    /*unsigned int seed{ 0 };
     
     cout << "Enter seed: ";
     cin >> seed;
     srand(seed);
     for (int i = 0; i < size; i++) {
     numbers[i] = (-100 + rand() % 200);//assign random values to array
     cout << numbers[i] << endl;
     }
     */
    //assign values in an array list
    
    int grades[] = { 89, 67, 90, 96, 78, 89, 96, 70 };
    
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        //sum of all the grades, divide by the number of grades
        
        sum = grades[i] + sum;
        
    }
    int average = sum / 8;
    cout << average;
    return 0;
    
}
