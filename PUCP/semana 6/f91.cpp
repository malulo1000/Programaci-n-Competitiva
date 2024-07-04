#include <iostream>

int f91(int x)
{
    if (x <= 100)
        return f91(f91(x + 11));
    else
        return x - 10;
}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    while (std::cin >> n && n != 0)
        std::cout << "f91(" << n << ") = " << f91(n) << "\n";

    return 0;
}