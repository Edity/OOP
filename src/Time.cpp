#include <string>
#include "../include/Time.h"

int Time(int hour, int min, std::string half){
    if (half == "pm"){
        hour += 12;
    }
    return hour % 24 * 100 + min;
}