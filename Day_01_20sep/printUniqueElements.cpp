#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 2, 3, 3, 4, 5, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement;

    for (int i = 0; i < size; i++)
    { 
        uniqueElement = arr[i];

        for (int j = 0; j < size; j++)
        {
            if (uniqueElement == arr[j])
            {
                break;
            }
            else{
                cout<<uniqueElement<<" ";
            }
        }
    }

    return 0;
}