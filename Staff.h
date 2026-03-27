#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <string>

#include "UniversityMember.h"
#include "AccessCard.h"

// Staff class: virtually inherits from UniversityMember to avoid diamond problem
// Demonstrates composition by including an AccessCard object
class Staff : public virtual UniversityMember {
private:
    double salary;   // Staff salary
    AccessCard card; // Composition: staff has an access card

public:
    // Constructor: initializes name, memberID (via UniversityMember), salary, and card
    Staff(std::string name, int memberID, double salary, AccessCard card)
        : UniversityMember(name, memberID) {
        this->salary = salary;
        this->card = card;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }

    // Override the pure virtual function from UniversityMember
    // Demonstrates run-time polymorphism
    void displayRole() override {
        cout << "Role: Staff" << endl;
    }

    // Display salary and card information
    void displayCard() {
        std::cout << "Salary: " << salary << std::endl;
        card.displayCardInfo();
    }
};

#endif