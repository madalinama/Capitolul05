/*În main.cpp definiți funcția Ameteala care primește trei parametri:
parametrul parSiVal, de tip int, transmis prin valoare; parametrul parTyRef, de tip int, transmis prin referință
parametrul parTotPont, de tip pointer la int; ... și nu returnează nimic
În funcția Ameteala:
atribuiți lui parSiVal valoarea lui triplată; atribuiți lui parTyRef valoarea lui triplată; atribuiți variabilei indicată de parTotPont valoarea ei dublată
În funcția main.cpp:
definiți variabila drunkenRat și inițializați-o
apelați funcția Ameteala folosind variabila drunkenRat pentru toți cei trei parametri.
afișați valoarea variabilei drunkenRat.
Cu cât ar trebui inițializați drunkenRat ca valoarea afișată la final să fie 216 ?
Precizați valoarea în răspunsul pe care îl puneți pe platformă.*/
#include <iostream>

using namespace std;
 void Ameteala (int parSiVal, int& parTyRef, int* parTotPont)
    {
       parSiVal*=3;
       parTyRef*=3;
       *parTotPont*=2;
    }
int main()
{
    int drunkenRat=36;
    Ameteala(drunkenRat,drunkenRat,&drunkenRat);
    cout << drunkenRat<<endl;
    return 0;
}
