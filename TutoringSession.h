#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include <iostream>
#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {
private:
    int sessionID;               // ID of the session
    double durationMinutes;      // How long the session is
    TeachingAssistant* ta;       // Pointer to the TA
    Student* student;            // Pointer to the student

public:
    // Constructor to set all values
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student)
        : sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student) {}

    // Get session duration
    double getDuration() const {
        return durationMinutes;
    }

    // Show session info
    void displaySession() const {
        std::cout << "Session ID: " << sessionID << std::endl;
        std::cout << "Duration: " << durationMinutes << " minutes" << std::endl;
    }

    // Add two sessions' duration
    TutoringSession operator+(const TutoringSession& other) const {
        return TutoringSession(0, this->durationMinutes + other.durationMinutes, this->ta, this->student);
    }
};

// Compare which session is longer
bool operator>(const TutoringSession& s1, const TutoringSession& s2);

#endif