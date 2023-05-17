#pragma once

#include  <string>

// define enum class(it's a way of specifying a new type with 2 values)
enum class OrderBookType{bid, ask};

// define class
class OrderBookEntry{
    public:

        // define constructors
        OrderBookEntry(double _price, double _amount, std::string _timestamp, 
        std::string _product, OrderBookType _orderType)
        : price(_price), amount(_amount), timestamp(_timestamp), 
        product(_product), orderType(_orderType)
        {

        }

        // declare the variables
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
};