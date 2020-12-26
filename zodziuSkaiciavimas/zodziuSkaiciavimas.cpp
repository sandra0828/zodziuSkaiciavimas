#include <iostream>
#include "nuskaitymas.h"

int main()
{
    map <string, Zodis> zodziai;

    string failoVardas;

    std::cout << "Iveskite failo varda: " << std::endl;
    std::cin >> failoVardas;

    nuskaityti(failoVardas + ".txt", zodziai);
    spausdintiAtsakyma(zodziai);
}