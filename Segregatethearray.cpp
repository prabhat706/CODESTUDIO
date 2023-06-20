#include <bits/stdc++.h>
using namespace std;

void SegregateArray(int size, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            count++;
    }
    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }
    for (int i = count; i < size; i++)
    {
        arr[i] = 1;
    }
}
int main()
{
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Segregate Array is" << endl;

    SegregateArray(size, arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// void SegregateArray(int size, int arr[])
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
// }

// int main()
// {
//     int size;
//     cout << "Enter the value of size" << endl;
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Segregate Array is " << endl;

//     SegregateArray(size, arr);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }