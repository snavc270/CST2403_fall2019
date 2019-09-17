//
//  main.cpp
//  doWhileLoop
//
//  Created by Courtney Snavely on 9/16/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score1, score2, score3;
    double average;
    char again;
    
    do{
        cout << "Enter 3 scores to be averaged \n";
        cin >> score1 >> score2 >> score3;
        
        average = (score1 + score2 + score3) / 3.0;
        
        cout << "The average is : " << average << "\n";
        
        cout << "Do you need to average another set (Y/N)? \n";
        cin >> again;
        
    } while (again == 'Y' || again == 'y');
    return 0;
}
