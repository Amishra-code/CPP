#include<iostream>
using namespace std;

typedef struct student_info
{
    int roll;
    char sex;
}sinfo;

int main()
{
    sinfo s1, (*s1ptr);

    s1ptr=(&s1);

    s1.roll=01;
    s1ptr->sex = 'M';
    
    cout<< (s1ptr->roll) <<endl<< (s1.sex) <<endl;

    return 0;

}
