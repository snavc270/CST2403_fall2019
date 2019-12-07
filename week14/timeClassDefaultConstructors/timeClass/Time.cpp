#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "Time.h"

Time::Time(int hour, int minute, int second){
    setTime(hour, minute, second);
}
void Time::setTime(int h, int m, int s){
    //check to see if h, m, s are in valid ranges
    if((h>=0 && h<24) && (m>=0 && m <60) && (s>=0 && s<60)){
        hour = h;
        minute = m;
        second = s;
    }else{
        //from stdexcept library
        //let's compiler know invalid argument was entered
        //could also use a try / catch
        throw invalid_argument(
                               "time entered was out of range");
    }
}

string Time::toUniversalString() const{
    ostringstream output;
    //putting time into one output string
    output << setfill('0') << setw(2) << hour << ":"
    << setw(2) << minute << ":" << setw(2 ) << second;
    //gets formatted string
    return output.str();
}

string Time::toStandardString() const{
    ostringstream output;
    //putting time into one output string
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << setfill('0') << setw(2) << minute << ":"
    << setw(2) << second << (hour < 12 ? " AM" : " PM");
    //gets formatted string
    return output.str();
}



