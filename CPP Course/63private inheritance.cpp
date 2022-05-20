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
    object.SetGStudentName("Anjali");
    object.display();

    return 0;
    
}
