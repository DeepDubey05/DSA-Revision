#include <iostream>
using namespace std;

int main(){

    int arr[7] = {101,20,301,401,50,70,80};

    int size = 7;
    int Swap;

    int largestNumber = INT_MIN;
    int smallestNumber = INT_MAX;
    int smallestIndex;
    int largestIndex;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<smallestNumber){
        smallestNumber = arr[i];
        smallestIndex = i;
        }

        if(arr[i] > largestNumber){
        largestNumber = arr[i];
        largestIndex = i;
        }
    }

            Swap = arr[largestIndex];
    arr[largestIndex] = arr[smallestIndex];
    arr[smallestIndex] = Swap;

    for(int i = 0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}