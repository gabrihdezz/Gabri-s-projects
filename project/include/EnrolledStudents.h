#ifndef ENROLLEDSTUDENTS_H
#define ENROLLEDSTUDENTS_H
#include <set>
#include "Student.h"
using namespace std;

class EnrolledStudents
{
    private:
        set<Student> students;
    public:
        EnrolledStudents();
        bool addStudent(Student student);
        bool removeStudent(int id);
        Student getStudent(int id);
        set<Student> getStudents();
        virtual ~EnrolledStudents();

};

#endif // ENROLLEDSTUDENTS_H
