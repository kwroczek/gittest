/*
 * sumuj.cpp
 *
 */
 


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma = 0; // suma kolejnych liczb
    int liczba = 0; // liczba wprowadzana
    
    for (;;) //pętla nieskończona
    {
        
         cout << "podaj liczbę" << endl;
         cin >> liczba;
         suma = suma + liczba;
         if (suma > 100) break;
    }
    
    cout << "suma: " << suma << endl;
    
    
	return 0;
}

