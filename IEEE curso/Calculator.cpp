#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    char o;
    cin >> a >> o >> b;
    switch (o)
    {
    case '+':
        cout << a + b << '\n';
        break;
    case '-':
        cout << a - b << '\n';
        break;
    case '*':
        cout << a * b << '\n';
        break;
    default:
        cout << a / b << '\n';
        break;
    }
    return 0;
}