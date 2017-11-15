/*
 * tablice.cpp
 */


#include <iostream>


using namespace std;

void pobierzDane(int tab[], int ile) {
    
    cout << "Podaj" << ile << "liczb"  << endl;
    int i;
    int suma = 0;
    for(i = 0; i < ile; i ++) {
        cin >> tab [i];
        
    }
}

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Ile ocen?" << endl;
    cin >> rozmiar;
	
    
    int liczby[rozmiar];
    
    pobierzDane(liczby, rozmiar);
    cout << "suma ocen: " << sumuj (liczby, rozmiar) << endl;
    
    
       
    
int sumuj (int tab[], int ile)
    int i;
    int suma = 0;
    cout << "Podane oceny: " << endl;
    for(i = 0; i < rozmiar; i ++) {
        suma += tab [i];
        cout << tab[i] << " ";
    } 
    return suma;
    
float liczSrednia(in)
    
    
	return 0;
}

