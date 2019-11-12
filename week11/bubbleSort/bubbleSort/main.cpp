#include <iostream>
using namespace std;
void sortArray(int array[], int size);

int main(){
    const int ARRAY_SIZE = 7;
    int numbers [ARRAY_SIZE] = {10, 30, 50, 3, 23, 4, 5};
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<< numbers[i] << ",";
    }
    cout << endl;
    
    sortArray(numbers, ARRAY_SIZE);
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<< numbers[i] << ",";
    }
        cout << endl;
}



void sortArray(int array[], int size){
    bool swap; //should the numbers be swapped
    int temp;
    
    do{
        swap = false;
        for(int count = 0; count < (size-1); count++){
            if(array[count] > array[count + 1]){
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
            }
        }
    }while(swap);
}
