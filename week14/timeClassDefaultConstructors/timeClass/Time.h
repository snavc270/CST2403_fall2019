#include <string>

// checks to see if code was already included or defined earlier in program; if has not been included, then includes it
#ifndef TIME_H
#define TIME_H

using namespace std;
class Time{
    //prototypes time functions
    public:
    explicit Time(int =0, int =0, int=0);
    
        void setTime(int, int, int);
        string toUniversalString() const;
        string toStandardString() const;
    private:
    //unsigned =  positive integers
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};
};

#endif /* Time_h */
