#include<iostream>
using namespace std;

int main()
{
    int arr [] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 1;

    for(int i = 0; i < size;i++){

        if(arr[i] == target){
            cout<<"The Index of the target element is : "<<i<<endl;
        }
    }

    return 0;
    
}