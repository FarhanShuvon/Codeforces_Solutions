#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h = "codeforces";
        string g;
        cin >> g;
        int cnt = 0;
        for (int i = 0; i < h.length(); i++)
        {
            if (g[0] == h[i])
                cnt++;
        }
        if (cnt > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}