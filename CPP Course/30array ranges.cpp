#include<iostream>
using namespace std;

void show(const int *start, const int *end);

int main()
{
    int number[]={5, 10, 15, 20, 25};

    show(number, number+4);

    return 0;

}

void show(const int *start, const int *end)
{
    const int *ptr;
    for(ptr=start; ptr<=end; ptr++)
    {
        cout<<(*ptr)<<endl;
    }
}