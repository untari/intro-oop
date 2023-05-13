#include <iostream>

// main function
int main(){
    while(true){

        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}

int getUserOption(){

    int userOption(); 

    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "you choose: " << userOption << std::endl;
    return userOption;
}

void printMenu(){
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
}

void processUserOption(int userOption)
{
    if (userOption == 0) //bad input
    {
        std::cout << "invalide choice. choose 1-6" << std::endl;
    }
    if (userOption == 1) //bad input
    {
        std::cout << "help - your aim is to make money. analyse the market and bids the market" << std::endl;
    }
    if (userOption == 2) //bad input
    {
        std::cout << "market looks good" << std::endl;
    }
    if (userOption == 3) //bad input
    {
        std::cout << "mark and offer - enter the amount " << std::endl;
    }
    if (userOption == 4) //bad input
    {
        std::cout << "make a bid - enter the amount" << std::endl;
    }
    if (userOption == 5) //bad input
    {
        std::cout << "your wallet is empty" << std::endl;
    }
    if (userOption == 6) //bad input
    {
        std::cout << "going to next time frame" << std::endl;
    }
}
