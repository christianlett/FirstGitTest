#include <iostream>
#include <string>

void HelloWorld() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "What's your name?";
    
    std::string your_name;
    
    std::cin >> your_name;
    
    std::cout << "Well, hello " << your_name << "! How are you?" << std::endl;
}
