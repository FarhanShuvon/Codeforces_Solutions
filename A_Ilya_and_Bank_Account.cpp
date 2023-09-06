#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    string str = to_string(n);
    string str1 = str;
    string str2 = str;
    int k = str.length();
    if (n >= 0)
        cout << n << endl;
    else
    {
        if (k == 3 && n % 10 == 0)
        {
            cout << 0 << endl;
            cout << endl;
        }
        else
        {
            if (str[k - 2] > str[k - 1])
            {
                str[k - 2] = 0;
            }
            else
            {
                str[k - 1] = 0;
            }
            for (int i = 0; i < k; i++)
            {
                if (str[i] != 0)
                {
                    cout << str[i];
                }
            }
            cout << endl;
        }
    }
}
