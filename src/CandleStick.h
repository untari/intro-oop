#pragma once 
#include <string>
#include "OrderBookEntry.h"

//colour option for the candlestick
enum class CandleColour{red, green};

//define the candlestick class
class Candlestick {
    public:
        // define the attributes  
        std::string timestamp;
        std::string product;
        OrderBookType type;
        CandleColour candle_colour;
        double open;
        double close;
        double high;
        double low;

        Candlestick() {};
        // create constructor 
        Candlestick(
            std::string _timestamp, 
            double _open, 
            double _high, 
            double _low, 
            double _close, 
            OrderBookType _type)
        : timestamp(_timestamp), open(_open), close(_close),
                     high(_high), low(_low), type(_type){};

    
};