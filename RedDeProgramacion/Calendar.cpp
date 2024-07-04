#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int dia1, mes1, anio1, diaSemana1;
    cin >> dia1 >> mes1 >> anio1 >> diaSemana1;

    int dias1 = (anio1 - 1) * 360 + (mes1 - 1) * 30 + dia1;

    int dia2, mes2, anio2;
    cin >> dia2 >> mes2 >> anio2;

    int dias2 = (anio2 - 1) * 360 + (mes2 - 1) * 30 + dia2;

    int dd = dias2 - dias1;

    int diaSemana2 = (dd % 7) + diaSemana1;

    if (diaSemana2 > 7)
    {
        diaSemana2 = diaSemana2 - 7;
    }

    cout << diaSemana2 << "\n";

    return 0;
}