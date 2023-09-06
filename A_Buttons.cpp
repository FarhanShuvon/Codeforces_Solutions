#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = c / 2;
        int first = a + c - ans;
        int second = b + ans;
        if (first > second)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}