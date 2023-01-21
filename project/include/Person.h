#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person
{
    protected:
        int id;
        string name;
    public:
        Person();
        virtual getName();
        virtual ~Person();


};

#endif // PERSON_H
