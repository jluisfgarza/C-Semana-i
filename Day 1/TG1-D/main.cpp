/**
Escribe una función que dados dos strings que llegan de cómo parámetros,
regrese booleano diciendo si uno es la permutación del otro.

Los strings de entrada solo tiene letras en mayúsculas del alfabeto americano.

Ejemplo Entrada:
ABCDXYZ
BCAXYZZ

Ejemplo Salida:
false
**/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "";
    string str2 = "";
    cin >> str;
    cin >> str2;

    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());

    if (str.compare(str2) == 0)
        cout << "true";
    else
        cout << "false";

    return 0;
}
