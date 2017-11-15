//pobierz trzy liczby całkowite od użytkownika i wydrukuj największą
//a,b - licz. całko

#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    cout << "Podaj trzy liczby";
    cin >> a >> b >> c;

    if (a > b && a > c) 
    {
            cout << "Największa a=" << a;
    }
    
    if (b > a && b > c)
    {
        cout << "Największa b=" << b;
    } 
    
    if (c > a && c > b)
    {
        cout << "Najawiększe c=" << c;
    }
    
    if ( a == b && a > c )
    {
        cout << "Największe a = b =" << a;
    }
    if ( a == c && a > b )
    {
        cout << "Największe b = c =" << b;
    }
    if ( b == c && b > a )
    {
        cout << "Najwieksze b = c =" << a;
    }
    if ( a == b && a = c )
    {
        cout << "Liczby równe";
    }
    return 0;    
}




