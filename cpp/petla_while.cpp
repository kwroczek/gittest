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
    
    while (suma <= 100) // petla nieskonczona
    {
        
         cout << "podaj liczbę" << endl;
         cin >> liczba;
         suma = suma + liczba;

    }
    
    cout << "suma: " << suma << endl;
    
    
	return 0;
}

