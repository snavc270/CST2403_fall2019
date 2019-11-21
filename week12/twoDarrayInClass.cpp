#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//get a random number and store in a pointer
int *getRandomNumber(int size);

int main()
{
    //have user decide how many random numbers will be generated
    int num;
    cout << "How many random numbers do you want to generate? \n";
    cin >> num;
    //call your function
    cout << *getRandomNumber(num);
    for (int i = 0; i < num; i++) {
        cout << *(getRandomNumber(num) + i) << ", ";
    }
    cout << endl;
    //display values from your array
    return 0;
}

int *getRandomNumber(int size) {
    int *array;
    
    if (size <= 0) {
        return NULL;
    }
    array = new int[size]; //dynamically creating memory space to
    //store our random numbers
    srand(time(0));
    
    for (int i = 0; i < size; i++) {
        array[i] = rand();
    }
    return array;
}

