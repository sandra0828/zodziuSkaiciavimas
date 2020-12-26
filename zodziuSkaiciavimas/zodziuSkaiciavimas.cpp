#include <iostream>
#include "nuskaitymas.h"

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    map <string, Zodis> zodziai;

    string failoVardas;

    std::cout << "Iveskite failo varda: " << std::endl;
    std::cin >> failoVardas;

    nuskaityti(failoVardas + ".txt", zodziai);
    spausdintiAtsakyma(zodziai);
}