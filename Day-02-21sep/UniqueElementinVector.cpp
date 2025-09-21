#include<iostream>
using namespace std;
int main()
{
    vector<int>vec;
    
    vec={4,1,2,1,2};

    int uniqueElement = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        uniqueElement = uniqueElement ^ vec[i];
        
    }
    cout<<uniqueElement<<endl;

    return 0;
}