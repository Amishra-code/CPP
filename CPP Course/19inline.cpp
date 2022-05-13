#include<iostream>
using namespace std;

inline void display(int a)
{
    cout<<"A is : " <<a <<endl;
}

int main()
{
    display(10);
    return 0;
}

// inline keyword places the statements of the function inside main from where it has been called.