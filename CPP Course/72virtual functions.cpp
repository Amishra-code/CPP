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


class Farmer : public Person
{
    public:

    void introduce()
    {
        cout<<"Hey, from Farmer !!" << endl;
    }
        
};


void WhoThis(Person &p)
{
    p.introduce();
}


int main()
{
    Farmer anjali;
    anjali.introduce();
    WhoThis(anjali);

    return 0;

}


/* If a function is present in the base class as well as the derived class, and if we use the virtual keyword,
   it does overwriting to the function even though if we are using this user defined functio WhoThis() */