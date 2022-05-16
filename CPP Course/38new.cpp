#include<iostream>
using namespace std;

int main()
{
    int *pointer=NULL;

    cout<< "enter n : ";

    int n;
    cin>>n;
    
    pointer = new int[n];

    int temp;

    for(int counter=0; counter<n; counter++)
    {
        cout<<"enter the "<<counter+1<<" item : ";
        cin>>temp;
        *(pointer+counter)=temp;
    }

    for(int counter=0; counter<n; counter++)
    {
        cout<<counter+1<<" item : ";
        cout<< *(pointer+counter)<< endl;
    }

    delete []pointer;

    return 0;

}
