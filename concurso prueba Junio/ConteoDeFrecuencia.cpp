#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        map<char, long long> map;
        long long tam = x.size();
        for (long long j = 0; j < tam; j++)
        {
            map[x[j]] += 1;
        }

        for (const auto &elemento : map)
        {
            cout << elemento.first << ":" << elemento.second << " ";
        }
        cout << "\n";
    }
}