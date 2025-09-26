#include <iostream>
#include <string>

int main(){
    std::string name;
    std::string name1;
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Zdarova " << name << std::endl;
    std::cout << "Enter your name" << std::endl;
    std::cin >> name1;
    std::cout << "Sybau " << name1 << std::endl; 
    // std::cin.ignore();
    return 0;
}