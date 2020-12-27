#include "nuskaitymas.h"

void nuskaityti(string failoVardas, vector <string>& adresai)
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

    while (!fd.eof())
    {
        string eilute;
        getline(fd, eilute);

        stringstream ss(eilute);
        string zodis;

        while (ss >> zodis)
        {
            if (zodis.size() == 1 && ispunct(zodis.front())) continue;

            string tinkamasZodis = tikrintiZodi(zodis);

            if (tinkamasZodis.size() > 0)
            {
                if ((arURL(tinkamasZodis)) == true)
                {
                    adresai.push_back(tinkamasZodis);
                }
            }
            
        }

    }

    fd.close();

}