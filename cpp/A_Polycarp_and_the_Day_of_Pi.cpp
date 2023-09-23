#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h;
        string g = "314159265358979323846264338327";
        cin >> h;
        int cnt = 0;
        for (int i = 0; i < h.length(); i++)
        {

            if (h[i] == g[i])
            {
                cnt++;
            }

            else
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}
