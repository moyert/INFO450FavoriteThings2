#include <iostream>
#include "BeerList.hpp"
using namespace std;

int main()
{

    cout << "\t\t    ------------------------------------" << endl;
    cout << "\t\t    |---- ADD YOUR FAVORITE BEERS  ----|" << endl;
    cout << "\t\t    ------------------------------------" << endl;

    BeerList myBeerList;
    bool addBeer = true;
    string input;

    while (addBeer == true)
    {
        int answer = 0;
        cout << "------------------------------" << endl;
        cout << "|---Please select an option---|" << endl;
        cout << "|------1 = Read Text File-----|" << endl;
        cout << "|------2 = Add Beer-----------|" << endl;
        cout << "|------3 = Show Temporary List|" << endl;
        cout << "|------4 = Save---------------|" << endl;
        cout << "|------5 = Exit---------------|" << endl;
        cout << "-------------------------------" << endl;
        cin >> answer;
        cin.clear();
        cin.get();
        
        //This is how the user can determine which option they would like to choose
        switch (answer)
        {
            case 1:
                myBeerList.readFromFile();
                myBeerList.printList();
                break;
            case 2:
                myBeerList.addBeer();
                break;
            case 3:
                myBeerList.printList();
                break;
            case 4:
                myBeerList.writeToFile();
                break;
            case 5:
                addBeer = false;
                break;
            default:
                cout << "Invalid" << endl;
                break;
        }
        
    }
    system("pause");
    return 0;
}


