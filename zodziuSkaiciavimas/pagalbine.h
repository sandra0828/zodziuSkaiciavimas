#pragma once

#include "zodis.h"
#include <map>
#include <string>
#include <iostream>

using std::map;
using std::string;
using std::pair;

void pridetiZodi(string zodis, int kuriEilute, map <string, Zodis>& zodziai);
string tikrintiZodi(string zodis);
void spausdintiAtsakyma(map <string, Zodis> zodziai);
void spausdintiVektoriu(vector <int> kurioseEilutese);

