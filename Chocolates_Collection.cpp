#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> v;
    while (t--)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }
    map<string, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    int cnt = 0;
    int cn = 0;
    for (auto it : mp)

    {
        if (it.second > 1)
            cnt++;
        cn++;
    }
    cout << cnt << endl;
    cout << cn << endl;
}