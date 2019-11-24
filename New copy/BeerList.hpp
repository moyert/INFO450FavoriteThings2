
#pragma once
#include "Beer.hpp"

class BeerList
{
private:
    Beer beerList[100];
    int beerCollection;

public:
    BeerList();
    int addBeer();
    bool findBeer(Beer beer);
    int getCollectionSize();
    void printList();
    int readFromFile();
    int writeToFile(); 
    int readFile();
};
