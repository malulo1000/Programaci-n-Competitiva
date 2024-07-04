#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long h1, h2, h3;
    cin >> h1 >> h2 >> h3;

    deque<long> n1(h1), n2(h2), n3(h3);
    long t1 = 0, t2 = 0, t3 = 0;

    long aux;
    for (auto &i : n1)
    {
        cin >> i;
        t1 += i;
    }

    for (auto &i : n2)
    {
        cin >> i;
        t2 += i;
    }

    for (auto &i : n3)
    {
        cin >> i;
        t3 += i;
    }

    if (t1 != t2 || t2 != t3 || t1 != t3)
    {
        do
        {
            if (t2 <= t3 && t1 <= t3)
            {
                t3 -= n3.front();
                n3.pop_front();
            }
            else if (t1 <= t2 && t3 <= t2)
            {
                t2 -= n2.front();
                n2.pop_front();
            }
            else if (t3 <= t1 && t2 <= t1)
            {
                t1 -= n1.front();
                n1.pop_front();
            }
        } while (t1 != t2 || t2 != t3 || t1 != t3);
    }

    cout << t1 << "\n";
    return 0;
}