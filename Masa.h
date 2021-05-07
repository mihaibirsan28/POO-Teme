//
// Created by mitza on 5/4/2021.
//

#ifndef POO_PROIECT_RESTAURANT_MASA_H
#define POO_PROIECT_RESTAURANT_MASA_H

#include <bits/stdc++.h>
#include "Client.h"

using namespace std;

class Masa {
public:
    explicit Masa(int capacitate);
    void ocupa_masa(int nr_pers);
    void elibereaza_masa();
    friend std::ostream &operator<<(std::ostream &os, Masa ms);
private:
    static int nr_mese_totale;
    int nr_masa;
    int capacitate_masa;
    int nr_persoane;
    bool ocupata;
};


#endif //POO_PROIECT_RESTAURANT_MASA_H
