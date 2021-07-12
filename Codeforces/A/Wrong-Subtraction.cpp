#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/977/A

int main()
{
    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
    }

    cout << n << endl;

    return 0;
}