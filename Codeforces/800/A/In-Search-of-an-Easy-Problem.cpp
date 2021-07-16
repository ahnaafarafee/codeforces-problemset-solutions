#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1030/A

int main()
{
    int n, s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;

    return 0;
}