//
// Created by mitza on 5/4/2021.
//

#ifndef POO_PROIECT_RESTAURANT_FEL_PRINCIPAL_H
#define POO_PROIECT_RESTAURANT_FEL_PRINCIPAL_H
#include <iostream>
#include <cstring>
#include "Preparat.h"


class Fel_principal: public Preparat {
protected:
private:
    char nume[25], vita[25];
    int CumSaFieFacuta;
    char garnitura[25], garnituraPreparata[25];
    double pret_fel_principal, pret_garnitura;
public:
    explicit Fel_principal(char nume_fel[],char tvita[]=" ", int facut=2);
    Fel_principal(char nume_fel[],char nume_garnitura[], char tgarnitura[]="", char tvita[]="", int facut=2);
    Fel_pricipal();
    friend std::ostream &operator<<(std::ostream &os,Fel_principal &f);
};


#endif //POO_PROIECT_RESTAURANT_FEL_PRINCIPAL_H
