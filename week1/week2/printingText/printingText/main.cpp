//
//  main.cpp
//  printingText
//
//  Created by Courtney Snavely on 9/1/19.
//  Copyright © 2019 Courtney Snavely. All rights reserved.
//

#include <iostream> // iostream is a standard c++ library header file
//for input - output streams
//#include = include that library header in this file
//allows us to include all of the code from that file in our file

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Welcome to C++!\n"; //prints on one line
    // '\n' = create a new line
  
    std::cout << "Welcome "; //still prints on single line
    std::cout << "to C++! \n";
    
    std::cout << "Welcome\nto\nC++!\n"; //single line of code but prints on multiple lines
    
    return 0; //program has ended successfully
}
