#include "EnrolledStudents.h"
#include "Student.h"
using namespace std;


EnrolledStudents::EnrolledStudents(){
    students = set<Student>();
}

bool EnrolledStudents::addStudent(Student student){
    return students.insert(student).second;
}

bool EnrolledStudents::removeStudent(int id){
    return students.erase(getStudent(id)) != 0;
}

Student EnrolledStudents::getStudent(int id){
    set<Student>::iterator result = find_if(students.begin(), students.end(),
                                              find_by_id(id))
    if(result != students.end()) {
        return *result;
    }
}

set<Student> EnrolledStudents::getStudents() {
    return students;
}

EnrolledStudents::~EnrolledStudents()
{
    //dtor
}
