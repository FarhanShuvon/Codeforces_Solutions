#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string str2 = "";
        for (int i = 0; i < str.length(); i++)
        {
            str2 = str2 + str[i];
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[i] == str[j])
                {
                    i = j;
                    break;
                }
            }
        }
        cout<<str2<<endl;
    }
    return 0;
}