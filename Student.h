#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

#include "UniversityMember.h"

// Student class: virtually inherits from UniversityMember to avoid diamond problem
class Student : public virtual UniversityMember {
private:
    double cgpa;  // Stores the student's CGPA

public:
    // Constructor: initializes the name, memberID (via UniversityMember), and cgpa
    Student(string name, int memberID, double cgpa)
        : UniversityMember(name, memberID) {
        this->cgpa = cgpa;
    }

    // Getter for CGPA
    double getCGPA() {
        return cgpa;
    }

    // Update the CGPA with a new value
    void updateCGPA(double newCGPA) {
        cgpa = newCGPA;
    }

    // Override the pure virtual function from UniversityMember
    // Demonstrates run-time polymorphism
    void displayRole() override {
        cout << "Role: Student" << endl;
    }
};

#endif