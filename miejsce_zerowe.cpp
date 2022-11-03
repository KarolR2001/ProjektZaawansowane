#include <iostream>

using namespace std;
int main()
{
    float a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    
    if( a != 0 )
    {
        cout << "Miejsce zerowe" <<( - b  / a ) << endl;
    } else 
	cout << "Funkcja nie posiada rozwiazania." << endl;
   
    
    return 0;
}
