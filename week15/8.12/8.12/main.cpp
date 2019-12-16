//
//  main.cpp
//  8.12
//
//  Created by Courtney Snavely on 12/12/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
#include <stdlib.h> //include our random number generator
#include <time.h>
using namespace std;

//random number generator
//squares (position array) from 1-70
//clock ticks every second

//function to move the tortoise  + function to move the hare -- have probability logic to move tortoise + hare
int moveTortoise(int num); //passing our random number
int moveHare(int num);


int main(int argc, const char * argv[]) {
    int T = 1, H= 1;
    
    srand(time(0));
    
    while(T < 70 && H<70){
        if(T >= 1){
            T += moveTortoise(rand()%10 +1);
        }
        if(H >=1){
            H += moveHare(rand()%10 + 1);
        }
        
        for(int i = 1; i<=69; i++){
            if(T ==i){
                cout << "T";
            }else if(H ==i){
                cout << "H";
            }else if(H==i && T==i){
                cout << "ouch";
            }else{
                cout << "-";
            }
        }

        cout << endl;
        
    }
    if(T >= 70){
        cout << "TORTOISE WINS!!!" << endl;
    }else if(H >= 70){
        cout << "HARE WINS !!!" << endl;
    }else{
        cout << "IT'S A TIE!" << endl;
    }
    
    cout << "BANG !!! \nAND THEY'RE OFF!!" << endl;
}

int moveTortoise(int num){
    int move{0};
    
    //4.3
    //6.7
    //9
    
    if(num <= 5){ //50%
        move = 3;
    }
    if(num >5 && num <= 7){ //20%
        move = -6;
    }
    if(num >7){ //30%
        move = 1;
    }
    
    return move;
    //50% move 3 squares right
    //20% move 6 squares left
    //30% move 1 square right
}

int moveHare(int num){
    int move{0};
    
    if(num <= 2){ //20%
        move = 0;
    }
    if(num>2 && num <= 4){ //20%
        move = 9;
    }
    if(num > 5 && num <= 6){ //%10
        move = -12;
    }
    if(num > 6 && num <= 9){
        move = 1;
    }
    if(num >9){
        move = -2;
    }
    return move;
}



