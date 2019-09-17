//
//  main.cpp
//  forLoops
//
//  Created by Courtney Snavely on 9/16/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int count;
    
    for (count = 1; count <= 5; count++)
        cout << "Hello" << endl;

    int x, y;
    for (x=1, y=1; x <= 5; x++, y++)
    {
        cout << x << " plus " << y
        << " equals " << (x+y)
        << endl;
    }
    
    
    return 0;
}
