#include<iostream>
using namespace std;

int main()
{
    vector<int>vec = {1,2,2,2,2,2,2,2,1,1};

    sort(vec.begin(),vec.end());//O(nlogn)

    int frequency = 1;

    int majorityElement;

    for(int i = 1;i<vec.size() - 1;i++){

        if(vec[i] == vec[i - 1]){
            frequency++;
        }
        else{
            frequency = 1;
        }
        if(frequency > vec.size()/2){
            majorityElement = vec[i];
            break;
        }
    }
cout<<"Majority Element is : "<<majorityElement<<endl;

    
    return 0;
}