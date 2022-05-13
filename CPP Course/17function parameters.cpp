#include<iostream>
using namespace std;

int display(int, int);

int main()
{
    display(10, 20);
    return 0;
}

int display(int a, int b)
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<a+b<<endl;

    return 0;
}