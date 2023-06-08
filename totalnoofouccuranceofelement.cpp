#include <bits/stdc++.h>
using namespace std;

int firstOccu(int *arr, int size, int key)
{
    int s = 0;
    int e = size;

    int mid = (s + e) / 2;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int lastOccu(int *arr, int size, int key)
{
    int s = 0;
    int e = size;

    int mid = (s + e) / 2;
    int ans = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
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
    int key;
    cout << "Enter the value of key" << endl;
    cin >> key;

    int prabhat = firstOccu(arr, size, key);
    int kumar = lastOccu(arr, size, key);
    int mishra = (kumar - prabhat) + 1;

    cout << "First occurance of element is found at index of"
         << " " << prabhat << endl;
    cout << "Last  occurance of element is found at index of"
         << " " << kumar << endl;
    cout << mishra << endl;
}