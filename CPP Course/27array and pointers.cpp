#include<iostream>
using namespace std;

int main()
{
    int a[5] = {18, 19, 42, 21, 22}, *ptr;
    ptr=a;
    cout<< a[0] << endl;
    cout<<(*ptr+2)<<endl;

    return 0;

}
