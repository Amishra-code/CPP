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


class Student : public Person
{
    public:
        void display()
        {
            cout<< name << endl;
        }
};


int main()
{
    Student object;
    object.SetName("Anjali");
    object.display();

    return 0;
    
}