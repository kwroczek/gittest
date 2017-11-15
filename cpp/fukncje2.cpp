/*
 * fukncje.cpp
 * tworzy się je po to, by móc ją użyć wielokrotnie
 */


#include <iostream>

using namespace std;

//int liczba = 0; // zmienne globalne
//int krok = 0; // zmienne globalne

//~void zwieksz1() 
//~{
        //~liczba += krok;        
//~}

void zwieksz2(int liczba, int krok) // przekazywanie przez wartość
{
        liczba += krok; 
        cout << "liczba: " << liczba << endl;
}

void zwieksz3(int &liczba, int &krok) // przekazywanie przez wartość
{
        liczba += krok; 
        cout << "liczba: " << liczba << endl;
}

int main(int argc, char **argv)
{
    int liczba, krok; // zmienne lokalne
    liczba = krok = 0;
    
    
    cout <<"podaj liczbę i krok: " << endl;
    cin >> liczba >> krok;
    
    cout << &liczba << " " << &krok << endl;
    
    zwieksz3(liczba, krok);
    zwieksz3(liczba, krok);
    zwieksz3(liczba, krok);
    
    
    cout << "Liczba: " << liczba << endl; 
    cout << "Krok: " << krok << endl;
    
	return 0;
}

