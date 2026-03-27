#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <iostream>
using namespace std;

class AccessCard{
    string cardID;
	int accessLevel;
    public:
    // Constructor
    AccessCard(){};
    AccessCard(string cardID, int accessLevel)
        {
            this->cardID=cardID;
            this->accessLevel=accessLevel;
        }

    // Getters
    string getCardID() const { 
        return cardID; 
    }
    int getAccessLevel() const { 
        return accessLevel; 
    }

    // Display
    void displayCardInfo() const {
    cout << "Card ID: " << cardID << endl;
    cout << "Access Level: " << accessLevel << endl;
    }
};

#endif