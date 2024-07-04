#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int binarioADecimal(string binario)
{
    int decimal = 0;
    int longitud = binario.length();

    for (int i = 0; i < longitud; i++)
    {
        if (binario[i] == '1')
        {
            decimal += (1 << (longitud - i - 1));
        }
    }

    return decimal;
}

string decimalABinario(int decimal)
{
    if (decimal == 0)
        return "0";
    string binario = "";

    while (decimal > 0)
    {
        binario = to_string(decimal % 2) + binario;
        decimal /= 2;
    }

    return binario;
}

int hexadecimalADecimal(string hexadecimal)
{
    int decimal = 0;
    int longitud = hexadecimal.length();

    for (int i = 0; i < longitud; i++)
    {
        char c = hexadecimal[i];
        int valor;

        if (c >= '0' && c <= '9')
        {
            valor = c - '0';
        }
        else if (c >= 'A' && c <= 'F')
        {
            valor = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f')
        {
            valor = 10 + (c - 'a');
        }

        decimal += valor * pow(16, longitud - i - 1);
    }

    return decimal;
}

string decimalAHexadecimal(int decimal)
{
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

int main()
{
    // Ejemplos de uso de las funciones:
    string binario = "1101";
    int decimal1 = binarioADecimal(binario);
    cout << "Binario a Decimal: " << decimal1 << endl;

    int decimal2 = 13;
    string binario2 = decimalABinario(decimal2);
    cout << "Decimal a Binario: " << binario2 << endl;

    string hexadecimal = "1A3";
    int decimal3 = hexadecimalADecimal(hexadecimal);
    cout << "Hexadecimal a Decimal: " << decimal3 << endl;

    int decimal4 = 291;
    string hexadecimal2 = decimalAHexadecimal(decimal4);
    cout << "Decimal a Hexadecimal: " << hexadecimal2 << endl;

    return 0;
}

long long MCD(long long a, long long b)
{
    if (b == 0)
        return abs(a);
    return MCD(b, a % b);
}
long long MCD(long long a, long long b)
{
    while (b != 0)
    {
        a = a % b;
        swap(a, b);
    }
    return abs(a);
}
long long MCM(long long a, long long b)
{
    return abs(a) / MCD(a, b) * abs(b);
}