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
int ans = 1;
void solve()
{
    /*  int n;
     cin >> n;
     int a, b;
     cin >> a >> b;
     int arr[n];
     int cnt = 0;
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }
     if (b % a == 0)
         cnt = b;
     else
         cnt = b - 1; */
    /* int cnt = 0;
   int ans = 1;
   sort(arr, arr + n);
   for (int i = 0; i < n; i++)
   {
       for (int j = i + 1; j < n; j++)
       {
           if (arr[i] + arr[j] >= a && arr[i] + arr[j] <= b)
               cnt++;
       }
   }*/
    /*  cout << "Case " << ans << ": " << cnt << endl;
     ans++; */
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int ans = 1;
    while (t--)
    {
        solve();
        int n;
        cin >> n;
        int a, b;
        cin >> a >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] >= a && arr[i] + arr[j] <= b)
                    cnt++;
            }
        }
        cout << "Case " << ans << ": " << cnt << endl;
        ans++;
    }
    return 0;
}
