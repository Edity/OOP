#include <string>
#include "../include/Time.h"

int Time(int hour, int min, std::string half){
    if (half == "pm"){
        if (hour != 12) hour += 12;
        else if(min != 0) hour = 0;
    }
    return hour * 100 + min;
}