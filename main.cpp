#include <iostream>
#include <string>
#include "UniversityMember.h"
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main() {
    Department d("Computer Engineering");

    int choice;
    do {
        cout << "\n===== UNIVERSITY MANAGEMENT MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Staff\n";
        cout << "3. Add Teaching Assistant\n";
        cout << "4. Display All Roles\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                string name;
                int id;
                double cgpa;
                cout << "Enter Student Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Member ID: ";
                cin >> id;
                cout << "Enter CGPA: ";
                cin >> cgpa;
                Student* s = new Student(name, id, cgpa);
                d.addMember(s);
                cout << "Student added successfully!\n";
                break;
            }

            case 2: {
                string name, cardID;
                int id, accessLevel;
                double salary;
                cout << "Enter Staff Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Member ID: ";
                cin >> id;
                cout << "Enter Salary: ";
                cin >> salary;
                cout << "Enter Access Card ID: ";
                cin.ignore();
                getline(cin, cardID);
                cout << "Enter Access Level: ";
                cin >> accessLevel;
                AccessCard card(cardID, accessLevel);
                Staff* st = new Staff(name, id, salary, card);
                d.addMember(st);
                cout << "Staff added successfully!\n";
                break;
            }

            case 3: {
                string name, cardID;
                int id, accessLevel, hours;
                double cgpa, salary;
                cout << "Enter TA Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Member ID: ";
                cin >> id;
                cout << "Enter CGPA: ";
                cin >> cgpa;
                cout << "Enter Salary: ";
                cin >> salary;
                cout << "Enter Access Card ID: ";
                cin.ignore();
                getline(cin, cardID);
                cout << "Enter Access Level: ";
                cin >> accessLevel;
                cout << "Enter Working Hours: ";
                cin >> hours;
                AccessCard card(cardID, accessLevel);
                TeachingAssistant* ta = new TeachingAssistant(name, id, cgpa, salary, card, hours);
                d.addMember(ta);
                cout << "Teaching Assistant added successfully!\n";
                break;
            }

            case 4: {
                cout << "\n--- Displaying Roles in Department ---\n";
                d.displayAllRoles();
                break;
            }
            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}