#include<iostream>
using namespace std;

bool display(int age);

int main()
{
    if(display(18))
        cout<<"you r adult";
    else
        cout<<"you r a kid";

    return 0;
}

bool display(int age)
{
    if(age>=18)
        return true;
    else 
        return false;    
}