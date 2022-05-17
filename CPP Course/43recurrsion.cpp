#include<iostream>
#include<string>

using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    else
    {
        return n*fact(n-1);
    }
}


int main()
{
    int n, factorial;
    cin>>n;
    
    factorial = fact(n);

    cout<< factorial;

    return 0;

}