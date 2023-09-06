#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = (str[i] - '0') * 10 + (str[j] - '0');
                if (prime(ans))
                {
                    a = ans;
                    break;
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}