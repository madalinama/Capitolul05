/*5.3) Micu mare care-i ...mic
În funcția main definiți un șir de 20 de caractere.
Citiți de la tastatură un șir de litere mici și mari (fără spații !!)
Afisați șirul.
Parcurgeți șirul caracter cu caracter.
Dacă litera e mică înlocuiți-o cu echivalentul ei mare.
Dacă litera e mare înlocuiți-o cu echivalentul ei mic.
Afișați din nou șirul.

pentru a detecta dacă un caracter e mic sau mare folosiți funcțiile islower respectiv isupper
pentru a schimba un caracter din mic în mare folosiți funcția toupper
pentru a schimba un caracter din mare în mic folosiți funcția tolower
pentru a putea folosi funcțiile de mai sus trebuie să includeți în main.cpp fișierul header care conține definițiile lor.
Fișierul există deja printre fișierele instalate de mediul de programare. Numele acestui fișier este ... ușor de găsit pe internet dacă faceți o căutare */
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
   char sir[20];
   cout<<"Cititi de la tastatura un sir de caractere mici si mari fara spatii!"<<endl;
   cin>>sir;
   for(int i=0;i<sizeof(sir);i++)
    {
        if (islower(sir[i]))
        sir[i]=toupper(sir[i]);
         else if (isupper(sir[i]))
            sir[i]=tolower(sir[i]);
    }
    cout<<sir;
    return 0;
}
