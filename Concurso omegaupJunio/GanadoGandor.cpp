#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string line;
    if (!getline(cin, line))
        return 0; // Leer la primera línea

    // Leer la primera línea de nombres de animales
    vector<string> animals;
    stringstream ss(line);
    string word;
    while (ss >> word)
    {
        animals.push_back(word);
    }

    vector<ll> totalAnimals(animals.size(), 0);
    unordered_map<string, vector<int>> data;
    ll maxAnimalTotal = LLONG_MIN;
    string maxAnimalName;

    // Leer el resto de las líneas
    while (getline(cin, line) && !line.empty())
    {
        stringstream ss(line);
        string name;
        ss >> name;

        vector<int> values(animals.size(), 0);
        for (size_t i = 0; i < animals.size(); ++i)
        {
            if (ss >> values[i])
            {
                totalAnimals[i] += values[i];
                if (totalAnimals[i] > maxAnimalTotal)
                {
                    maxAnimalTotal = totalAnimals[i];
                    maxAnimalName = animals[i];
                }
            }
        }
        data[name] = values;
    }

    // Encontrar el nombre con el mayor valor total
    ll maxSum = LLONG_MIN;
    string winner;
    for (const auto &entry : data)
    {
        ll sum = accumulate(entry.second.begin(), entry.second.end(), 0LL);
        if (sum > maxSum)
        {
            maxSum = sum;
            winner = entry.first;
        }
    }

    cout << winner << endl;
    cout << maxAnimalName << endl;

    return 0;
}
