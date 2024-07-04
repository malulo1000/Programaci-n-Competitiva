#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long ll;
typedef vector<int> vec;
typedef stack<int> st;
typedef map<string, int> mp;

#define outf(a) cout << a << "\n";
#define outl(a) cout << " " << a;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, x;

    cin >> a >> b;
    x = (b + a) / 2;

    if (b - x == x - a)
        cout << x << "\n";
    else
        cout << "IMPOSIBLE\n";

    return 0;
}