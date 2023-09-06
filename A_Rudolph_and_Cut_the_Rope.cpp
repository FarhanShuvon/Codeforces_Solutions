#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // map<int, int> m;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            // m.insert(make_pair(a,b));
            if (a > b)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}