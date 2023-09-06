#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        if (d % 10 > 0)
        {
            cout << (d / 10) + 1 << endl;
        }
        else
            cout << d / 10 << endl;
    }
    return 0;
}