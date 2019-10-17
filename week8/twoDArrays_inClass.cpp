
Courtney Snavely <snavc270@newschool.edu>
9:41 AM (1 hour ago)
to me

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;

/*
 void staticArray(); // prototype for static array
 void automaticArray();
 
 const size_t arraySize{ 3 }; //how you define size using array libray
 
 int main()
 {
 staticArray();
 
 staticArray();
 staticArray();
 
 automaticArray();
 automaticArray();
 
 return 0;
 }
 
 void staticArray(void) //passing void data
 {
 static array<int, arraySize> array1;
 
 cout << "values on array initialization : \n";
 
 for (int i = 0; i < array1.size(); i++) {
 cout << "array1 at " << i << " is = " << array1[i] << endl;
 }
 
 for (int i = 0; i < array1.size(); i++) {
 array1[i] += 5;
 }
 //modify array 1 within this function
 //multiple, calculate sum,
 }
 
 void automaticArray() {
 array<int, arraySize> array2{ 2, 4, 7 };
 
 for (int i = 0; i < array2.size(); i++) {
 cout << "array2 at " << i << " is = " << array2[i] << endl;
 }
 for (int i = 0; i < array2.size(); i++) {
 array2[i] += 5;
 }
 }
 */

const size_t rows{ 3 };
const size_t cols{ 4 };

//prototype
void printArray(const array<array<int, cols>, rows>&);

int main() {
    array<array<int, cols>, rows> array1{34, 21, 30, 20, 103, 94, 12,32, 46, 70, 20, 48};
    printArray(array1);
}
//definition
void printArray(const array<array<int, cols>, rows>& a) {
    for (auto const& row : a) {
        for (auto const& col : row) {
            cout << col << ' ';
        }
        cout << endl;
    }
}

