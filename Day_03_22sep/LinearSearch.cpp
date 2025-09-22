#include<iostream>
using namespace std;

int main(){

    vector<int>vec = {2,1,5,4,3,7,8,9};

    int size = vec.size();

    int target = 7;

    for(int i : vec){

        if(target == vec[i]){
            cout<<i<<endl;
        }
    }

    return 0;
}