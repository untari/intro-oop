#include <iostream>


int main()
{
    signed long i = 644444; 

    std::cout << "sizeof unsigned short " << sizeof(unsigned short) << std::endl;
    std::cout << "sizeof unsigned long " << sizeof(unsigned long) << std::endl;
    std::cout << "i contains " << i << std::endl;

    return 0;
}
// to run this file: g++ --std=c++11 test.cpp
// ./a.out