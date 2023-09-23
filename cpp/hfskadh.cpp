#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt;
        string a;
        cin >> a;
        string b = a;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i])
                cnt++;
        }
        if (cnt > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
