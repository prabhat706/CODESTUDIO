#include <bits/stdc++.h>
using namespace std;

void movenegativeandpositive(int size, int arr[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Final Array is " << endl;
    movenegativeandpositive(size, arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}