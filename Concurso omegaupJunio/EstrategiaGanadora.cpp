#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long t, sum = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> t;
        pq.push(t);
        sum += t;
    }
    long long tot = 0;
    while (pq.size() > 1)
    {
        long long first = pq.top();
        pq.pop();
        long long second = pq.top();
        pq.pop();
        tot += sum - (first + second);
        pq.push(first + second);
    }

    cout << tot << "\n";
    return 0;
}
