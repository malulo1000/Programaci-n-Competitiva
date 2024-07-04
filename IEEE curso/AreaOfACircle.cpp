#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const double pi = 3.1415926535;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double x;
    cin >> x;
    x = (x * x * pi);
    cout << setprecision(11) << x << "\n";
    return 0;
}