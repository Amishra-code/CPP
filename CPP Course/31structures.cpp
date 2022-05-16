#include<iostream>
using namespace std;

typedef struct student_info
{
    int roll;
    char sex;
}sinfo;

int main()
{
    sinfo s1;

    s1.roll=01;
    s1.sex = 'M';
    cout<< (s1.roll) <<endl<< (s1.sex) <<endl;

    return 0;

}
