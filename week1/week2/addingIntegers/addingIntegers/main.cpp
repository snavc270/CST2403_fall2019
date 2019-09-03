//
//  main.cpp
//  addingIntegers
//
//  Created by Courtney Snavely on 9/1/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //declaring our variables = creating names for them
    //initializing our variables = assigning an initial value to them
    
    int number1{0}; //first variable; initialized to 0
    int number2{0}; //second variable; initialized to 0
    int sum{0};
    //    int number1{0}, number2{0}, sum{0}; //can also initialize on the same line because they are of the same type
    
    std:: cout << "Enter first integer: "; //what our program will output
    std:: cin >> number1; // reads input from user and stores in number1
    
    std:: cout << "Enter second integer: "; //what our program will output
    std:: cin >> number2; // reads input from user and stores in number2
    
    sum = number1 + number2;
    
    std:: cout << "The sum is " << sum << std::endl;
    
}
