#include <iostream>
#include "nuskaitymas.h"

int main()
{
    map <string, Zodis> zodziai;

    nuskaityti("BigData.txt", zodziai);
    spausdintiAtsakyma(zodziai);
}