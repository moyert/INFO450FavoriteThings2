#include <iostream>
#include <string>
#include "Beer.hpp"
using namespace std;

Beer::Beer()
{
    name = " ";
    brewery = " ";
    type = " ";
    abv = 0;
    rating = 0;
}
string Beer::getName()
{
    return name;
}

string Beer::getBrewery()
{
    return brewery;
}
string Beer::getType()
{
    return type;
}
double Beer::getAbv()
{
    return abv;
}
int Beer::getRating()
{
    return rating;
}
void Beer::setName(string n)
{
    name = n;
}
void Beer::setBrewery(string b)
{
    brewery = b;
}
void Beer::setType(string t)
{
    type = t;
}
void Beer::setAbv(double a)
{
    abv =a;
}
void Beer::setRating(int r)
{
    rating = r;
}
void Beer::getBeer()
{
    cin.clear();
    cin.ignore();

    cout << "\n\Enter beer name: ";
    getline(cin, name);

    cout << "\n\nEnter Brewery: ";
    getline(cin, brewery);

    cout << "\n\nEnter Type: ";
    getline(cin, type);

    cout << "\n\nEnter abv : ";
    cin >> abv;

    cout << "\n\nEnter your favorite beer rating: ";
    cin >> rating;


    cout << "\t\t    ==========================================================" << endl;
    cout << "\t\t    |---- YOUR DATA HAS BEEN STORED INTO THE APPLICATION ----|" << endl;
    cout << "\t\t    ==========================================================" << endl << endl << endl;
}

ostream& operator<< (ostream&o, const Beer& beer)
{
    o << "\t\t    =================================================" << endl;
    o << "\t\t    |---- YOUR DRONE COLLECTION DATA INCLUDES:  ----|" << endl;
    o << "\t\t    |                   **************              |" << endl;
    o << "\t\t    |                     ********                  |" << endl;
    o << "\t\t    |                       ****                    |" << endl;
    o << "\t\t    |      Brand: " << beer.name <<     "\t\t       |" << endl;
    o << "\t\t    |      Color: " << beer.brewery <<     "\t\t    |" << endl;
    o << "\t\t    |      Feature: " << beer.type << "\t\t         |" << endl;
    o << "\t\t    |      Price: " << beer.abv <<     "\t\t        |" << endl;
    o << "\t\t    |      Rating: " << beer.rating <<   "\t\t      |" << endl;
    o << "\t\t    |                       ****                    |" << endl;
    o << "\t\t    |                     ********                  |" << endl;
    o << "\t\t    |                   **************              |" << endl;
    o << "\t\t    =================================================" << endl << endl << endl;

    return o;
}
