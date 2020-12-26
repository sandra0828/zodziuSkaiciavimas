#include "pagalbine.h"


void pridetiZodi(string zodis, int kuriEilute, map <string, Zodis>& zodziai)
{
    if (zodziai.count(zodis) > 0)
    {
        zodziai[zodis].kiekPasikartoja++;
        zodziai[zodis].kurioseEilutese.push_back(kuriEilute);
    }
    else
    {
        Zodis naujas;
        naujas.kiekPasikartoja = 1;
        naujas.kurioseEilutese.push_back(kuriEilute);

        zodziai.insert(pair <string, Zodis>(zodis, naujas));
    }
}

string tikrintiZodi(string zodis)
{
    //pasalinami simboliai is zodzio pabaigos
    while (ispunct(zodis.back()) || zodis.back() == ' ')
    {
        zodis.pop_back();
    }

    // pasalinami simboliai s zodzio pradzios
    while (ispunct(zodis.front()) || zodis.front() == ' ')
    {
        zodis.erase(0, 1);
    }

    // jei visas zodis nesusideda is didziuju raidziu, pirma raide pakeiciama i mazaja 
    if (!isupper(zodis.back()))
    {
        zodis.front() = tolower(zodis.front());
    }

    return zodis;
}

void spausdintiAtsakyma(map <string, Zodis> zodziai)
{
    for (auto const& pair : zodziai)
    {
        if (pair.second.kiekPasikartoja > 1)
        {
            std::cout << pair.first << ": " << pair.second.kiekPasikartoja << " (";
            spausdintiVektoriu(pair.second.kurioseEilutese);
            std::cout << " )"  << std::endl;
        }
        
    }
}

void spausdintiVektoriu(vector <int> kurioseEilutese)
{
    for (int skaicius : kurioseEilutese)
    {
        std::cout << " " << skaicius;
    }
}