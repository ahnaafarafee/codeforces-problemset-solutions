#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1409/A

int main()
{
  int t, a, b, res, count;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    count = 0;
    cin >> a >> b;

    res = abs(a - b);

    count = count + (res / 10);

    if (res % 10 != 0)
      count++;

    cout << count << endl;
  }

  return 0;
}