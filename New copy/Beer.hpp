#pragma once
#include <iostream>
#include <string>
using namespace std;
const int MAXBEER = 5;
class Beer
{
private:
    string name;
    string brewery;
    string type;
    double abv;
    int rating;
public:
    Beer();
    void getBeer();
    string getName();
    string getBrewery();
    string getType();
    double getAbv();
    int getRating();
    void setName(string n);
    void setBrewery(string b);
    void setType(string t);
    void setAbv(double a);
    void setRating(int r);
    
    friend ostream & operator << (ostream &o, const Beer &beer);
    
};
