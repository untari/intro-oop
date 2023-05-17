#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

// main function
int main()
{
    MerkelMain app{};
    app.init();
}



// order1.price = 10000;
// order1.amount = 0.09;
// order1.timestamp = "2020/03/17 17:01:24.884492";
// order1.product = "BTC/USDT";
// order1.orderType = OrderBookType::bid;
// print it out 1 value
// std::cout << "the price is " << orders[1].price << std::endl;

// to print out everything using iteration
// for (OrderBookEntry& order : orders){
//     std::cout << "the price is " << order.price << std::endl;
// }

// using arrays syntax with vectors
// for(unsigned i = 0; i < orders.size(); ++i){
//     std::cout << "the price is " << orders[i].price << std::endl;
// }

// or using object style
// for(unsigned i = 0; i < orders.size(); ++i){
//      std::cout << "the price is " << orders.at(i).price << std::endl;