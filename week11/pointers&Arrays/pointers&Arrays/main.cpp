
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {.5, .1, .25, .5, 1.0};
    double *pointer;
    
    int index;
    
    pointer = coins;
    
    //using array syntax
    cout << "The values in the coins array : \n";
    for(index = 0; index < NUM_COINS; index++){
        cout << pointer[index] << " " ;
    }
    cout << endl;
    //using pointer syntax
    cout << "And again using pointer syntax... \n";
    for(index = 0; index< NUM_COINS; index++){
        cout << *(coins + index) << " " ;
    }
    cout << endl;
    
    for(index = 0; index< NUM_COINS; index++){
        cout << *pointer << " ";
        pointer ++;
    }
    
    for(index = 0; index< NUM_COINS; index++){
        pointer --;
        cout << *pointer << " "; //pay attention to order here! 
    }
    
    cout << endl;
    return 0;
}
