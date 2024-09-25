#include <iostream>
#include <string>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// strukturenübung, container
enum class tennis
{
  ball,
  schläger,
  schuhe,
  boden,
  netz
};
enum class baseball
{
  schläger,
  ball
};

int main()
{
  tennis werkzeug = tennis::schläger;
  baseball a = baseball::schläger;

  cout << (int)werkzeug << (int)a;
}

/*Wie würde ich enum beschreiben?
Ich würde sagen enum ist eine zuordnung von zahlen zu einem objekt
In excel z.B. Spalte 1: A Spalte 2: B usw.
nur hier halt mit eigenen definierten namen.

das class bedeutet, dass die enum nichtmehr global ist, und somit keine doppelte definierung stattfinden kann --> qualitativ hochwertigerer code
wenn man class benutzt, muss man aber als variabeltyp die klasse nehmen und mit "classenname"::"objekt aus der klasse" benennen. im cout können eigene variablentypen nicht ausgegeben werden, weshalb man hier mit (int) to integer castet, was cout ausgeben kann.
*/
