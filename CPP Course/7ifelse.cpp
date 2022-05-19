#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;

    if(age<=20)
        cout<<"you are young."<<endl ;
    else if(age<=40)
        cout<<"you in the middle age."<<endl ; 
    else
        cout<<"you are old."<<endl ;        
    
    system("PAUSE");
    return 0;
}