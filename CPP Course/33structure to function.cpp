#include<iostream>
using namespace std;

typedef struct student_info
{
    int roll;
    char sex;
}sinfo;

void show (sinfo s);
void display(sinfo *sptr);

int main()
{
    sinfo s1;

    s1.roll=01;
    s1.sex = 'M';
    
    show (s1);
    display(&s1);

    return 0;

}

void show (sinfo s)
{
    cout<< (s.roll) <<endl<< (s.sex) <<endl;
}   

void display(sinfo *sptr)
{
    cout<< (sptr->roll) <<endl<< (sptr->sex) <<endl;
}