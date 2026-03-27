#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <string>

#include "UniversityMember.h"

class Department {
private:
    std::string departmentName;

    UniversityMember* members[50];

    int memberCount;

public:
Department(string departmentName) {
    this->departmentName = departmentName;
    memberCount = 0;
}

void addMember(UniversityMember* member) {
    members[memberCount++] = member;
}

void displayAllRoles() {
    for (int i = 0; i < memberCount; i++) {
        members[i]->displayRole();
    }
}
};

#endif