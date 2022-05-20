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


class Student : protected Person
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


int main()
{
    Student object;
    object.SetStudentName("Anjali");
    object.display();

    return 0;
    
}

/* base class will act as protected access specifier in the derived class.
   Hence, we cannnot use it's member functions directly in the main().
   Therefore, we will create a new member function in the public access specifier of the derived class
   to call the meber function of the base  class.*/
