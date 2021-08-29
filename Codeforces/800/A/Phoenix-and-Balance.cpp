#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1348/A

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        int sum1 = 0, sum2 = 0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            int p = pow(2, i + 1);
            arr[i] = p;
        }

        for (int i = 0; i < (n / 2 - 1); i++)
            sum1 = sum1 + arr[i];

        for (int i = (n / 2 - 1); i < n - 1; i++)
            sum2 = sum2 + arr[i];

        // cout << sum1 + *max_element(arr, arr + n) << " ";
        // cout << sum2 << endl;
        cout << (sum1 + *max_element(arr, arr + n)) - sum2 << endl;
    }

    return 0;
}