#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/158/A

int main()
{
    int n, k, arr[100], count = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] >= arr[k - 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}