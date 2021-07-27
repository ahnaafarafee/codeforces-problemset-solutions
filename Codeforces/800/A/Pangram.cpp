#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/520/A

int main()
{

    int n, count = 0;
    string s;

    cin >> n >> s;

    // converting them to uppercase latin letters
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    // sorting the string
    sort(s.begin(), s.end());

    // exclude the distinct chars
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }

    // If count is 26 then the string
    // contains all the alphabets
    if (count == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}