#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int minDistinctPersonsSeen(string events)
{
    unordered_set<int> seen_persons;
    int current_persons = 0;

    for (char event : events)
    {
        if (event == '+')
        {
            current_persons++;
            seen_persons.insert(current_persons);
        }
        else if (event == '-')
        {
            seen_persons.erase(current_persons);
            current_persons--;
        }
    }

    return seen_persons.size();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Para leer el salto de línea después de t

    for (int i = 0; i < t; ++i)
    {
        string events;
        getline(cin, events);
        int min_persons = minDistinctPersonsSeen(events);
        cout << min_persons << endl;
    }

    return 0;
}
