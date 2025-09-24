#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,2,2,1,1,3,3,3,3,3,3,3,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    int frequency = 0;

    int maxFreq = INT_MIN;

    int index = -1;

    for(int i = 0; i < size;i++){

        frequency = 0;
        for(int j = 0; j<size;j++){

            if(arr[i] == arr[j]){
                frequency ++;
            }
            if(frequency > maxFreq){
                maxFreq = frequency;
                index = arr[j];
            }
        }
    }

    cout<<index<<endl;
    
    return 0;
}