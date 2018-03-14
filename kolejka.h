#ifndef KOLEJKA_H_INCLUDED
#define KOLEJKA_H_INCLUDED

using namespace std;

//KLASA KOLEJKI
class kolejka {
private:
    int id_pierwszy;
    int l_el;
    int max_l_el;
    float * element; //tablica dynamiczna zawierajaca elementy kolejki
    int id_za_ostatnim (void); //metoda pomocnicza zwracajaca id pierwszego wolnego miejsca w kolejce (nastepne za ostatnim)
    int id_i (int); //metoda pomocnicza zwracajaca id i-tego miejsca w kolejce (gdzie 0 to id pierwszego elementu)
public:

    kolejka(int max_rozmiar) //konstruktor kolejki
    {
        id_pierwszy=0;
        l_el=0;
        element= new float[max_rozmiar]; //tworzenie tablicy dynamicznej o zadanym rozmiarze kolejki
        max_l_el=max_rozmiar;
    }

    int podaj_rozmiar (void); //metoda zwracajaca rozmiar kolejki
    float pobierz (void); //metoda pobierajaca pierwszy element kolejki
    int czy_pusta (void); //metoda zwracajaca czy kolejka jest pusta
    int czy_pelna (void); //metoda zwracajaca czy kolejka jest pelna
    void dodaj_nadpisz (float); //metoda dodajaca element do kolejki z nadpisywaniem po przekroczeniu maksymalnego rozmiaru
    void dodaj_bez_nadpisu (float); //metoda dodajaca element do kolejki bez nadpisu po przekorczeniu maksymalnego rozmiaru

    kolejka operator+(kolejka&); //metoda dodajaca do siebie dwie kolejki zwracajaca nowa kolejke
    void operator+=(kolejka&); //metoda dodajaca do jednej kolejki druga
    bool operator==(kolejka&); //metoda porownujaca czy kolejki sa takie same
    bool operator!=(kolejka&); //metoda sprawdzajaca czy kolejki sa rozne
    friend ostream& operator<<(ostream&, kolejka&); //metoda drukujaca kolejke (jej elementy rozdzielone spacja)
};


#endif // KOLEJKA_H_INCLUDED
