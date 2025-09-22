#include<iostream>
using namespace std;

int main(){

    vector<int>vec = {1,2,3,4,5,6,7,8,9};

    int start = 0;
    int end = vec.size() - 1;
    
    while(start<end){

        swap(vec[start],vec[end]);

        start ++;
        end--;
    }

    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}