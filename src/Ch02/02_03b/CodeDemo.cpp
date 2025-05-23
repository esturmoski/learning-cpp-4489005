// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b;


int main(){
    bool type_set;
    type_set = true;
    a = 12;
    b = 9;

    std::cout << "a: " << a << std::endl;
    std::cout << "b - " << b << std::endl;

    std::cout << "flag = " << type_set << std::endl;


    std::cout << "b+a = " << b+a << std::endl;
    std::cout << "b-a = " << b-a << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
