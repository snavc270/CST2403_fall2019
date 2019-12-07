//
//  main.cpp
//  timeClass
//
//  Created by Courtney Snavely on 12/4/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

void displayTime(const string& message, const Time& time){
    cout << message << "\nUniversial time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main(){
    Time t; //instance; object t created from class Time
    
    displayTime("Initial time: ", t);
    
    t.setTime(10, 45, 23); // try assigning an invalid time
    displayTime("after setTime: ", t);
    
    try{
        t.setTime(66, 90, 57);
    }
    catch(invalid_argument& e){
        cout << "Exception: " << e.what() << "\n\n";
    }
    displayTime("After attempting to set an invalid time: " , t); 
    
}
