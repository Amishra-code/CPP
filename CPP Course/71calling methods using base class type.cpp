#include<iostream>
using namespace std;

class Person
{
    public:

    void introduce()
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

void WhoThis(Person p)
{
    p.introduce();
}


int main()
{
    Student anjali;
    anjali.introduce();
    WhoThis(anjali);

    return 0;

}