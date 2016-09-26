/**
Escribe una funci�n que dados dos strings que llegan de c�mo par�metros,
regrese booleano diciendo si uno es la permutaci�n del otro.

Los strings de entrada solo tiene letras en may�sculas del alfabeto americano.

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

    if (str.length() == str2.length())
    {
      sort(str.begin(), str.end());
      sort(str2.begin(), str2.end());

      if (str.compare(str2) == 0)
      cout << "true";
      else
      cout << "false";
    }
    else
      cout << "false";
    return 0;
}
