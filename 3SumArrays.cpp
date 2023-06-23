#include <bits/stdc++.h>
using namespace std;

void ThreeSum(int size, int arr[], int sum)
{
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = i + 2; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
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

    int sum;
    cout << "Enter the Target Value to find" << endl;
    cin >> sum;
    ThreeSum(size, arr, sum);
}