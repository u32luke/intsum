#include <iostream>
int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    std::cout<< "Welcome to the integer sorter. Enter an integer: " <<std::endl;
    std::cin>>num1;
    std::cout<< "Enter a second integer: " <<std::endl;
    std::cin>>num2;
    std::cout<< "Enter a third integer: " <<std::endl;
    std::cin>>num3;
    std::cout<< "Enter a fourth integer: " <<std::endl;
    std::cin>>num4;
    std::cout<< "Enter a fifth integer: " <<std::endl;
    std::cin>>num5;

    std::cout<< "Your summed integers are: " <<num1 + num2 + num3 + num4 + num5 <<std::endl;

    return 0;
}