#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/723/A

int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    int a = abs(arr[0] - arr[1]);
    int b = abs(arr[1] - arr[2]);

    cout << a + b << endl;

    return 0;
}