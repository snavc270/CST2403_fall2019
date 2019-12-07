
#include "stdafx.h"
#include "Gradebook.h"

Gradebook::Gradebook(string name)
: courseName(name)
{
}

void Gradebook::setCourseName(string name) {
    // check to see if string length is less than 25 characters
    if(name.size()<=25)
        courseName = name;
    if (name.size() > 25) {
        courseName = name.substr(0, 25);
        cout << "Sorry , " << name << "exceeds 25 characters \n";
    }
}

string Gradebook::getCourseName() const {
    return courseName;
}

void Gradebook::displayMessage() const { //pass the name of the course
    cout << "THIS IS A GRADEBOOK for ... " << getCourseName() << endl;
}


int main()
{
    string nameOfCourse;
    
    
    cout << "Please enter the name of the course. " << endl;
    getline(cin, nameOfCourse); //function that takes spaces into account
    
    Gradebook myGradebook1(nameOfCourse);
    Gradebook myGradebook2("Physics");
    
    myGradebook1.setCourseName(nameOfCourse);
    myGradebook1.displayMessage();
    myGradebook2.displayMessage();
    
    return 0;
}
