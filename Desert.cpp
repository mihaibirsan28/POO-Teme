//
// Created by mitza on 5/4/2021.
//

#include "Desert.h"

Desert::Desert(char *nume_desert, int nr): nr_cupe(nr) {
    strcpy(nume, nume_desert);
    if (strcmp(nume, "Inghetata")==0)
    {
        pret = 4 * nr_cupe;
    }
    if (strcmp(nume, "Tort Krantz")==0)
        pret = 20;
}

Desert::Desert() : nr_cupe(0) {
    pret = 0;
    strcpy(nume,"");
}

std::ostream &operator<<(std::ostream &os, Desert &d) {
    os<<"   "<<d.nume;
    if(strcmp(d.nume,"Inghetata")==0)
    {
        os<<" "<<d.nr_cupe<<" cupe";
    }
    os<<": "<<d.pret<<'\n';
    return os;
}