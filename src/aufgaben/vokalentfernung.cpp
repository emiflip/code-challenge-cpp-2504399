#include <iostream>
#include <string>
#include <vector>
#include <typeinfo> 

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int i;
int main()
{
  vector<string> vowels = {"A", "E", "I", "O", "U", "a", "e", "i", "o", "u"};

  cout << "The vector vowels has " << vowels.size() << " elements, which are: " << endl;

  for(int i = 1; i < vowels.size() + 1; i++)
  {
    cout << i << " ";
    cout << vowels[i - 1];
    
    if(vowels.size()!= i)
    {
      cout << ", ";
    }
  }

  cout << endl << "Please enter a string to remove the vowels from: " << endl;
  string s_i_vowels;
  cin >> s_i_vowels;
  cout << "The String to remove the vowels from is: " << s_i_vowels << endl;
  for(i; i < s_i_vowels.size(); i++)
  {
    cout << typeid((const char)s_i_vowels[i]).name() << endl;
    string a = "a";
    //if((string)s_i_vowels[i] == a)
    {
      cout << " ";
    }
  }





  cout << endl << endl << endl << endl;
}

