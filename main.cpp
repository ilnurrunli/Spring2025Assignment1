#include <iostream>
#include <algorithm>
#include "LMS.h"
#include "Student.h"
#include "Course.h"
using namespace std;

int main() {
    string nameLMS;
    cin >> nameLMS;
    LMS myLms(nameLMS);

    int numberStudents;
    cin >> numberStudents;
    for(int i = 0; i < numberStudents; i++) {
        int id;
        string name;
        cin >> id >> name;

        Student student(id, name);
        myLms.addStudent(student);
    }

    int numberCourses;
    for(int i = 0; i < numberCourses; i++) {
        string name;
        int credit, id;

        cin >> id >> name >> credit;
        Course course(id, name, credit);
        myLms.addCourse(course);
    }

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int studentId;
        int courseId;
        cin >> studentId >> courseId;

        vector<Student> students = myLms.getStudents();
        vector<Course> courses = myLms.getCourses();
        Student* student = myLms.findStudentById(studentId);
        Course* course = myLms.findCourseById(courseId);

        myLms.addStudentToCourse(*student, *course);
    }
    myLms.printDetails();
    return 0;
}
