#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h;
        cin >> h;
        int cnt = 0, red = 0, c = 0;
        for (int i = 0; i < (h.length() - 1); i=i+1)
        {
            if (h[i] == h[i + 1])
                cnt++;
            if (h[i] != h[i + 1])
                c++;
        }
        if (cnt >= 2)
        {
            red++;
        }
        c = (c / 2);
        cout << red+c << endl;
    }
    return 0;
}