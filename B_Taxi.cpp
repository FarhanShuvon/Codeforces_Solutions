#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll s;
    ll sum = 0;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    { 
        cin >> s;
        if (s != 3)
            sum = sum + s;
        else
            cnt++;
    }
    ll sum1=sum;
    if (sum % 4 == 0)
    {
        (sum) = floor(sum / 4);
    }
    else
        sum=floor(sum / 4) + 1;
    //cout << sum1 << " " << cnt << endl;
    cout<<sum+cnt<<endl;
    cout<<(3.77);
    return 0;
}