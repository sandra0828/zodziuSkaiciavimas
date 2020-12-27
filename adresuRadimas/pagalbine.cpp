#include "pagalbine.h"

string tikrintiZodi(string zodis)
{
    //pasalinami simboliai is zodzio pabaigos
    while ((ispunct(zodis.back()) || zodis.back() == ' ') && zodis.back() != '/')
    {
        zodis.pop_back();
    }

    // pasalinami simboliai s zodzio pradzios
    while (ispunct(zodis.front()) || zodis.front() == ' ')
    {
        zodis.erase(0, 1);
    }

    return zodis;
}

bool arURL(string zodis)
{
    std::regex adresas1("^https?:\/\/.*");
    std::regex adresas2("^www\..*");


    if (regex_match(zodis, adresas1) || regex_match(zodis, adresas2))
    {
        return true;
    }
    
    return false;
}

void spausdintiAtsakyma(std::vector <string> adresai)
{
    for (string adresas : adresai)
    {
        std::cout << adresas << std::endl;
    }
}