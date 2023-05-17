#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    // string vector tokens ##store the tokens
    std::vector<std::string> tokens;
    //  int start, end ## used to delinaete the position of the tokens
    signed int start, end; 
    std::string token;
    // start = csvLine.find_first_not_of(separator)
    start = csvLine.find_first_not_of(separator, 0);
    // do
    do{
        // end = next 'separator' after that
        end = csvLine.find_first_not_of(separator, start);
        // if start == csv.Line.length or start = end ## nothing more to
        if(start == csvLine.length() || start == end) break;
        // break
        // if end >= 0 ## we found the separator
        if(end >= 0) token = csvLine.substr(start, end - start);
        // token = csvLine.substr(start, end-start) ##substring length
        // else
        else token = csvLine.substr(start, csvLine.length() - start);
        // end is invalide
        // token.push_back(token) #save the token
        tokens.push_back(token);
        // start = end + 1 # move past this token
        start = end + 1;
        // while (end > 0) # continue loop condition

    } while(end > 0);

    return tokens;
}

int main()
{
    // create an object
    std::ifstream csvFile{"20200317.csv"};
    std::string line;

    if(csvFile.is_open())
    {
        std::cout << "file open " << std::endl;

        while(std::getline(csvFile, line))
        {
            std::cout << "read line " << line << std::endl;
        }
        std::getline(csvFile, line);

        csvFile.close();
    }
    else
    {
        std::cout << "could not open file " << std::endl; 
    }

    return 0;
}