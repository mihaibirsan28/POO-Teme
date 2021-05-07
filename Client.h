//
// Created by mitza on 5/7/2021.
//

#ifndef POO_PROIECT_RESTAURANT_CLIENT_H
#define POO_PROIECT_RESTAURANT_CLIENT_H
#include "Ciorba.h"
#include "Fel_principal.h"
#include "Bautura.h"
#include "Desert.h"
#include "Preparat.h"
#include "Masa.h"
#include <bits/stdc++.h>


class Client {
private:
    int m_nr_mese;
    enum tipPreparat {
        BAUTURA,
        CIORBA,
        DESERT,
        FEL_PRINCIPAL,
        NONE
    };
    vector<Preparat*> m_preparate;
public:
    Client();
    void adauga_preparat(Preparat *preparat);
};


#endif //POO_PROIECT_RESTAURANT_CLIENT_H
