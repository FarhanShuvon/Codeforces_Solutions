#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum1 = a + (b * c);
    ll sum2 = a * (b + c);
    ll sum3 = (a * b) * c;
    ll sum4 = (a + b) * c;
    ll sum5 = (a + b) + c;
    ll ans = max(max(max(max(sum1, sum2), sum3), sum4), sum5);
    cout << ans << endl;

    return 0;
}