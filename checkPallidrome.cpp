#include <bits/stdc++.h>
using namespace std;

bool PallindromeNumber(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[(str.length()) - 1])
        {
            return true;
        }
        return false;
    }

    int main()
    {
        string str;
        cout << "Enter the value of string" << endl;
        cin >> str;

        if (PallindromeNumber(str) == true)
        {
            cout << "Number is pallindrome" << endl;
        }
        else
        {
            cout << "Number is Not Pallindrome" << endl;
        }
    }