#include<iostream>
using namespace std;

int main()
{
    int *pointer;
    
    pointer = new int;

    *(pointer)=24;

    cout<< (*pointer) << endl;

    delete pointer;

    cout<< (*pointer); // garbage

    return 0;

}
