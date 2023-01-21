#include <iostream>
#include "OfferedCourses.h"
#include "EnrolledStudents.h"
#include "Student.h"
using namespace std;

int main() {
    OfferedCourses of;
    EnrolledStudents es;
    of.addCourse(new Course(100, "Mathematics"));
    of.addCourse(new Course(101, "Language"));
    of.addCourse(new Course(102, "History"));
    of.addCourse(new Course(103, "Geography"));
    of.addCourse(new Course(104, "Physics"));
    of.addCourse(new Course(105, "Biology"));
    of.addCourse(new Course(106, "Chemistry"));
    of.addCourse(new Course(107, "Earth Science"));

    Student s1(4, "Gabriel");
    s1.enrollCourse(of.getCourse(100));
    s1.enrollCourse(of.getCourse(101));
    //es.addStudent(s1);

    Student s2(2, "Manuel");
    s1.enrollCourse(of.getCourse(100));
    s1.enrollCourse(of.getCourse(101));
    es.addStudent(s2);



    return 0;
}
