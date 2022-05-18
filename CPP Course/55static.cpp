#include<iostream>
using namespace std;

void display();

int main()
{
    display();
    display();
    display();
    
    system("PAUSE");
    return 0;
}


void display()
{
    static int counter = 0;
    cout<< ++ counter << endl;
}

/* static keyword encunters one statement only once while first time of calling
   and the value initialized is saved in heap*/