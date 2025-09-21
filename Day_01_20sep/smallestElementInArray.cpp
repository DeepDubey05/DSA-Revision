#include <iostream>
using namespace std;

int main(){

    int index;

    int arr[5] = {101,20,301,401,50};
    int arrSize = 5;

    int largestElement = INT_MAX;

    for(int i = 0;i < arrSize;i++){

        if(arr[i] < largestElement){
            largestElement = arr[i];
            index = i;
        }
    }

    cout<<"The Smallest element of the array is : "<<largestElement<<endl;
    cout<<"The Index of the smallest array : "<<index<<endl;

    return 0; 
}