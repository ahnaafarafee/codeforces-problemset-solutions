#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1360/B

/*
    খোদা জানে এটা কেমনে কাজ করসে। 
    যদি পরে কোন সময় এই কোড বেইস দেখে বুঝতে না পারি,
    আমার ব্রেইন কে মাফ করে দিয়েন।
*/

int main()
{
    int t, n, sub, min = 0;

    cin >> t;

    while (t--)
    {
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] != arr[j])
                {
                    if (i == 0 && j == 1)
                        min = abs(arr[i] - arr[j]);
                    sub = abs(arr[i] - arr[j]);
                    if (sub <= min)
                        min = sub;
                }
                else
                    min = 0; 
            }
        }
        cout << min << endl;
    }

    return 0;
}