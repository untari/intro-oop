#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"

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

void printHelp(){
    std::cout << "help - your aim is to make money. analyse the market and bids the market" << std::endl;
}

void printMarketStats()
{
    std::cout << "market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "mark and offer - enter the amount " << std::endl;
}

void enterBid()
{
    std::cout << "make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "your wallet is empty" << std::endl;
}

void goToNextTimeframe()
{
    std::cout << "going to next time frame" << std::endl;
}

int getUserOption(){

    int userOption; 

    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "you choose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0) //bad input
    {
        std::cout << "invalide choice. choose 1-6" << std::endl;
    }
    if (userOption == 1) //bad input
    {
        printHelp();
    }
    if (userOption == 2) //bad input
    {
        printMarketStats();
    }
    if (userOption == 3) //bad input
    {
        enterOffer();
    }
    if (userOption == 4) //bad input
    {
        enterBid();
    }
    if (userOption == 5) //bad input
    {
        printWallet();
    }
    if (userOption == 6) //bad input
    {
        goToNextTimeframe();
    }
}

// main function
int main(){

    //data model to represent one item in the order book
    // double price = 5319.450228;
    // double amount = 0.00020075;

    //declare new variable, type of variable is standard string
    // std::string timestamp{"2020/03/17 17:01:24.884492"};
    // std::string products{"BTC/USDT"};
    // OrderBookType orderType = OrderBookType::ask;
    //boolean data type
    // bool orderType = true;

    // using vector to represent multiple order book entries
    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> timestamps;
    // std::vector<std::string> products;
    // std::vector<OrderBookType> orderType;

    // prices.push_back(10.01);
    // amounts.push_back(0.006);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderType.push_back(OrderBookType::bid);

    // to access/print data a vector 
    // std::cout << "prices: " << prices[0] << std::endl;
    // std::cout << "prices: " << prices[1] << std::endl;


    // while(true){
    //     printMenu();
    //     int userOption = getUserOption();
    //     processUserOption(userOption);
    // }

    // multiple order books 
    std::vector<OrderBookEntry> orders;

    orders.push_back(OrderBookEntry{1000, 0.02, "2020/03/17 17:01:24.884492", "BTC/USDT", 
    OrderBookType::bid});

    orders.push_back(OrderBookEntry{2000, 0.02, "2020/03/17 17:01:24.884492", "BTC/USDT", 
    OrderBookType::bid});
    // order1.price = 10000;
    // order1.amount = 0.09;
    // order1.timestamp = "2020/03/17 17:01:24.884492";
    // order1.product = "BTC/USDT";
    // order1.orderType = OrderBookType::bid;

    // print it out 1 value
    // std::cout << "the price is " << orders[1].price << std::endl;

    // to print out everything using iteration
    for (OrderBookEntry& order : orders){
        std::cout << "the price is " << order.price << std::endl;
    }

    // using arrays syntax with vectors
    for(unsigned i = 0; i < orders.size(); ++i){
        std::cout << "the price is " << orders[i].price << std::endl;
    }

    // or using object style
    for(unsigned i = 0; i < orders.size(); ++i){
        std::cout << "the price is " << orders.at(i).price << std::endl;
    }
}


