//
// Created by ilnu on 2/3/25.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>  // Make sure vector is included
#include "Student.h"

using namespace std;

class Student;  // Forward declaration (only needed if `Student.h` is not included)

class Course {
private:
    int id;
    string name;
    int credits;
    vector<int> students;
public:
    Course(int id, string name, int credits);

    bool hasStudent(const Student& student);
    bool addStudent(const Student& student);
    void dropStudent(const Student& student);
    void printDetails();

    int getId() const;
    string getName() const;
    int getCredits() const;
    vector<int> getStudents() const;
};

#endif // COURSE_H
