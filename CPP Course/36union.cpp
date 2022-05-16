#include<iostream>
using namespace std;

union student
{
    int roll;
    char sex;
};

int main()
{
    student s1;

    s1.roll=01;
    cout<< (s1.roll);

    return 0;

}
