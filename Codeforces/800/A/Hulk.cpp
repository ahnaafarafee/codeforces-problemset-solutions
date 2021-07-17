#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/705/A

int main()
{
    int n;
    string hate = "I hate ", love = "I love ", main_str = "", t = "that ", i = "it";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            main_str = main_str + hate + t;
        }
        else
        {
            main_str = main_str + love + t;
        }
    }

    // remplaces main_str.length() - 5 chars from 4 th index with i
    cout << main_str.replace(main_str.length() - 5, 4, i) << endl;

    return 0;
}