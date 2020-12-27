#include "nuskaitymas.h"

void nuskaityti(string failoVardas, map <string, Zodis>& zodziai)
{
    ifstream fd(failoVardas);

    try
    {
        if (fd.fail())
            throw std::runtime_error("Failas nerastas \n");
    }
    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
        return;
    }

    int kuriEilute = 0;

    while (!fd.eof())
    {
        kuriEilute++;
        string eilute;
        getline(fd, eilute);

        stringstream ss(eilute);
        string zodis;

        

        while (ss >> zodis) 
        {
            string tinkamasZodis = tikrintiZodi(zodis);
            if (zodis.size() == 1 && ispunct(zodis.front())) continue;

            if (tinkamasZodis.size() > 0)
            {
                pridetiZodi(tinkamasZodis, kuriEilute, zodziai);
            }
            else continue;
        } 
        
    }

    fd.close();

}