#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Gradebook {
public:
    
    explicit Gradebook(string name)
    : courseName( name )
    {
    }
    void setCourseName(string name) {
        courseName = name;
    }
    string getCourseName() const {
        return courseName;
    }
    
    void displayMessage() const { //pass the name of the course
        cout << "THIS IS A GRADEBOOK for ... " << getCourseName() << endl;
    }
    //function to tie the course name attr to our class template
    
    
    //function to retrieve our courseName
    
private:
    string courseName;
    
};

//how to pass an array of strings through your gradebook class
//figure out how to create an array of objects for your gradebook instances
int main()
{
    
    string nameOfCourse;
    
    
    cout << "Please enter the name of the course. " << endl;
    getline(cin, nameOfCourse); //function that takes spaces into account
    
    Gradebook myGradebook1(nameOfCourse);
    Gradebook myGradebook2("Physics");
    
    myGradebook1.displayMessage();
    myGradebook2.displayMessage();
    
    return 0;
}
