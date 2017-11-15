/*
 * petle_switch.cpp
 * program pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
        int m = 0;
        
        //while (1) {
        //cout << "Podaj miesiąc:" << endl;
        //cin >> m;
        //if (m < 13 && m >0)
            //break;
        //};
         
    //pętle zaporowe
    char zn = 't'; // deklaracja
    
    
    while (zn == 't' || zn == 'T' || zn == 'n' || zn == 'N') {
        cout << "Podaj znak (t, T, n, N):" << endl;
        cin >> zn;
        
        
        
        
        
        
        //if (zn == 't' || zn == 'T' || zn == 'n' || zn == 'N')
           // cout << zn << endl;
        //else
            //break;
            
    };
    

	return 0;
}

