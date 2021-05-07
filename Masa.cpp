//
// Created by mitza on 5/4/2021.
//

#include "Masa.h"
#include <iostream>
using namespace std;

Masa::Masa(int capacitate) {
    Masa::capacitate_masa = capacitate;
    ocupata=false;
    nr_persoane = 0;
    nr_mese_totale ++;
    nr_masa = nr_mese_totale;
}

void Masa::ocupa_masa(int nr_pers) {
    if (nr_persoane <= capacitate_masa)
        if (ocupata == false)
        {
            ocupata = true;
            nr_persoane = nr_pers;
        }
}

void Masa::elibereaza_masa() {
    if (ocupata == true)
    {
        ocupata == false;
        nr_persoane = 0;
    }
}

std::ostream &operator<<(ostream &os, Masa ms) {
    if (ms.ocupata) {
        os << "La masa " << ms.nr_masa << " se afla " << ms.nr_persoane << " persoane." << '\n';
    }
    else {
        os << "Masa " << ms.nr_masa << "este libera, avand capacitatea de " << ms.nr_persoane << " persoane." << '\n';
    }

    return os;
}