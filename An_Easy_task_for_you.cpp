#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    priority_queue<long long> pq;
    for (int i = 0; i < n; ++i)
    {
        long long temp;
        cin >> temp;
        pq.push(temp);
    }

    for (int i = 0; i < m; ++i)
    {
        long long mx = pq.top();
        pq.pop();
        mx /= 2;
        pq.push(mx);
    }

    long long ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;

    return 0;
}