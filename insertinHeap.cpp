#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;

    void insertinHeap(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    h.insertinHeap(70);
    h.insertinHeap(60);
    h.insertinHeap(50);
    h.insertinHeap(40);
    h.insertinHeap(30);
    h.insertinHeap(20);
    h.print();
}