// break statement is used to terminate the loop at a specific condition

/* continue statement is used to skip the further statements and to go back 
to the loop again and performs the operation for the next value.*/

// SWITCH

#include<iostream>
using namespace std;
int main()
{
    char s;
    cin>>s;

    switch (s)
    {
    case 'A' : {
                  cout<<"excellent";
                  break;
               }
    case 'B' : {
                  cout<<"good";
                  break;
               }           
    
    default:   {
                  cout<<"default";
                  break;
               }
                  
    }

    return 0;
    
}