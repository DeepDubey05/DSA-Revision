#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,-4,5,4,-1,7,-8};

    int size = sizeof(arr)/sizeof(arr[0]);

    int maxsum = INT_MIN;

    int currentsum = 0;

    for(int i = 0;i<size;i++){

        currentsum = currentsum + arr[i];

        maxsum = max(maxsum,currentsum);

        if(currentsum < 0){
            currentsum = 0;
        }
    }
    cout<<"The maximum subarray sum is : "<<maxsum<<endl;

    return 0;
}