#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 2, 7, 8, 1, 2, 5};

    int size = 7;

    int start = 0;
    int end = 6;
    int x;

    while (start < end)
    {

        x = arr[start];
        arr[start] = arr[end];
        arr[end] = x;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
