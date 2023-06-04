#include <bits/stdc++.h>
using namespace std;

void commonElement(int n, int m, int p, int arr1[], int arr2[], int arr3[])
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
                {
                    cout << arr1[i] << " ";
                    flag = 1;
                }
            }
        }
    }
    if (flag == 0)
    {
        cout << "No Element is common in any of the three arrays" << endl;
    }
}

int main()
{
    int n, m, p;
    cout << "Enter the value of n , m and p" << endl;
    cin >> n >> m >> p;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[m];
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    int arr3[p];
    for (int k = 0; k < p; k++)
    {
        cin >> arr3[k];
    }
    commonElement(n, m, p, arr1, arr2, arr3);
}