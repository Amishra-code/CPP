/*List is a bidirectional linear container which is used to store data and shows efficient properties of 
insertion and deletion*/

#include<list>
#include<iostream>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it <<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1; //empty list

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);      //1 2 3 4 5 
    list1.pop_back();
    display(list1);      //1 2 3 4 
    list1.pop_front();
    display(list1);      //2 3 4 
    list1.push_back(3);
    display(list1);      //2 3 4 3
    list1.remove(3);
    display(list1);      //2 4 
    list1.sort();
    display(list1);      //2 4
    list1.reverse();
    display(list1);      //4 2

    list<int> list2(3); //list with memory allocated for 4 elements
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter=45;
    iter++;
    *iter=5;
    iter++;
    *iter=4;
    iter++;
    display(list2);  //45 5 4
    list2.sort();
    display(list2);  //4 5 45
    list2.reverse();
    display(list2);   //45 5 4
    
    list1.merge(list2);
    cout<<"After merging : ";  
    display(list1);   //2 4 4 5 45

    return 0;

}