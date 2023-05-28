#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingArray = isSorted(arr + 1, size - 1);
        return remainingArray;
    }
}

int main()
{
    // int arr[10] = {2, 1, 6, 3, 8, 4, 9, 5, 0, 7};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    bool explore = isSorted(arr, size);
    if (explore)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}