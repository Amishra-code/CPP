#include<iostream>
using namespace std;

class Person
{
    public:
        void introduce()
        {
            cout<<"Hi, I'm person." << endl;
        }

};


class Student : public Person
{
    public:
        void introduce()
        {
            cout<<"Hi, I'm student." << endl;
        }


};


int main()
{
    Student anjali;
    anjali.introduce();
    
    system("PAUSE");
    return 0;
}


/* In method overriding, methods of base class gets overwritten, */