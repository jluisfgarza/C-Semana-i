/**
Implementa una función para ejecutar la compresión de strings usando los
contadores de los caracteres repetidos continuos.

El string de entrada solo tiene letras en mayúsculas del alfabeto americano.

Ejemplo Entrada:
AABCCADBBBB

Ejemplo Salida:
2AB2CAD4B
**/

#include <iostream>

using namespace std;

int main()
{
    int cont=1;
    string str;
    cin>>str;
    char letra=str[0];
    for(int i=1;i<str.length()+1;i++)
    {
        if(str[i]==letra)
        {
            cont++;
        }
        else
        {
        if(cont>1)
        {
            cout<<cont<<letra;
        }
        else
        {
            cout<<letra;
        }
        cont=1;
        letra=str[i];
        }
    }

    return 0;
}

