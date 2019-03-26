#include <iostream>

using namespace std;

    string login, haslo;

    int main()
    {
        cout <<"Podaj login\n";
        cin >> login;

        cout <<"Podaj haslo\n";
        cin >> haslo;

        if ((login=="Tadekbomba")&&(haslo=="maslo"))
        {
            cout <<"Zalogowano pomyslnie do systemu!\n";
        }
        else
        {
            cout <<"Bledny login lub haslo\n";
        }

        return 0;
    }
