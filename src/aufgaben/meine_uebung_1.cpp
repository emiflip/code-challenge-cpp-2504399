// hochzählen und ausgeben

#include <vector>
#include <string>
#include <iostream>
int main()
{
  bool running = true;
  std::vector<std::string> Nummern;
  Nummern.push_back("Null");
  Nummern.push_back("Eins");
  Nummern.push_back("Zwei");

  for (int i = 0; i != Nummern.size(); i++)
  {
    std::cout << Nummern[i] << std::endl;
  }
  while(running)
  {
    bool result = false;
    std::string response;
    std::string num_add;
    std::cout << "Moechten Sie noch weitere Nummern ergaenzen? (Ja/Nein) " << std::endl;
    std:: cin >> response;
    while(response == "Ja" || response == "ja" || response == "ja " || response == "Ja ")
    {
      result = true;
      response = "x";
      std::cout << "Geben Sie eine Weitere Nummer ein: " << std::endl;
      std::cin >> num_add;
      Nummern.push_back(num_add);
      std::cout << "Nummer Hinzugefügt: " << num_add << std::endl;
      std::cout << "Möchten Sie noch eine Nummer hinzufügen? (Ja/Nein) ";
      std::cin >> response;
    }
    std::cout << "Nummern, die Nun in der Liste sind: " << std::endl;
    for(int i = 0; i != Nummern.size(); i++)
    {
      std::cout << Nummern[i] << std::endl;
    }
    if(result == false)
    {
      std::cout << "Auf Wiedersehen!";
      break;
    }
  }
  std::cout << std::endl << std::endl << std::endl;
}