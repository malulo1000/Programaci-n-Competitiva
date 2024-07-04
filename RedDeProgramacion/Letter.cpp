#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct FreqLetra
{
    char letra;
    int conteo;
};

bool compararPorConteo(const FreqLetra &a, const FreqLetra &b)
{
    if (a.conteo == b.conteo)
    {
        return a.letra < b.letra;
    }
    return a.conteo > b.conteo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m = 0;
    cin >> n;
    cin.ignore();

    vector<string> palabras(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, palabras[i]);
        m = max(m, static_cast<int>(palabras[i].length()));
    }

    vector<vector<FreqLetra>> freqLetras(m);

    for (const string &palabra : palabras)
    {
        int len = palabra.length();
        for (int i = 0; i < len; i++)
        {
            char letra = palabra[i];
            bool encontrado = false;
            vector<FreqLetra> &freq = freqLetras[i];
            for (FreqLetra &frecuencia : freq)
            {
                if (frecuencia.letra == letra)
                {
                    frecuencia.conteo++;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
            {
                freq.push_back({letra, 1});
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        vector<FreqLetra> &freq = freqLetras[i];

        sort(freq.begin(), freq.end(), compararPorConteo);

        int conteoMaximo = freq[0].conteo;
        cout << i + 1 << ":";
        for (const FreqLetra &frecuencia : freq)
        {
            if (frecuencia.conteo == conteoMaximo)
            {
                cout << " " << frecuencia.letra;
            }
        }
        cout << "\n";
    }

    return 0;
}
