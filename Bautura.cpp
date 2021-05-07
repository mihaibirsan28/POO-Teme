//
// Created by mitza on 5/4/2021.
//

#include "Bautura.h"


Bautura::Bautura(char *baut, char *tvin, float cant): alcool(true) {
    strcpy(bautura, baut);
    strcpy(vin, tvin);
    cantitate = cant;
    if (strcmp(bautura,"Vin varsat")==0) {
        if (strcmp(vin,"rosu")==0)
            pret = 8 * cantitate/100;
        if (strcmp(vin,"alb")==0)
            pret = 6.5 * cantitate/100;
    }
    if (strcmp(bautura,"Vin la sticla")==0)
    {
        pret = 70;
    }
}

Bautura::Bautura(char *baut, float cantit, bool alc){
    strcpy(bautura, baut);
    cantitate = cantit;
    alcool = alc;
    if (strcmp(bautura,"Bere")==0 && alcool == 1)
        pret = cantitate * 8;
    if (strcmp(bautura,"Bere")==0 && alcool == 0)
        pret = cantitate * 7;
    if (strcmp(bautura,"Apa plata")==0)
        pret = cantitate * 5;
}

Bautura::Bautura() {
    cantitate = 0;
    pret = 0;
    alcool = 0;
    strcpy(bautura,"");
}

std::ostream &operator<<(std::ostream &os, Bautura &b) {
    os<<"   ";
    if(strcmp(b.bautura,"Vin varsat")==0)
        os<<b.bautura<<' '<<b.vin<<' '<<b.cantitate<<"ml";
    else if(strcmp(b.bautura,"Sticla vin")==0)
        os << b.cantitate << "x " << b.bautura << ' ' << b.vin;
    else os << b.cantitate << "x " << b.bautura;
    os<<": "<<b.pret<<'\n';
    return os;
}