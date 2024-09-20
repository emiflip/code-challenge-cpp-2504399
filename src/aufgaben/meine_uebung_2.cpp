#include <string>       //bibliothek zum benutzen von string
#include <cstdint>      //biblitohek aus c(nur c) werden mit einem kleinen c vorne gekennzeichnet
#include <iostream>     //bibliothek zum benutzen der tastatur
#include <typeinfo>     //bibliothek um herauszufinden, welcher typ eine variable hat mit 'typeid(eigene_variable).name()

#define CAPACITY 5000   //compiler ersetzt jedes mal, wenn er das wort 'CAPACITY' im code findet den wert mit 5000
#define DEBUG           // #define wird auch makro genannt, ist aber anscheinend eine schlechte praxix
                        // auch directive genannt
//definitionen, zum Merken
int main ()
{
  //von c++ unterstützte datentypen
  int a = 1;          //32 bit normal, auch 16 möglich /chars können benutzt werden als int / stdint.h enthält portable typen wie uint32_t (unsignet int, 32 bit)
                      //int :: 123, -5 (standart), 023 (octal), 0x3A (Hexadezimal), 0b1100 (binary), 23U (unsigned) //unsigned hat nur positive stellen, signed positive und negative : u = 0, 1, 2, 3, 4 s = -2, -1, 0, 1, 2
  float b = 1.333333; //IEEE754 binary floating point (double das selbe, aber recourcenaufwendiger, long double)
                      //float :: 23.0f (float) double :: 23.3
  bool c = true;      //wahr oder falsch (true/false), 0 = false, != 0 = true
  std::string d = "D";//nicht nativ unterstüzt, dennoch durch die c++ standartbibliothek verfügbar mit std::string abrufbar. 
                      //char :: 'a', 'X', '\0' für das ende eines strings, '\n' für eine neue zeile

                      //pointer, rufem ram addresse auf /* (dereferenziert pointer, gibt variable aus, zu der gezeigt wird), & (gibt adresse der variable aus), -> (verschafft zugriff auf elemente einer klasse oder strukturen)
                      //operatoren:  /Arithmetic: +, -, *, /, %      /bitwise: &, |, ~, ^     /locical: &&, ||, ! -> not /==, !=, >, <, >=, <= 
  auto e = 989;       //definiert typ der variable automatisch
  const int f = 3;    //constant qualifier, variable kann nicht bearbeitet werden
  int array[3];       //homogener datentyp, sammlung von daten, fixe größe, wenn eingestellt, ganzes array ist sequentiell im ram
  array[0] = 25;      //definieren von elementen aus dem array mit dem index in eckigen klammern
  int new_array[] = {2, 3, 4, 5, 6, 7};//so kann man auch arrays definieren, auto funktioniert nicht für array
  


#ifdef DEBUG
  std::cout << "[About to perform the addidion]" << std::endl; // für debugging zwecke
#endif

std::cout << std::endl;
return 0;
}