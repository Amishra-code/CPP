#include<iostream>
using namespace std;

class Person
{
    public:

    virtual void introduce()
    {
        cout<<"Hey, from Person !!" << endl;
    }

};


class Student : public Person
{
    public:

    void introduce()
    {
        cout<<"Hey, from Student !!" << endl;
    }
        
};


class GStudent : public Student
{
    public:

};


void WhoThis(Person &p)
{
    p.introduce();
}


int main()
{
    Person anjali;
    Student aryan;
    GStudent suman;
    
    WhoThis(anjali);
    WhoThis(aryan);
    WhoThis(suman);

    return 0;

}


/*OUTPUT : 

Hey, from Person !!
Hey, from Student !!
Hey, from Student !! {introduce() is not present in the GStudent class, so object of GStudent will
                       call the method of Student class.}

*/