#include<iostream>
using namespace std;
int main()
{
    int i, x;
    cout<<"enter the number : ";
    cin>>x;

    for(i=1; i<=10; i++) 
        cout << x << " x " << i << " = " << x*i << endl;
    
    return 0;
}