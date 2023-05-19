#include <string>
#include <iostream>

int main()
{
    double d = 0;
    std::string s = "qqqqq";
    try
    {
        d = std::stod(s);
    }
    catch(const std::exception& e)
    {
        
    }
    std::cout << "d: " << d << std::endl;
}