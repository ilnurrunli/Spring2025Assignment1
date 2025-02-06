//
// Created by ilnu on 2/3/25.
//

#ifndef STUDENT_H
#define STUDENT_H


#include "Course.h"
#include <vector>
#include <string>


using namespace std;

class Course;

class Student {
public:
    Student(int sid, string name);
    bool takeCourse(Course course);
    bool takesCourse(Course course);
    void dropCourse(Course course);
    void printDetails();

    int getId() const;
    string getName() const;
    vector<int> getEnrolledCourses() const;
    Student* findStudentById(int searchId);
private:
    int sid;
    string name;
    vector<int> enrolledCourses;
    const int MAX_ALLOWED_COURSES = 18;
};
#endif //STUDENT_H
