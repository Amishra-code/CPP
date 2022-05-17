#include<iostream>
using namespace std;

void display();
int display(string);

int main()
{
    display();

    string m = "my";
    display(m);

    return 0;

}

void display()
{
    cout<<"MY name is Anjali Mishra"<< endl;
}

int display(string m)
{
    cout<< m << " name is Anjali Mishra";

    return 1;

}

/* in function overloading, it doesn't matter if the return type of two funtions having same name is different.
   the no. of parameters or the type of arguments passed to each function should be different */

   