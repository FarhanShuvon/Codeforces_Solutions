#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    cout << mp.size() * n << endl;
}