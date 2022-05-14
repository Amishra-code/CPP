#include<iostream>
using namespace std;

int show(int arr[], int len);

int main()
{
    int number[]={5, 10, 15, 20, 25};
    int len=5;

    show(number, len);

    return 0;

}

int show(int arr[], int len)
{
    int counter;

    for(counter=0; counter<len; counter++)
    {
        cout<<arr[counter]<<endl;
    }

    return 0;
}

