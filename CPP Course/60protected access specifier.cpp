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
    Student anjali;
    anjali.SetName("Anjali");
    anjali.display();

    system("PAUSE");
    return 0;
}

/* protected access specifier are similar to the private access specifier.
   The only difference is that it's members are directly accessible to the sub class 
   which inherits the base class through public access specifier. */

