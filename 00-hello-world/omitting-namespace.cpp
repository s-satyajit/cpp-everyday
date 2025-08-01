#include <iostream>
#include <string>

int main() {
    int x;
    int y;
    std::string name = "satyajit";

    std::cout << "my name is " << name << std::endl;
    std::cout << "input first number \n";
    std::cin >> x;
    std::cout << "input second number \n";
    std::cin >> y;
    std::cout << "sum is: " << x+y;
}