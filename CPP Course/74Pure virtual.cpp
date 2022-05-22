#include<iostream>
using namespace std;

class Person
{
    public:

    virtual void introduce() = 0;
    
};

void Person :: introduce()
{
    cout<<"Hey, I'm person !!" <<endl;
}


class Student : public Person
{
    public:

    void introduce()
    {
        cout<<"Hey, from Student !!" << endl;
        Person :: introduce();
    }
        
};


int main()
{
    Student aryan;
    aryan.introduce();

    return 0;

}


/* ABSTRACT CLASS : a class which contains only virtual methods, one or more .
                    we cannot create an object of abstract class.
                    it can be used for the foundation of derived classes. */

