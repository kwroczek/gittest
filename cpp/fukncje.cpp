/*
 * fukncje.cpp
 * tworzy się je po to, by móc ją użyć wielokrotnie
 */


#include <iostream>

using namespace std;

void dodaj(int a, int b)
//nie zwraca wyniku
{
    cout << "Suma: " << a + b << endl;
}

int odejmij(int l1, int l2)
{
    return l1-l2;
}

int iloczyn (int l1, int l2)
{
    if (l2 == 0) {
        cout << "pamiętaj cholero, nie dziel przez zero!" << endl;
        }
    return l1*l2;

}

int iloraz (int l1, int l2)
{
    return l1/l2;
}

int main(int argc, char **argv)
{
    int a, b;	
    a = b = 0;
    
    cout << "podaj dwie liczby" << endl;
    cin >>a >> b;
    
    dodaj(a, b); //wywołanie funkcji
    cout << "Różnica: " << odejmij (a, b) << endl;                           
    
    dodaj (a, b);
    cout << "Iloczyn: " << iloczyn (a, b) << endl;
    
    dodaj (a, b);
    cout << "Iloraz: " << iloraz (a, b) << endl;
      
    
	return 0;
}

