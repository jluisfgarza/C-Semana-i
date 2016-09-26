/**
Escribe una funci�n que reciba un string como par�metro, y regrese de salida un
string invirtiendo las letras del alfabeto A -> Z, B -> Y, C -> X, etc.
El string de entrada solo tiene letras en may�sculas del alfabeto americano.

Ejemplo Entrada:
ABCDXYZ

Ejemplo Salida:
ZYXWCBA
**/

#include <iostream>

using namespace std;

int main()
{
    string n = "";
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        n[i] = 'Z' - (n[i] - 'A');
    }
    cout << n;

    return 0;
}
