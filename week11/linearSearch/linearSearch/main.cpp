//
//  main.cpp
//  linearSearch
//
//  Created by Courtney Snavely on 11/11/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;
int searchList(int list[], int numElems, int value);

int main(){
    const int ARRAY_SIZE = 8;
    int numbers [ARRAY_SIZE] = {10, 30, 50, 3, 23, 4, 5};
    
    int val = searchList(numbers, ARRAY_SIZE, 4); //call our function, search for the value 4
    cout<< "the number 4 is at index position  : " << val << endl;
}

int searchList(int list[], int numElems, int value)
{
    int index = 0;      // Used as a subscript to search array
    int position = -1;  // To record position of search value
    bool found = false; // Flag to indicate if value was found
    
    while (index < numElems && !found)
    {
        if (list[index] == value) // If the value is found
        {
            found = true; // Set the flag
            position = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    return position; // Return the position, or -1
}
