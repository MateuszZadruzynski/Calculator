#include <iostream>
#include <stdio.h>
#include "funkcje.h"
using namespace std;
int main(){
cout << "Czesc! To jest kalkulator tworzony przez:" << endl;
cout << "Wiktorie Roczen," << endl;
cout << "Mateusza Zadruzynskiego," << endl;
cout << "Macieja Zendarskiego," << endl;
cout << "Adriana Wysockiego." << endl;
cout << "Co chcesz zrobic? ... :";
char menu;
double a,b;
cin >>menu;
cout << "1. Dodaj";
cout << "2. Odejmij";
cout << "3. Pomnoz";
cout << "4. Podziel";
cout << endl << endl;
cout << "Podaj a: ";
cin >> a;
cout << "Podaj b: ";
cin >> b;

switch(menu){
case '1':
cout << "Wynik: " << dodawanie(a,b);
break;
case '2':
cout << "Wynik: " << odejmowanie(a,b);
break;
case '3':
cout << "Wynik: " << mnozenie(a,b);
break;
case '4':
cout << "Wynik: " << dzielenie(a,b);
break;
default: cout << "Nie wybrano nic z listy :C";
}



}
