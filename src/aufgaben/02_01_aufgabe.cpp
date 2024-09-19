#include <iostream>
#include <vector>

//wenn volumen_temp kleiner als volumen_max: andere seite änden!!!


int berechneVolumen(std::vector<int> eingabe)
{
    int index_r = eingabe.size() - 1;
    int index_l = 0;
    int max_volumen = 0;
    while(index_r > index_l)
    {
        int length = index_r - index_l;
        int height = std::min(eingabe[index_l], eingabe[index_r]);
        max_volumen = std::max(max_volumen, length * height); 

        if(eingabe[index_l] < eingabe[index_r])
        {
            index_l ++;
        }
        else
            index_r --;
    }



    return max_volumen;
}


int main()
{
    std::vector<int> eingabe_1{8, 3, 7, 9, 3, 2, 5, 7, 2, 3, 4};       // erwarteter output 49
    std::vector<int> eingabe_2{1, 1};                                  // erwarteter output 1
    std::vector<int> eingabe_3{8, 6, 2, 5, 4, 8, 3, 7, 9, 3, 2, 5, 7}; // erwarteter output 84

    std::cout << "Max Volumen eingabe 1 " << berechneVolumen(eingabe_1) << std::endl;
    std::cout << "Max Volumen eingabe 2 " << berechneVolumen(eingabe_2) << std::endl;
    std::cout << "Max Volumen eingabe 3 " << berechneVolumen(eingabe_3) << std::endl;

    return 0;
}