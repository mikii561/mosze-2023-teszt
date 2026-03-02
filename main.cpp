#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // helyes konstansnév
    std::cout << "1-100 ertekek duplazasa" << std::endl; // helyes idézőjel és pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++) // feltétel és inkrement hozzáadva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // helyes feltétel
    {
        std::cout << "Ertek: " << b[i] << std::endl; // kiíratjuk a tömb elemeit
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // inicializálva
    for (int i = 0; i < N_ELEMENTS; i++) // javított elválasztó
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
