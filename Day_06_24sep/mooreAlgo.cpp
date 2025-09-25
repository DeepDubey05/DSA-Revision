#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,2,2,2,2,1,1,3,3,3,3,3,3,3,3,3,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    int frequency = 0;

    int ans = 0;

    for(int i = 0;i<size;i++){

        if(frequency == 0){
            ans = arr[i];
        }
        if(arr[i] == ans){
            frequency++;
        }
        else{
            frequency--;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}