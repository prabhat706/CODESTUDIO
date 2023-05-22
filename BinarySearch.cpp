#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int size, int arr[], int target)
{
    int start = 0;
    int end = size;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the value of size" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the targeted value" << endl;
    cin >> target;

    cout << "Element found at index " << BinarySearch(size, arr, target) << endl;
}