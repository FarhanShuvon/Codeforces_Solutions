#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    reverse(str.begin(), str.end());
    int t = n - a;
    for (int i = 0; i < t; i++)
    {
        cout << str[i] << endl;
    }
}