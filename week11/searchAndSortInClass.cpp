#include <iostream>
#include <array>
using namespace std;

//linear search
//function to return the index number where a
//particular value is found
int search(int list[], int size, int value);
int binarySearch(int list[], int size, int value);

void selectionSort(int list[], int size);

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers [ARRAY_SIZE] = {2, 3, 5, 6,3,4,7,8,22,1};
    
    int linearSearch = search(numbers, ARRAY_SIZE,1);
    
    int bSearch = binarySearch(numbers, ARRAY_SIZE, 5);
    cout << "binary: " << bSearch << endl;
    
    selectionSort(numbers, ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << numbers[i] << ",";
    }
    cout << endl;
    
    bSearch = binarySearch(numbers, ARRAY_SIZE, 5);
    cout << "linear : " << linearSearch << endl;
    cout << "binary: " << bSearch << endl;
    return 0;
}

int search(int list[], int size, int value) {
    int index = 0;
    int position = -1;
    bool isFound = false;
    
    while (index < size && !isFound) {
        if (list[index] == value) {
            isFound = true;
            position = index;
        }
        index++;
    }
    return position;
}

int binarySearch(int list[], int size, int value) {
    int first = 0, last = size - 1, middle,
    position = -1;
    
    bool isFound = false;
    
    while (first <= last && !isFound) {
        middle = (first + last) / 2;
        if (list[middle] == value) {
            isFound = true;
            position = middle;
        }
        else if (list[middle] > value) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    return position;
}

void selectionSort(int list[], int size) {
    int startIndex, minIndex, minValue;
    for (startIndex = 0; startIndex < size - 1; startIndex++) {
        minIndex = startIndex;
        minValue = list[startIndex];
        for (int i = startIndex; i < size; i++) {
            if (list[i] < minValue) {
                minValue = list[i];
                minIndex = i;
            }
        }
        list[minIndex] = list[startIndex];
        list[startIndex] = minValue;
    }
}


