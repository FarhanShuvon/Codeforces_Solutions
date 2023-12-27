/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Farhan Israk Shuvon
Leading Uninversity,Sylhet
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pop pop_back
#define mk make_pair
//   (__gcd(x, y))
//((x/gcd(x, y))*y)
#define F first
#define S second
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return a * (b / (gcd(a, b)));
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = 1;
    int cnt = 0;
    int tot = 0;
    vector<pair<char, int>> mp;
    for (int i = 0; i < 26; i++)
    {
        mp.pb(mk(s[i], k));
        k++;
    }
    /*     for(auto it:mp)
        {
            cout<<it.F<<" "<<it.S<<endl;
        }
     */
    map<char, int> m;
    for (auto it : str)
    {
        m[it]++;
    }
    for (auto it : m)
    {
        if (it.first == 'A' && it.second >= 1)
            cnt++;
        else if (it.first == 'B' && it.second >= 2)
            cnt++;
        else if (it.first == 'C' && it.second >= 3)
            cnt++;
        else if (it.first == 'D' && it.second >= 4)
            cnt++;
        else if (it.first == 'E' && it.second >= 5)
            cnt++;
        else if (it.first == 'F' && it.second >= 6)
            cnt++;
        else if (it.first == 'G' && it.second >= 7)
            cnt++;
        else if (it.first == 'H' && it.second >= 8)
            cnt++;
        else if (it.first == 'I' && it.second >= 9)
            cnt++;
        else if (it.first == 'J' && it.second >= 10)
            cnt++;
        else if (it.first == 'K' && it.second >= 11)
            cnt++;
        else if (it.first == 'L' && it.second >= 12)
            cnt++;
        else if (it.first == 'M' && it.second >= 13)
            cnt++;
        else if (it.first == 'N' && it.second >= 14)
            cnt++;
        else if (it.first == 'O' && it.second >= 15)
            cnt++;
        else if (it.first == 'P' && it.second >= 16)
            cnt++;
        else if (it.first == 'Q' && it.second >= 17)
            cnt++;
        else if (it.first == 'R' && it.second >= 18)
            cnt++;
        else if (it.first == 'S' && it.second >= 19)
            cnt++;
        else if (it.first == 'T' && it.second >= 20)
            cnt++;
        else if (it.first == 'U' && it.second >= 21)
            cnt++;
        else if (it.first == 'V' && it.second >= 22)
            cnt++;
        else if (it.first == 'W' && it.second >= 23)
            cnt++;
        else if (it.first == 'X' && it.second >= 24)
            cnt++;
        else if (it.first == 'Y' && it.second >= 25)
            cnt++;
        else if (it.first == 'Z' && it.second >= 26)
            cnt++;
    }

    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}