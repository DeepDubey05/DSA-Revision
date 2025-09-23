#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};

    int target = 9;

    vector<int>vec;

    int size = sizeof(arr)/sizeof(arr[0]);

    //tip : array is sorted!

    int start = 0;

    int end = size -1;

    while(start < end){

        if(arr[start] + arr[end] > target){
            end--;
        }
        else if(arr[start] + arr[end] < target){
            start++;
        }
        else{
            vec.push_back(arr[start]);
            vec.push_back(arr[end]);
            break;
        }
    }

    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}