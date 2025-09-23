#include<iostream>
using namespace std;

//Condition ->Array will be sorted!
int main()
{
    int target = 9;
    
    int arr[] = {2,7,11,15};

    vector<int>vec;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<size;i++){
        for(int j = i+1; j <size;j++){

            if(arr[i] + arr[j] == target){
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
            }
        }
    }

    for(int i : vec){

        cout<<i<<endl;
    }
    return 0;
}