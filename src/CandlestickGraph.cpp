#include <iostream>
#include "CandleStick.h"
#include "OrderBook.h"
#include "CandlestickGraph.h"

// Helper function, it does not belong to the class
// Takes an orderbookentries as an input and makes the open/close
// calculation with it, Returns the resulting value.
   // initialize the variables 
double totalValue = 0;
double totalAmount = 0;
double totalOrder = 0;
double calculateOpenClose(std::vector<OrderBookEntry> orderBookEntries)
{
    for (int i = 0; i < orderBookEntries.size(); i++) 
    {
        // Get the current order book entry
        OrderBookEntry orderBookEntry = orderBookEntries[i];
        
        totalOrder += orderBookEntry.amount; 

        totalValue += orderBookEntry.price * orderBookEntry.amount;
        
    }
    return totalValue/totalOrder;
};

void CandlestickGraph::generateCandlestick(std::vector<OrderBookEntry> previousOrderBookEntries, std::vector<OrderBookEntry> orderBookEntries)
{
    // check there's at least one value
    if (orderBookEntries.size() == 0)
        return;

    Candlestick candlestick;
    candlestick.timestamp = orderBookEntries[0].timestamp;
    // type
    candlestick.type = orderBookEntries[0].orderType;
    // product
    candlestick.product = orderBookEntries[0].product;

    //high 
    candlestick.high =  OrderBook::getHighPrice(orderBookEntries);
    //low
    candlestick.low =  OrderBook::getLowPrice(orderBookEntries);

    //open
    // Mean Price value should be calculated by dividing the Total Value by the Total Amount
    // Calculate the mean price
    // double mean_price = totalValue / totalAmount;
    double open = calculateOpenClose(previousOrderBookEntries);
    std::cout << "totalOpen: " << open << std::endl;
    double close = calculateOpenClose(orderBookEntries);
    std::cout << "totalClose: " << close << std::endl;
};
