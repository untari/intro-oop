#pragma once 
#include <string>
#include "OrderBookEntry.h"

enum class CandleColour{red, green};

//define the candlestick class
class Candlestick {
    private: 
        std::string timestamp;
        std::string product;
        CandleColour candle_colour;
        double open;
        double close;
        double high;
        double low;
    
    public:
        Candlestick(
            std::string _timestamp, 
            double _open, 
            double _high, 
            double _low, 
            double _close)
        : timestamp(_timestamp), open(_open), close(_close),
                     high(_high), low(_low){};

    
};