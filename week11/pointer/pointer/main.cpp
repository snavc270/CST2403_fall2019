
#include <iostream>
using namespace std;

int main(){
    int x = 25;
    int *pointer;
    
    pointer = &x; //setting the address of the variable to the pointer
    cout << "The value of x is : " << x << endl;
    cout << "The address of x is : " << pointer << endl;
    
    cout << "The value of at " << pointer << " is : " << *pointer << endl;
    return 0;
}
