#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person
{
        int id;
        string name;
    public:
        Person(int id, string name);
        virtual string getName();
        virtual ~Person();


};

#endif // PERSON_H
