#ifndef OFFEREDCOURSES_H
#define OFFEREDCOURSES_H
#include "Course.h"
#include <set>
using namespace std;


class OfferedCourses
{
    private:
        set<Course> courses;
    public:
        OfferedCourses();
        bool addCourse(Course * course);
        bool removeCourse(int code);
        Course getCourse(int code);
        set<Course> getCourses();
        virtual ~OfferedCourses();


};

#endif // OFFEREDCOURSES_H
