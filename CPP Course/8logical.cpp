#include<iostream>
using namespace std;
int main()
{
    int date;
    cin>>date;

    if(date>=1 )
       if(date<=31)
       {
            cout<<"date is valid."<<endl;
            if(date==6)
                cout<<"date is special."<<endl;
       }  

    else 
        cout<<"date is invalid."<<endl;         
    
    system("PAUSE");
    return 0;
}