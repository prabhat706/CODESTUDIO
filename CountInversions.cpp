#include <bits/stdc++.h>
using namespace std;

int countInversions(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the value of size " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Counts are " << countInversions(arr, size) << endl;
}