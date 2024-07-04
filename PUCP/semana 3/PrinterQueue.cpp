#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int m, p, q1 = 0, q2 = 0, aux, cont = 0, busc;
        cin >> m >> p;
        vector<int> c1, c2;
        c1.reserve(m);
        c2.reserve(m);

        for (int i = 0; i < m; i++)
        {
            cin >> aux;
            c1.push_back(aux);
            c2.push_back(aux);
        }
        busc = c1[p];
        sort(c2.begin(), c2.end());
        reverse(c2.begin(), c2.end());

        do
        {
            if (c1[q1] != c2[q2])
            {
                c1.push_back(c1[q1]);
                c1[q1] = 0;
                q1++;
                for (auto c : c1)
                {
                    cout << c << "  ";
                }
                cout << endl;
                cout << "Q1: " << q1 << endl;
                cout << "Q2: " << q2 << endl;
                cout << "\n";
            }
            else
            {
                if (busc != c1[q1])
                {
                    q1++;
                    q2++;
                    cont++;
                    cout << "Q1: " << q1 << endl;
                    cout << "Q2: " << q2 << endl;
                }
            }
        } while (busc != c1[q1] || c1[q1] != c2[q2]);
        cout << cont << "\n";
    }

    return 0;
}