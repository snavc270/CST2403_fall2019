//
//  main.cpp
//  functions_InClass
//
//  Created by Courtney Snavely on 10/10/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//



#include <iostream>
using namespace std;

void showLocal(int n);
void staticVariable();
void doubleNum(int &);

int globalVariable;
int main()
{
    int ref = 5;
    cout << "global variable is : " << globalVariable << endl;
    /*showLocal(2);
     showLocal(5);
     
     for (int i = 0; i < 100; i++) {
     staticVariable();
     }*/
    cout << ref << endl;
    doubleNum(ref);
    cout << ref << endl;
    return 0;
}

//using a reference
void doubleNum(int &refVar) {
    refVar *= 2;
}

//without reference
void showLocal(int n) {
    int localVariable = n;
    cout << "local variable is : " << localVariable << endl;
    localVariable = 100;
}

//using static variables
void staticVariable() {
    static int staticVariable = 249;
    staticVariable++;
    cout << "static variable is : " << staticVariable << endl;
    
}
