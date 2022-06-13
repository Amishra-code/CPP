#include<vector>
#include<iostream>
using namespace std;

template <class T>

void display(vector<T> &v)
{
    cout<<"Displaying this vector. ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i] <<" ";
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
}

int main()
{
    
    
    //ways to implement a vector

    // vector<int> vec1; //zero length vector
    // cout<<"For vec1 : ";
    // display(vec1);
    // int size, element;
    // cout<<"Enter the size of vector : ";
    // cin>>size;

    // for(int i=0; i<size; i++)
    // {
    //     cout<<"Enter element for vector : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // display(vec1);
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 50);
    // display(vec1);
    
    /*vec1.insert(pointer, number of times to be inserted, element);*/
    // vec1.insert(iter+3, 4, 50); 
    // display(vec1);



    // vector<char> vec2(4); //4-element character vector
    // cout<<endl <<"For vec2 : ";
    // display(vec2);
    // vec2.push_back('5');
    // display(vec2);


    // vector<char> vec3(vec2); //4-element character vector from vec2
    // cout<<endl <<endl <<"For vec3 : ";
    // display(vec3);

    // vector<int> v(6, 3); //6-element vector of 3s
    // cout<<endl <<"For v : ";
    // display(v);
    
    return 0;
}