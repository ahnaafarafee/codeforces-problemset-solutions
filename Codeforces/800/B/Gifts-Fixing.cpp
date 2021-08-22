#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/1399/B

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int a[n], b[n];

        for (int j = 0; j < n; j++)
            cin >> a[j];

        for (int j = 0; j < n; j++)
            cin >> b[j];

        int mna = *min_element(a, a + n);
        int mnb = *min_element(b, b + n);

        long long ans = 0;

        for (int k = 0; k < n; k++)
        {
            ans += max(a[k] - mna, b[k] - mnb);
        }

        cout << ans << endl;
    }

    return 0;
}