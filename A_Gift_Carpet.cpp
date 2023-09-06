#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            sort(str.begin(), str.end());
            reverse(str.begin(), str.end());

            if (str == "vika")
            {
                cnt = 1;
                break;
            }
            else if (str[0] == 'v' && i == 0)
                cnt = 1;
            else if (str[0] == 'i' && i == 1)
                cnt = 1;
            else if (str[0] == 'k' && i == 2)
            {
                cnt = 1;
            }
            else if (str[3] == 'a' && i == 3)
                cnt = 1;
            if (i == 2)
                cout << str[0] << endl;
        }
        if (cnt == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}