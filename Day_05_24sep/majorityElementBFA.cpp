#include <iostream>
using namespace std;

int MajorityElement(vector<int> &vec)
{

    int size = vec.size();

    int frequency;

    for (int i = 0; i < size; i++)
    {

        frequency = 0;

        for (int j = 0; j < size; j++)
        {

            if (vec[i] == vec[j])
            {

                frequency++;
            }
        }
        if (frequency > size / 2)
        {
            return vec[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 2, 2, 2, 2, 2, 2, 1, 1};

    cout << MajorityElement(vec) << endl;
    ;

    return 0;
}