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
    string str;
    cin >> str;
    int n = str.length();
    vector<char> v1, v2;
    int m = n / 2;
    int k = 1;
    // v1.pb(str[0]);
    string v = "";
    v = str[0];
    // v2.pb(str[m]);
    for (int i = 1; i < n; i++)
    {
        if (str[k] == '0')
        {
            v = v + str[i];
            k++;
        }
    }
    // k++;
    if (k == n)
    {
        cout << -1 << endl;
        return;
    }
    /*    for (int i = k; i < n; i++)
      {
          v2.pb(str[i]);
      } */
    char s1[v1.size()];
    // char s2[v2.size()];
    for (int i = 0; i < v1.size(); i++)
    {
        s1[i] = v1[i];
    }
    /*  for (int i = 0; i < v2.size(); i++)
     {
         s2[i] = v2[i];
     } */
    int n1 = stoi(v);
    int n2 = stoi(str.substr(k, n));

    if (n1 >= n2)
        cout << -1 << endl;

    else
    {
        cout << n1 << " " << n2 << endl;
    }
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