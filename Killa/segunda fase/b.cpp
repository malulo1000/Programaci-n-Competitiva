#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<string, int> mp;

mp memo;

#define outf(a) cout << a << "\n";
#define outl(a) cout << " " << a;

int contador = 0;

void s(int a, int b, int c, int x, int lim)
{
    if (a <= lim && b <= lim && c <= lim && (a + b + c) <= x)
    {

        string aux;

        aux.push_back(a + '0');
        aux.push_back(b + '0');
        aux.push_back(c + '0');
        if (memo.find(aux) != memo.end())
        {
        }
        else
        {
            if ((a + b + c) == x)
            {

                memo[aux] = 1;

                contador++;
            }
            else
            {
                memo[aux] = 0;
            }

            if (a < lim && b < lim && c < lim)
            {
                s(a + 1, b, c + 1, x, lim);
                s(a, b + 1, c + 1, x, lim);
                s(a + 1, b + 1, c, x, lim);
                if (a < x)
                {
                    s(a + 1, b, c, x, lim);
                }
                if (b < x)
                {

                    s(a, b + 1, c, x, lim);
                }
                if (c < x)
                {

                    s(a, b, c + 1, x, lim);
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int beb, coc;

    cin >> beb >> coc;
    s(0, 0, 0, coc, beb);
    if (beb * 3 == coc)
    {
        contador++;
    }

    cout << contador << "\n";

    return 0;
}