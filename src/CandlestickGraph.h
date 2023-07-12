#pragma once
#include "CandleStick.h"

#include <vector>

class CandlestickGraph{
    public: 

    void generateCandlestick(std::vector<OrderBookEntry> previousOrderBookEntries, std::vector<OrderBookEntry> orderBookEntries);
        // return the data type 
    std::vector<Candlestick> candlesticks;
};