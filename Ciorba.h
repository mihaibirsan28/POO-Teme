//
// Created by mitza on 5/4/2021.
//

#ifndef POO_PROIECT_RESTAURANT_CIORBA_H
#define POO_PROIECT_RESTAURANT_CIORBA_H
#include <bits/stdc++.h>
#include "Preparat.h"
using namespace std;

class Ciorba: public Preparat{
public:

    Ciorba(char *nume_ciorba, bool s, bool a);
    Ciorba();
    friend std::ostream &operator<<(std::ostream &os, Ciorba &m);
protected:
private:
    char nume[20];
    bool smantana, ardei;
    double pret_ciorba, pret_ardei, pret_smantana;
};


#endif //POO_PROIECT_RESTAURANT_CIORBA_H
