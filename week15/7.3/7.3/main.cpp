//
//  main.cpp
//  7.3
//
//  Created by Courtney Snavely on 12/12/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    //a)
   const int SIZE {10};
    
//    double doubleArray[SIZE];
    
    double doubleArray[] = {0,0,0,0,0,0,0,0,0,0};
    //c) + d)
    doubleArray[3] = 4;
    cout << doubleArray[3] << endl;
    
    //e)
    doubleArray[8] = 1.677;
    
    //f)
    doubleArray[6] = 3.333;
    
    //h)
    
    for(int i= 0; i<SIZE; i++){
        cout << setprecision(3) << doubleArray[i] << endl;
    }
}
