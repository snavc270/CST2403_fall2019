//
//  main.cpp
//  HowOldAreYou
//
//  Created by Courtney Snavely on 9/12/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int age = 0;
    cout << "how old are you ? \n";
    cin >> age;

    cout << age;
    
    //our input validation will only work for integers
    //the loop will run infinitely if characters are entered because it isn't caught by any of our logic
    while(age <= 0 || age >= 200){
        cout<< "please enter a valid age \n";
        cin >> age;
    }
    
    //we haven't gone over this, but .fail() will check if your input matches the variable type you've defined
//    if (cin.fail()){
//
//    }
    
    if (age > 0 && age<18){
        cout << "you're a minor";
    }else if(age < 21 && age >=18){
        cout << "you're a young adult";
    }else if(age < 25 && age >= 21){
        cout << "you can do most things";
    }else if(age >=25){
        cout << "YOU CAN DO ANYTHING";
    }
    
    return 0;
}
