#include <iostream>
#include <vector>

int main()
{
    std::vector<int> eingabe{5, 34, 2, 8, 6, 2};

    for(int index; index < eingabe.size();index++)
    {
        int temp = eingabe[index];
        eingabe[index] = 1;
        int variable = 1; 
        for(int i = 0; i < eingabe.size(); i++)
        {   
            variable *= eingabe[i];
             
        }
        std::cout << "Ausgabe der Produkte " << variable << std::endl;
        eingabe[index] = temp;
        
    }
    

    return 0;
}