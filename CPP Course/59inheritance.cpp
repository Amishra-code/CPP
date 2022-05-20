#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        void SetName(string iname)
        {
            name=iname;
        }

        void SetAge(int iage)
        {
            age=iage;
        }

};


class Student : public Person
{
    public:
        int id;
        void SetId(int iid)
        {
            id=iid;
        }

        void introduce()
        {
            cout<<"Students ID : " << id << endl;
            cout<< "My name is " << name << " and my age is "<< age << "." << endl;
        }

};


int main()
{
    Student anjali;
    anjali.SetName("Anjali");
    anjali.SetAge(19);
    anjali.SetId(20022810);
    anjali.introduce();
    
    system("PAUSE");
    return 0;
}

/* When we use inheritance, the derived class will use all the non private members of the base class except
constructors, destructors, the overloaded operators, and the friend function of the base class. */


