#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include <iostream>
#include <string>

#include "Student.h"
#include "Staff.h"
#include "AccessCard.h"

// TeachingAssistant class inherits from both Student and Staff
// virtual inheritance
// Also demonstrates compile-time polymorphism with method overloading
class TeachingAssistant : public Student, public Staff {
private:
    int workingHours; // Number of hours the TA works

public:
    // Constructor initializes all attributes
    TeachingAssistant(string name, int memberID,
                      double cgpa, double salary, AccessCard card, int workingHours)
        : UniversityMember(name, memberID), // shared base via virtual inheritance
          Student(name, memberID, cgpa),   // initialize Student part
          Staff(name, memberID, salary, card) { // initialize Staff part
        this->workingHours = workingHours;
    }

    // Override pure virtual function from UniversityMember
    // Demonstrates run-time polymorphism
    void displayRole() override {
        cout << "Role: Teaching Assistant" << endl;
    }

    // Method overloading grade assignment using numeric score
    void gradeAssignment(int score) {
        cout << "numeric score: " << score << "/100" << endl;
    }

    // Method overloading grade assignment using letter grade
    void gradeAssignment(string letterGrade) {
        cout << "letter grade: " << letterGrade << endl;
    }
};

#endif