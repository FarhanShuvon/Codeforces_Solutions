#include <bits/stdc++.h>
#define ll long long // _sHuVoN_
using namespace std;
int main()
{
    // 1 5 10 20 100
    ll n, sum=0;
    cin >> n;
    sum = sum + n / 100;
    n = (n % 100);
    sum = sum + n / 20;
    n = (n % 20);
    sum = sum + n / 10;
    n = (n % 10);
    sum = sum + n / 5;
    n = (n % 5);
    sum = sum + n / 1;
    cout << sum;

    return 0;
}