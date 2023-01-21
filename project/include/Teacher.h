#ifndef TEACHER_H
#define TECHAER_H
#include "Person.h"
#include "Course.h"
#include <string>
#include <set>
using namespace std;

class Teacher : public Parent {
    private:
        set<Course> courses;
    public:
        Teacher(int id, string name);
        int getId();
        string getName();
        bool enrollCourse(Course c);
        const bool unenrollCourse(int id);
        set<Course> getEnrolledCourses();
        string toString();
        virtual ~Teacher();

};

#endif // STUDENT_H
