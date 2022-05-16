#include<iostream>
using namespace std;

struct address
{
    int h_no;
    string street_name;
};

struct student
{
    int roll;
    string name;
    char sex;
    address *addr;
};


int main()
{
    student s1, *s1ptr;

    s1ptr=(&s1);

    s1.roll=01;
    s1.name="anjali";
    s1.sex = 'F';

    address adr = {78, "meerut cantt"};
    s1ptr->addr= (&adr);

    cout<< s1ptr->roll <<endl<< s1ptr->sex <<endl << s1ptr->name<< endl<< s1ptr->addr->h_no << s1ptr->addr->street_name;

    return 0;

}

