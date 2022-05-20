#include<iostream>
using namespace std;

class Person
{
    protected:
        string name;
    public:
        void SetName(string iname)
        {
            name=iname;
        }    
};


class Student : private Person
{
    public:
        Person :: name;   // base class's data member "name's" access changed from private to public

        void SetStudentName(string iname)
        {
            SetName(iname);
        }

        void display()
        {
            cout<< name << endl;
        }
};


class GStudent : public Student
{
    public:
        void SetGStudentName(string iname)
        {
            SetStudentName(iname);
        }
};


int main()
{
    GStudent object;
    object.name="Anjali";           // we can directly assign value to the "name" data memeber
    object.display();

    return 0;
    
}
