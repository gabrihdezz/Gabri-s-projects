#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include <string>
#include <set>
using namespace std;

class Student : public Person{
    private:
        set<Course> courses;
    public:
        Student(int id, string name);
        int getId();
        string getName();
        bool enrollCourse(Course c);
        const bool unenrollCourse(int id);
        set<Course> getEnrolledCourses();
        string toString();
        virtual ~Student();

};

#endif // STUDENT_H
