#include<iostream>
using namespace std;

class Person
{
    protected:
        int height;

    public:
        Person(int h)
        {
            cout<<"Constructor of class Person is called." << endl;
            height=h;
        }    

};


class Student
{
    protected:
        string name;

    public:
        Student(string iname)
        {
            cout<<"Constructor of class Student is called." << endl;
            name=iname;
        }    

};



class Child : public Person, public Student
{
    public:
        Child(int x, string c_name) : Person(x), Student(c_name)
        {
            cout<<"Constructor of class Child is called." << endl;
        }    

        void display()
        {
            cout<<"Height is : " << height <<endl;
            cout<<"Color is : " << name << endl;
        }

};


int main()
{
    Child  anjali(19, "black");
    anjali.display();

    return 0;

}