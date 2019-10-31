//
//  main.cpp
//  stlVector
//
//  Created by Courtney Snavely on 10/30/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main(int argc, const char * argv[]) {
    vector<int> integers1(7);
    vector<int> integers2(10);
    
    cout<< "size of integers 1 is: " << integers1.size() << endl;
    outputVector(integers1);
    
    cout << "enter integers" <<endl;
    inputVector(integers2);
    
    return 0;
}

void outputVector(const vector<int>& items){
    for(int item : items){
        cout << item << " ";
    }
}

void inputVector(vector<int>& items){
    for(int& item : items){
        cin >> item;
    }
}
