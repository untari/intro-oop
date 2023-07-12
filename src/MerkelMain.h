#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"
#include "CandleStick.h"
#include "CandlestickGraph.h"

class MerkelMain
{
    public:
        MerkelMain();
        /** Call this to start the sim */
        void init();
    private: 
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        int getUserOption();
        void processUserOption(int userOption);
        void calculateCandlesticks();
        
        

        std::string currentTime;

        // OrderBook orderBook{"20200317.csv"};
        OrderBook orderBook{"20200602.csv"};
            Wallet wallet;

        // candlestick graph attribute
        CandlestickGraph candlestickGraph;
};
