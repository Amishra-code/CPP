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
    address addr;
};


int main()
{
    student s1;

    s1.roll=01;
    s1.name="anjali";
    s1.sex = 'F';
    s1.addr.h_no=78;
    s1.addr.street_name="meerut cantt";
    
    cout<< (s1.roll) <<endl<< (s1.sex) <<endl << (s1.name)<< endl<< (s1.addr.h_no) << (s1.addr.street_name);

    return 0;

}

