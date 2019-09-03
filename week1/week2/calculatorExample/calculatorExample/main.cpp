//
//  main.cpp
//  calculatorExample
//
//  Created by Courtney Snavely on 9/1/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
//instead of repeating "std::cout" we can define std name space before our main function

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    //in class, determine if a number is divisible by 5
    
    int number1{0};
    int number2{0};
    
    cout << "Enter a number: \n";
    cin >> number1;
    
    cout << "Enter a second number to see if it is divisible by the first number: \n";
    cin >> number2;
    
    if(number2 % number1 == 0){
        cout << "That number is divisible by " << number1 << "!";
    }
    if(number2 % number1 != 0){
        cout << "That numbers is NOT divisible by " << number1 << " :/";
    }
}

