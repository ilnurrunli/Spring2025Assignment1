//
// Created by ilnu on 2/3/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Course.h"
using namespace std;


bool Course::hasStudent(Student student) {
    if(
        find(
            this->students.begin(),
            this->students.end(),
            student.getId()
        ) != this->students.end()
    ) {
        return true;
    }
    return false;
}

bool Course::addStudent(Student student) {
    this->students.push_back(student.getId());
    return true;
}

void Course::dropStudent(Student student) {
    this->students.erase(
        remove(this->students.begin(), this->students.end(), student.getId()),
        this->students.end()
    );
}


void Course::printDetails() {
    cout << "Id: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Credits: " << this->credits << endl;
    cout << "Students: " << endl;
    for(int student : this->students) {
        cout << "    " << student << endl;
    }
}

int Course::getId() const {
    return this -> id;
}

string Course::getName() const {
    return this->name;
}

int Course::getCredits() const {
    return this->credits;
}

