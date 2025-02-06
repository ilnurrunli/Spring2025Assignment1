//
// Created by ilnu on 2/4/25.
//

#include <iostream>
#include <algorithm>
#include <utility>
#include "LMS.h"
using namespace std;

LMS::LMS(string name) {
    this->name = std::move(name);
}

void LMS::addStudent(Student student) {
    students.push_back(student);
}

void LMS::addCourse(Course course) {
    courses.push_back(course);
}

void LMS::addStudentToCourse(Student student, Course course) {
    if(!student.takesCourse(course)) {
        student.takeCourse(course);
    }
    if(!course.hasStudent(student)) {
        course.addStudent(student);
    }
}

vector<Student> LMS::getStudents() const {
    return this->students;
}

vector<Course> LMS::getCourses() const {
    return this->courses;
}

void LMS::printDetails() {
    cout << "LMS name: " << name << endl;
    cout << "Students: " << endl;
    for(Student student : students) {
        cout << "   " << "Name: " << student.getName() << " " << "Id: " << student.getId() << endl;
    }
    cout << "Courses: " << endl;
    for(Course course : courses) {
        cout << "   " << "Name: "<< course.getName() << " "
        << "Id: " << course.getId() << " "
        << "Credits: " << course.getCredits()<<endl;
    }
}

Student* LMS::findStudentById(int searchId) {
    auto it = find_if(
        this->students.begin(),
        this->students.end(),
        [searchId](const Student& s) { return s.getId() == searchId; });

    if (it != students.end()) {
        return &(*it);
    }
    return nullptr;
}

Course* LMS::findCourseById(int searchId) {
    auto it = find_if(
        this->courses.begin(),
        this->courses.end(),
        [searchId](const Course& c) { return c.getId() == searchId; });

    if (it != courses.end()) {
        return &(*it);
    }
    return nullptr;
}