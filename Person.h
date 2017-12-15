#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
private:
    string name;
    string address;
public:
    Person();
    void setName(string x);
    string getName();
    void setAddress(string y);
    string getAddress();
};

#endif // PERSON_H
