//pobierz dwie liczby całkowite od użytkownika i wydrukuj większą
//a,b - licz. całko




#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
    int a, b;
    a = b = 0;
    cout << "Podaj dwie liczby";
    cin >> a >> b;

    if (a > b) 
    
    {
        cout << "Większa a=";
        cout << a;
    } else if (b > a)
    
    {
        cout << "Większa b=";
        cout << b;
    } else //if (a == b) 
    
    {
        cout << "równe, a=" << a << ", b=";
    }

    return 0;    
    
}




