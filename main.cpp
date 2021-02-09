#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int rozmiar = 1000;
  int licznik = 0;
  int licznik2 = 0;
  int liczba = 0;
  ifstream plik("liczby2.txt");
  int t[rozmiar];
  for (int i = 0; i < rozmiar; i++)
    plik >> t[i];
  for (int i = 0; i < rozmiar; i++) {
    liczba = t[i];
    while (liczba) {
      if (liczba % 10 == 6)
        licznik++;
      liczba = liczba / 10;
    }
    liczba = t[i];
    while (liczba) {
      if (liczba % 8 == 6)
        licznik2++;
      liczba = liczba / 8;
    }
  }
  cout << "System 8-kowy: " << licznik << "\n";
  cout << "System dziesietny: " << licznik2;
  return 0;
}
