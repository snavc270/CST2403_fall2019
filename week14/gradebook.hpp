#include <iostream>
#include <string>
using namespace std;

class Gradebook {
public:
    explicit Gradebook(string);
    
    void setCourseName(string);
    
    string getCourseName() const;
    void displayMessage() const;
    
    
private:
    string courseName;
};
