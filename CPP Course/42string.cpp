#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name = "Anjali";
    string lastname = "Mishra";

    string fullname = name + " " + lastname;

    cout<< fullname << endl << name << " " << lastname << endl;

    if(name == "Anjali")
    {
        cout<<"name matched";
    }
    
    return 0;

}