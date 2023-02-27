#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!";
}