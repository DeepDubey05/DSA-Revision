/*#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<size;i++){

        for(int j = i;j<size;j++){

            for(int k = i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
    */
   //Above code is to print all the combinations of the array i.e. subarrays!

   #include<iostream>
   using namespace std;

    int main(){

        int arr[] = {1,2,3,4,5};

        int size = sizeof(arr)/sizeof(arr[0]);

       

        int maxsum = INT_MIN;

        for(int i = 0;i<size;i++){

             int sum = 0;
            for(int j = 0;j<size;j++){
                    sum = sum + arr[j];
                    maxsum = max(sum,maxsum);
            }
        }
        cout<<maxsum<<endl;

        return 0;
    }
