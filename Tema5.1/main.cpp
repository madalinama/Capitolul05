/*
5.1) Mini calculator
Scrieți un program care să efectueze operațiile matematice de bază asupra a două numere.
Programul trebuie să conțină o funcție, definită în main.cpp, care să afișeze meniul opțiunilor pentru utilizator,
funcție pe care o veți apela la începutul funcției main.
un fișier Operatii.cpp și un fișier Operatii.h.
În fișierul Operatii.cpp definiți câte o funcție pentru operațiile adunare, scadere, inmultire, impartire, modulo.
Fiecare functie primeste in intrare doi parametri de tip intreg si returneaza rezultatul
operatiei matematice respective
în fișierul Operații.h puneți declarațiile tuturor funcțiilor definite în Operatii.cpp
în main.cpp includeți fișierul Operații.h
in functia main scrieti logica programului adica
apelați funcția care afișează meniul (și care nu face nimic altceva)
citiți de la consolă opțiunea utilizatorului
afișați mesajul "Introdu doua numere intregi:"
citiți de la tastatură cele două numere
folosind un switch apelați funcția care corespunde opțiunii utilizatorului și afișați
rezultatul returnat de funcție. Respectiv  afișați un mesaj de eroare dacă opțiunea e incorectă
Finalul ar trebui să arate similar cu:

Sfat: Fiind un program mai mare, abordați-l pe bucăți.
Scrieți funcția pentru meniu, adăugați în main instrucțiunile care permit citirea datelor
de la tastatură și adăugați o singură operație matematică (de ex adunarea).
Odată ce partea aceasta merge treceți la extindere și adăugați celelalte funcții.*/
#include <iostream>
#include "operatii.h"

using namespace std;

void meniuCalc()
{
    cout<<"Introdu operatia pe care vrei sa o aplici:"<<endl;
    cout<<"1 Adunare"<<endl;
    cout<<"2 Scadere"<<endl;
    cout<<"3 Inmultire"<<endl;
    cout<<"4 Impartire"<<endl;
    cout<<"5 Modulo"<<endl;
    cout<<endl;
}
int main()
{
    meniuCalc();
    int optiune, a, b,rez;
    cin>>optiune;
    cout<<"Introdu numarul 1"<<endl;
    cin>>a;
    cout<<"Introdu numarul 2"<<endl;
    cin>>b;
    switch (optiune)
    {
       case 1:cout<<a<<"+"<<b<<"="<<sum(a,b)<<endl;
              break;
       case 2:cout<<a<<"-"<<b<<"="<<dif(a,b)<<endl;
              break;
       case 3:cout<<a<<"*"<<b<<"="<<inmultire(a,b)<<endl;
              break;
       case 4:if (b!=0)
              cout<<a<<"/"<<b<<"="<<impartire(a,b)<<endl;
              else
                while (b==0)
                {
                cout<<"Impartire la 0! Introduceti un numar <> 0!"<<endl;
                cin>>b;
                cout<<a<<"/"<<b<<"="<<impartire(a,b)<<endl;}
              break;
       case 5:if (b!=0)
              cout<<a<<"/"<<b<<"="<<modulo(a,b)<<endl;
              else
                while (b==0)
                {
                cout<<"Impartire la 0! Introduceti un numar <> 0!"<<endl;
                cin>>b;
                cout<<a<<"/"<<b<<"="<<modulo(a,b)<<endl;}
              break;
       default:cout<<"Alegeti o operatie valida!"<<endl;break;
    }
    return 0;
}
