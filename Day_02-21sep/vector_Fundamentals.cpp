#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    vector<int>vec;

    vec = {1,2,3,3,4};

        cout<<"The size of the vector is : "<<vec.size()<<"\nThe capacity of the vector is : "<<vec.capacity()<<endl;

    vector<int>cev(5,-1);

    //to access the elements of the vectors we will be using for each loop

    for(int te:vec){
        cout<<te<<endl;
    }
    
        for(int e:cev){
        cout<<e<<endl;
    }

    //to print the size of the vector we do 

    cout<<vec.size()<<endl;

    vec.push_back(44);// To insert a new value at the end of the vector and this happens at run time!

    //Dynamic Allocation happens on the heap while static allocation happens on the stack

    cout<<vec.size()<<endl;

    vec.pop_back();// to pop the last value from the vector

    cout<<vec.size()<<endl;

    cout<<vec.front()<<endl;//to print the first element of the vector

    cout<<vec.back()<<endl;//to print the last element of the vector

    cout<<vec.at(1)<<endl;// to access the element at any particular index

    cout<<"The size of the vector is : "<<vec.size()<<"\nThe capacity of the vector is : "<<vec.capacity()<<endl;

    vec.push_back(32232);
    vec.push_back(32232);
    vec.push_back(32232);
    vec.push_back(32232);
    vec.push_back(32232);
    vec.push_back(32232);


        cout<<"The size of the vector after push_back() : "<<vec.size()<<"\nThe capacity of the vector after push_back() : "<<vec.capacity()<<endl;

    return 0;
}