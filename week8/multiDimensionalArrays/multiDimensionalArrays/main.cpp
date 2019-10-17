//
//  main.cpp
//  multiDimensionalArrays
//
//  Created by Courtney Snavely on 10/16/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;

//two dimensional array needs size specifications for rows and columns
const size_t rows{2};
const size_t cols{3};
//what if we change the size of our array?

//prototype to print our array
void printArray(const array<array<int, cols>, rows>&); //creating a reference back to our previously initialized const values

int main(int argc, const char * argv[]) {
    array<array<int, cols>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, cols>, rows> array2{1, 2, 3, 4, 5};
    
    cout << "Values in array 1 by row are: "<< endl;
    printArray(array1);
    cout << "Values in array 2 by row are: "<< endl;
    printArray(array2);
}

void printArray(const array<array<int, cols>, rows>& a){
    for(auto const& row : a){// for every item a in the array row
        for(auto const& element : row){
            cout << element << ' ';
        }
        cout << endl;
    }
}
