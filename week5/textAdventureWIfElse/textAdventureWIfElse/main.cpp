//
//  main.cpp
//  textAdventureWIfElse
//
//  Created by Courtney Snavely on 9/24/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//


#include <iostream>
using namespace std;

int state{ 1 };

int main()
{
    do {
        if (state == 1) {
            char firstChoice;
            cout << "Welcome to the jungle safari! Please sign a waiver... You can go either \n A) Inland or B) Water \n";
            cin >> firstChoice;
            if (firstChoice == 'A' || firstChoice == 'a') {
                state = 2;
            }
            else if (firstChoice == 'B' || firstChoice == 'b') {
                state = 3;
            }
        }
        else if (state == 2) {
            char secondChoice;
            cout << "you've decided to go inland! you can either take \n A) Car or B) Walk \n";
            cin >> secondChoice;
            if (secondChoice == 'A' || secondChoice == 'a') {
                state = 4; //car
            }
            else if (secondChoice == 'B' || secondChoice == 'b') {
                state = 5; //walk
            }
        }
        else if (state == 4) {
            char choice;
            cout << "you've ran out of gas! now you have to walk. GAME OVER. \n Do you want to try again? \n Y/N?";
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                state = 1;
            }
            else {
                state = 0;
            }
            
        }// walk
    } while (state != 0);
    cout << state;
    return 0;
}
