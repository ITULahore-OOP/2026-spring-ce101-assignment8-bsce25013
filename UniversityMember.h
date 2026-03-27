#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <iostream>
using namespace std;
class UniversityMember
{
private:
   	string name;
	int memberID;

public:
    UniversityMember(string name, int memberID){
         this->name=name;
         this->memberID=memberID;
    }
    virtual ~UniversityMember(){
    }
  	string getName(){
        return name;
    }
	int getMemberID(){   
        return memberID;
    }
	virtual void displayRole() = 0; 
};

#endif
