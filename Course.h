//
// Created by ilnu on 2/3/25.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"

using namespace std;

class Course {
private:
    int id;
    string name;
    int credits;
    vector<int> students;
public:
    Course(int id, string name, int credits);

    bool hasStudent(Student student);
    bool addStudent(Student student);
    void dropStudent(Student student);
    void printDetails();

    int getId() const;
    string getName() const;
    int getCredits() const;

};

#endif //COURSE_H
