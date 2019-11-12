#include <iostream>
using namespace std;
int binarySearch(int list[], int numElems, int value);

int main(){
    const int ARRAY_SIZE = 8;
    int numbers [ARRAY_SIZE] = {10, 30, 50, 3, 23, 4, 5};
    
    int val = binarySearch(numbers, ARRAY_SIZE, 4); //call our function, search for the value 4
    cout<< "the number 4 is at index position  : " << val << endl;
}

int binarySearch(int array[], int size, int value)
{
    int first = 0,             // First array element
    last = size - 1,       // Last array element
    middle,                // Mid point of search
    position = -1;         // Position of search value
    bool found = false;        // Flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (array[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;           // If value is in upper half
    }
    return position;
}
