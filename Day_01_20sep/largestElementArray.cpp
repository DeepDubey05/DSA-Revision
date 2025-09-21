#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {101, 20, 301, 401, 50};
    int arrSize = 5;

    int index;

    int smallestElement = INT_MIN;

    for (int i = 0; i < arrSize; i++)
    {

        if (arr[i] > smallestElement)
        {
            smallestElement = arr[i];
            index = i;
        }
    }

    cout << "The Largest element of the array is : " << smallestElement << endl;
    cout << "The index of the largest element is :" << index << endl;

    return 0;
}