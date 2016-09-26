/**
Implementa una función para determinar si un string que llega como parámetro
contiene algún carácter único, la función tiene como salida un valor boolean.

Ejemplo Entrada:
LA CASA ENDIABLADA

Ejemplo Salida:
true
**/

#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int myArray [27]= {0};
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
                myArray[str[i]-'A']++;
        }
        else
        {
                myArray[26]++;
        }
    }

    int *end = myArray + 28;

    int *res = find(myArray, end, 1);

    if(end!=res)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;



    return 0;
}
