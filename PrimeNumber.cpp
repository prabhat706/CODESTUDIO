#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is Prime number " << endl;
    }
    else
    {
        cout << "Number is not Prime number" << endl;
    }
    return 0;
}