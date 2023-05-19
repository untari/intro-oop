#include "CSVReader.h"
#include <iostream>

CSVReader::CSVReader()
{

}
std::vector<OrderBookEntry> CSVReader::readCSV(std::string csvFile)
{
    std::vector<OrderBookEntry> entries;
        return entries;
}

std::vector<std::string> CSVReader::tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
        return tokens;
}

OrderBookEntry CSVReader::stringsToOBE(std::vector<std::string> tokens)
{
    if (tokens.size() !=5)
    {
        std::cout << "bad line " << std::endl;
        throw std::exception{};
    }
    // 
    try{
        double price = std::stod(tokens[3]);
        double amount = std::stod(tokens[4]);
    }
    catch(const std::exception& e)
    {
        std::cout << "bad float! " << tokens[3] << std::endl;
        std::cout << "bad float! " << tokens[4] << std::endl;
        throw;
    }

    OrderBookEntry obe{price, amount,
                        tokens[0], tokens[1],
                        OrderBookEntry::stringToOrderBookType(tokens[2])};

    return obe;
}