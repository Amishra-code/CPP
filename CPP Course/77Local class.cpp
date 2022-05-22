#include<iostream>
using namespace std;

void StudentList()
{
    class Student 
    {
        public:
            string name;
            int age;
        
            void Display()
            {
                 cout<< name << endl << age << endl;
            }   
    };

    Student object;
    object.name="Anjali";
    object.age=19;

    object.Display();

}

int main()
{
    StudentList();

    return 0;

}


/* Scope of local class ends with the function in which it is defined. */