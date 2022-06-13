#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    //Function objects : functions wrapped in a class so that it is available like an object

    int array[] = {1, 9, 3, 8, 5};

    //ascending order
    sort(array, array+5);
    for(int i=0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    //descending order
    sort(array, array+5, greater<int>());
    for(int i=0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}