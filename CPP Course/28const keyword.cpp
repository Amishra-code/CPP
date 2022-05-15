#include<iostream>
using namespace std;

void show(const int arr[], int len);

int main()
{
    int number[]={5, 10, 15, 20, 25};

    show(number, 5);

    return 0;

}

void show(const int arr[], int len)
{
    int counter;

    for(counter=0; counter<len; counter++)
    {
        cout<<arr[counter]<<endl;
    }
}

