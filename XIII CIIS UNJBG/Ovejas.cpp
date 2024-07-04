#include <iostream>
#include <vector>
#include <string>

using namespace std;

void evaluar(int);

int main()
{
    int n, x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        cout << "Case #" << i + 1 << ": ";
        evaluar(n);
    }
}

void evaluar(int n)
{
    if (n == 0)
    {
        cout << "INSOMNIA" << endl;
    }
    else
    {
        vector<int> vec(10, 0);
        int m = 0, sum = 0, aux;
        while (sum != 10)
        {
            m = m + n;
            string stri = to_string(m);
            for (int i = 0; i < stri.size(); i++)
            {
                aux = stri[i] - '0';
                if (vec[aux] == 0)
                {
                    vec[aux] = 1;
                    sum++;
                }
            }
        }
        cout << m << endl;
    }
}