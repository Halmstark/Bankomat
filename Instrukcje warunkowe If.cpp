#include <iostream>

using namespace std;

    string login;
    string haslo;
    string PIN;
    int konto = 30000;
    int x;

    int main()
    {
        cout << "Witaj na naszej stronie internetowej \n";

        cout << "Podaj login i haslo \n";
        cin >>login >> haslo;

        if ((login=="tadekbomba")&&(haslo=="maslo"))
        {
            cout << "Pomyślnie zalogowano! \n" << "Podaj numer PIN \n";
            cin >> PIN;

            if (PIN =="2137")
            {
                cout <<"Poprawny PIN \n" << "Ile pieniedzy chcesz wyplacic \n";
                cin >> x;

                if ((x>konto)||(x<=0))
                {
                    cout << "Niepoprawna kwota pieniedzy \n";
                }
                else
                {
                    cout << "Pieniadze sa w trakcie wyplacania \n" << "Zyczymy milego dnia!";
                }

            }

            else
            {
                cout <<"Niepoprawny PIN \n";
            }
        }
        else
        {
            cout << "Bledny login lub haslo \n";
        }
        return 0;
    }
