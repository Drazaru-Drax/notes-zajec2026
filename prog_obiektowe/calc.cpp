#include iostream
#include cmath

using namespace std;

int main() {
    int ilosc;

    cout  Podaj na ilu liczbach bedziemy dzialac ;
    cin  ilosc; 

    if (ilosc = 0) {
        cout  Liczba elementow musi byc wieksza od 0!  endl;
        return 1;
    }

    double wynik;
    cout  Podaj pierwsza liczbe (1  ilosc  ) ;
    cin  wynik;

    for (int i = 2; i = ilosc; ) {
        char operacja;
        cout  nWybierz operacje (+, -, , , ^ [potega], p [pierwiastek]) ;
        cin  operacja;

        double liczba;

        switch (operacja) {
            case '+'
                cout  Podaj kolejna liczbe (  i    ilosc  ) ;
                cin  liczba;
                wynik += liczba;
                i++; 
                break;

            case '-'
                cout  Podaj kolejna liczbe (  i    ilosc  ) ;
                cin  liczba;
                wynik -= liczba;
                i++; 
                break;

            case ''
                cout  Podaj kolejna liczbe (  i    ilosc  ) ;
                cin  liczba;
                wynik = liczba;
                i++; 
                break;

            case ''
                cout  Podaj kolejna liczbe (  i    ilosc  ) ;
                cin  liczba;
                if (liczba == 0) {
                    cout  Blad matematyczny Dzielenie przez zero!  endl;
                    return 1;
                }
                wynik = liczba;
                i++;
                break;

            case '^'
                cout  Podaj wykladnik potegi ;
                cin  liczba;
                if (wynik == 0 && liczba  0) {
                    cout  Blad matematyczny Potegowanie zera do potegi ujemnej!  endl;
                    return 1;
                }
                wynik = pow(wynik, liczba);

                break;

            case 'p'
            case 'P' {
                cout  Podaj stopien pierwiastka (np. 2 dla kwadratowego) ;
                cin  liczba;

                if (liczba == 0) {
                    cout  Blad matematyczny Stopien pierwiastka nie moze wynosic 0!  endl;
                    return 1;
                }

                if (wynik  0) {
                    int stopien_int = static_castint(liczba);
                    if (liczba == stopien_int && stopien_int % 2 != 0) {
                        wynik = -pow(abs(wynik), 1.0  liczba);
                    } else {
                        cout  Blad matematyczny Pierwiastek stopnia parzystegoulamkowego z liczby ujemnej!  endl;
                        return 1;
                    }
                } else {
                    wynik = pow(wynik, 1.0  liczba);
                }

                break;
            }

            default
                cout  Nieznana operacja! Sprobuj ponownie.  endl;
                break;
        }

        cout  Aktualny wynik   wynik  endl;
    }

    cout  nOstateczny wynik   wynik  endl;

    return 0;
}