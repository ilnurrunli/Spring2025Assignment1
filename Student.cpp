//
// Created by ilnu on 2/3/25.
//

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include "Course.h"
using namespace std;

Student::Student(int sid, string name) {
    this->sid = sid;
    this->name = std::move(name);
}

bool Student::takesCourse(Course course) {
    // looking for an id, in order to find the course
    if(find(this -> enrolledCourses.begin(), this -> enrolledCourses.end(), course.getId()) != this -> enrolledCourses.end()) {
        return true;
    }
    return false;
}

bool Student::takeCourse(Course course) {
    this -> enrolledCourses.push_back(course.getId());
    return true;
}

void Student::dropCourse(Course course) {
    this -> enrolledCourses.erase(remove(
        this -> enrolledCourses.begin(),
        this -> enrolledCourses.end(),
        course.getId()), this -> enrolledCourses.end());
}

void Student::printDetails() {
    cout << "ID: "<< this -> sid << endl;
    cout << "Name: " << this -> name << endl;
    cout << "Enrolled Courses: " << endl;
    for(int i = 0; i < this -> enrolledCourses.size(); i++) {
        cout << "    "<< this->enrolledCourses[i] << endl;
    }
}

int Student::getId() const {
    return this->sid;
}

string Student::getName() const {
    return this->name;
}

vector<int> Student::getEnrolledCourses() const {
    return this->enrolledCourses;
}