#include <iostream>

// main function
int main(){
    // 1. print help
    std::cout << "1: print help" << std::endl;
    // 2. print exchange status
    std::cout << "2: print exchange" << std::endl;
    // 3. make an offer
    std::cout << "3: make an offer" << std::endl;
    // 4. make a bid
    std::cout << "4: make a bid" << std::endl;
    // 5. print wallet
    std::cout << "5: print wallet" << std::endl;
    // 6. continue
    std::cout << "6: continue" << std::endl;

    std::cout << "===========" << std::endl;
    std::cout << "Type in 1-6" << std::endl;

    int userOption;
    std::cin >> userOption;
    std::cout << "you choose: " << userOption << std::endl;

    return 0;
}