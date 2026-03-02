#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // hibás konstansnév (NELEMENTS nincs definiálva)
    std::cout << '1-100 ertekek duplazasa' // aposztróf helyett dupla idézőjel, hiányzik pontosvessző
    for (int i = 0;) // hiányzik a feltétel és az inkrement
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // a feltétel hibás (mindig false lesz)
    {
        std::cout << "Ertek:" // hiányzik pontosvessző és kiírandó érték
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs inicializálva használat előtt
    for (int i = 0; i < N_ELEMENTS, i++) // vessző helyett pontosvessző kell
    {
        atlag += b[i] // hiányzik pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
