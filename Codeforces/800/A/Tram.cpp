#include <iostream>
using namespace std;
int main()
{
    int n, total = 0, max = 0;

    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        total = abs(total - a[i]) + b[i];

        if (max < total)
        {
            max = total;
        }
    }

    cout << max << endl;
}