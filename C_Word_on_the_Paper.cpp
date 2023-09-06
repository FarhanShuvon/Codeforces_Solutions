#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 8;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            for (int j = 0; j < str.length(); j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                    cout << str[j];
            }
        }
        cout<<endl;
    }
    return 0;
}