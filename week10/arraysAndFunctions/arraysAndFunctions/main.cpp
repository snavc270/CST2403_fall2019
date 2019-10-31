#include <iostream>
using namespace std;

void showValues(int [], int); //passing through an array of int and int

int main(){
    const int ARRAY_SIZE = 8;
    int numbers [ARRAY_SIZE] = {10, 30, 50, 3, 23, 4, 5};
    
    showValues(numbers, ARRAY_SIZE);
    return 0;
}

void showValues(int nums[], int size){
    for(int i = 0; i<size; i++){
        cout << nums[i] << " ";
        cout<< endl;
    }
}
