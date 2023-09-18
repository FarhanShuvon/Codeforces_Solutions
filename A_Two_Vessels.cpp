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
        int cnt = 0;
        /* if (c > a + b)
            cout << 0 << endl; */
        //else
        {
            if (a > b)
            {
                while (a > b)
                {
                    a = a - c;
                    b = b + c;
                    cnt++;
                }
            }
            else
            {
                while (b > a)
                {
                    a = a + c;
                    b = b - c;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}