#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"
#include "CandleStick.h"

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

//        OrderBook orderBook{"20200317.csv"};
	OrderBook orderBook{"20200602.csv"};
        Wallet wallet;

    // return the data type 
    // std::vector<Candlestick> candlesticks; 

    // candlrstick graph
};
