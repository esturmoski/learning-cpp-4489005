// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main () {

    std::string str;

    std::cout << "What's ur name???" << std::flush;

    std::cin >> str;
    std::cout << "Oh word" << str << "Yep" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}