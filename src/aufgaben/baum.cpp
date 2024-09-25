#include <iostream>
#include <typeinfo>
// Baumgeneration
int main()
{
  int height;
  std::cout << "Please enter your preferred height of the tree: " << std::endl;
  std::cin >> height;
  std::cout << "Height is: " << height << std::endl;
  height -= 1;
  for (int u_height; u_height < height; u_height++)
  {
    for (int j = 0; j < (height - u_height); j++) // leerzeichen generieren
    {
      std::cout << " ";
    }
    if (u_height == 0) //"Stamm generieren"
    {
      std::cout << "*" << std::endl;
    }
    else
    {
      std::cout << "*";
      for (int i = 0; i < u_height; i++)
      {
        std::cout << "*" << "*";
      }
      std::cout << std::endl;
    }
  }
  if(height < 20)
  {
  for (int j = 0; j < height; j++)
  {
    std::cout << " ";
  }
  std::cout << "*" << std::endl;
  }
  else if(height < 40)
  {
    for(int j = 0; j < height - 1; j++)
    {
      std::cout<< " ";
    }
  std::cout << "***" << std::endl;
  for (int j = 0; j < height - 1; j++)
  {
    std::cout << " ";
  }
  std::cout << "***" << std::endl;
  }

  std::cout << std::endl
            << std::endl
            << std::endl;
}