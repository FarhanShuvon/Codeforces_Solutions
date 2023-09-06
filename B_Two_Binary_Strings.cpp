#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> a;
        cin >> b;
        int n = a.length();
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == '0' && a[i + 1] == '1')
            {
                if (b[i] == '0' && b[i + 1] == '1')
                {
                    cnt = 1;
                }
            }
        }
        if (cnt == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}