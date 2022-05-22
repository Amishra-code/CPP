#include<iostream>
using namespace std;

class Person
{
    public:
        Person()
        {
            cout<<"Constructor of Person class called." <<endl; 
        }    

        ~Person()
        {
            cout<<"Destructor of Person class called." <<endl; 
        }

};


class Student : public Person
{
    public:
        Student()
        {
            cout<<"Constructor of Student class called." <<endl; 
        }    

        ~Student()
        {
            cout<<"Destructor of Student class called." <<endl; 
        }

};




int main()
{
    Student object;
    
    return 0;
    
}

/*
Constructor of Person class called.
Constructor of Student class called.
Destructor of Student class called.
Destructor of Person class called.
*/