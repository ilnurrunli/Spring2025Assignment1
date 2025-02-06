//
// Created by ilnu on 2/4/25.
//

#ifndef LMS_H
#define LMS_H

#include <string>
#include <vector>
#include "Student.h"
#include "Course.h"
using namespace std;

class LMS {
private:
    string name;
    vector<Student> students;
    vector<Course> courses;

public:
    LMS(string name);

    void addStudent(Student student);
    void addCourse(Course course);

    static void addStudentToCourse(Student student, Course course);
    void printDetails();

    Student *findStudentById(int searchId);
    Course *findCourseById(int courseId);

    vector<Student> getStudents() const;
    vector<Course> getCourses() const;
};



#endif //LMS_H
