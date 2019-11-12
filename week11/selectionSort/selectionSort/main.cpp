#include <iostream>
using namespace std;
void selectionSort(int array[], int size);

int main(){
    const int ARRAY_SIZE = 7;
    int numbers [ARRAY_SIZE] = {10, 30, 50, 3, 23, 4, 5};
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<< numbers[i] << ",";
    }
    cout << endl;
    
    selectionSort(numbers, ARRAY_SIZE);
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<< numbers[i] << ",";
    }
    cout << endl;
}

void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan]; 
        for(int index = startScan + 1; index < size; index++)
        {
             if (array[index] < minValue){
                 minValue = array[index];
                 minIndex = index;
             }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
       }
 }
