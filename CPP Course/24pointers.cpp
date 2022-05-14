#include<iostream>
using namespace std;

int main()
{
    int age=18, *ageptr;
    ageptr=&age;
    cout<<age<<" -> "<<ageptr<<endl;
}