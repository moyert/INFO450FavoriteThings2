#include <iostream>
#include <fstream>
#include <string>
#include "BeerList.hpp"

BeerList::BeerList()
{
    beerCollection = 0;
}

bool BeerList::findBeer(Beer beer)
{
    for (int i = 0; i < beerCollection; i++)
    {
        if (beer.getName() == beerList[i].getName())
        {
            cout << "Beer " << beerList[i].getName() << " already exist in the application!" << endl;
            cout << "Please enter a different name" << endl;
            cout << endl;
            return false;
        }
    }
    return true;
}

int BeerList::addBeer()
{
    Beer addNewBeer;
    addNewBeer.getBeer();
    if (findBeer(addNewBeer))
    {
        beerList[beerCollection] = addNewBeer;
        beerCollection++;
            return 0;
            }
            else
            {
                return MAXBEER;
            }
        }


int BeerList::getCollectionSize()
{
    return beerCollection;
}

void BeerList::printList()
{
    for (int i = 0; i < beerCollection; i++)
    {
        cout << beerList[i];
        cout << endl << endl;
    }
}
// This will enable the user to write to the file
int BeerList::writeToFile()
{
    int i;
    string filename;
    ofstream outputFile;
    cout << "Enter file name:" << endl;
    getline(cin, filename);
    outputFile.open(filename, ios::app);
    if (!outputFile)
    {
        cout << "Error - file open failed!" << endl;
        return -2;
    }
    for (i = 0; i < beerCollection; i++)
    {
        outputFile << beerList[i].getName() << '|';
        outputFile << beerList[i].getBrewery() << '|';
        outputFile << beerList[i].getType() << '|';
        outputFile << beerList[i].getAbv() << '|';
        outputFile << beerList[i].getRating() << endl;
    cout << "Saved" << endl;
        
    }
    outputFile.close();
    return 0;
    
}
//This will enable the user to read the file
int BeerList::readFromFile()
{
    ifstream inputFile;
    string filename;
    cout << "Enter file name" <<endl;
    getline(cin, filename);
    
    inputFile.open(filename, ios::in);
    if(inputFile.is_open())
    {
        string name;
        string brew;
        string type;
        double abv;
        int rating;
        string inputstring;
        
        while (inputFile.peek() !=EOF)
        {

            getline(inputFile, name, '|');
            getline(inputFile, inputstring, '|');
            getline(inputFile, brew, '|');
            getline(inputFile, inputstring, '|');
            getline(inputFile, type, '|');
            getline(inputFile, inputstring, '|');
            abv = stod(inputstring);
            getline(inputFile, inputstring, '|');
            rating = stoi(inputstring);
            getline(inputFile, inputstring, '|');
            cout << endl;
                
            beerList[beerCollection].setName(name);
            beerList[beerCollection].setBrewery(brew);
            beerList[beerCollection].setType(type);
            beerList[beerCollection].setAbv(abv);
            beerList[beerCollection].setRating(rating);
            beerCollection++;
                
        }
        cout << "File read" << endl;
    }else
    {
        cout << "Error reading file" << endl;
    }
    inputFile.close();
    return 0;
}

