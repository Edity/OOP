#include <iostream>
#include <iomanip>
#include <string>
#include "include/Time.h"


int main(){    
    std::cout << "Enter ur time: " << std::endl;
    int a, b;
    std::string c;
    std::cin >> a >> b >> c;
    std::cout << std::setfill('0');
    std::cout << std::setw(4) << Time(a, b, c) << std::endl;
    return 0;
}