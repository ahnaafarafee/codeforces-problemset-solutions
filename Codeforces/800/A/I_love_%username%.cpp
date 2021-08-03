#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/155/A

int main()
{
    int n, count = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}