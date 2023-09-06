#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> v;
        // v.pb(y);
        int cnt = 0;
        while (z--)
        {
            y = y - cnt;
            v.pb(y);
            cnt++;
        }
        int n=v.size();
        if (x > y)
            cout << -1 << endl;
        else
        {
            reverse(v.begin(), v.end());
            v[0] = x;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}