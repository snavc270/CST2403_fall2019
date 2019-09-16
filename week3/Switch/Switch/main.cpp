//
//  main.cpp
//  Switch
//
//  Created by Courtney Snavely on 9/16/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char choice; // creating a switch using a char; remember this will correspond to a numeric code within the ASCII table

    cout << "Enter A, B, or C: \n";

    cin >> choice; //assigning the first user input to the choice variable

    //try running your switch without the break statements to see what it does...
    switch (choice){
        case 'A': cout << "Congrats! You entered A. \n";
            break;
        case 'B': cout << "BOOOOO you entered B. \n";
            break;
        case 'C': cout << "Okay, you entered C. \n";
            break;
        default: cout << "You didn't enter any of the things I told you too :/ ";
    }

    //example using int for switch instead of char
//    int modelNumber;
//
//    cout << "What model tv do you want...200, 300 or 500? \n";
//    cin >> modelNumber;
//
//    cout << "oHHHHHH that model has the following features: ";
//
//    switch(modelNumber){
//        case 200: cout << "\t picture and picture. \n"; //\t = tab
//            break;
//        case 300: cout << "\t stereo sound. \n";
//            break;
//        case 500: cout << "\t remote control. \n";
//            break;
//        default: cout << "that isn't even a model option...";
//    }
    
    return 0;
    
}
