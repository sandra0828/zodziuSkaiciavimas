// adresuRadimas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "nuskaitymas.h"

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    string failoVardas;

    std::cout << "Iveskite failo pavadinima: " << std::endl;
    std::cin >> failoVardas;

    vector <string> adresai = {};

    nuskaityti(failoVardas + ".txt", adresai);
    spausdintiAtsakyma(adresai);
}
