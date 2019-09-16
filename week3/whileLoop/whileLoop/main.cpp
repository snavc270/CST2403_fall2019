//
//  main.cpp
//  whileLoop
//
//  Created by Courtney Snavely on 9/16/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number = 1;
    
    //basic while loop
    while (number <= 5){ //exit condition for our loop
        //without an exit condition, your loop will run infinitely and will crash your computer
        
        cout << "HELLOOOOOO \n";
        number ++; //increments through our loop
    }
    cout << "k, bye! \n";
    
    //while loop for input validation
    int numberPlayers;
    int maxPlayers = 10;
    int minPlayers = 3;
    cout << "how many players do you want per team? \n" ;
    cin >> numberPlayers;
    
    while (numberPlayers <= minPlayers || numberPlayers >= maxPlayers){ // while the numbers of players is NOT within the desired range...
        
        cout << "you should have at least " << minPlayers << " but no more than " << maxPlayers << ".\n";
        cout << "how many players do you want per team?"; //prompt the user again
        cin >> numberPlayers; //store new input to numberPlayers variable
        
    }
    return 0;
}
