#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string imie;
    int wiek;
    cout << "Hej! Podaj swoje imie:" << endl;
    cin >> imie;
    cin.ignore();
    cout << "Podaj swoj wiek:" << endl;
    cin >> wiek;
    cin.ignore();
    cout << "Masz na imie " <<imie<< " i masz " <<wiek<< " lat." << endl;

    return 0;
}
