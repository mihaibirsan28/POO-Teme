//
// Created by mitza on 5/4/2021.
//

#include "Ciorba.h"


Ciorba::Ciorba(char *nume_ciorba, bool s, bool a): smantana(s), ardei(a) {
    strcpy(nume, nume_ciorba);
    if(strcmp(nume,"Ciorba de legume")==0)
        pret_ciorba = 15;
    else if(strcmp(nume,"Ciorba de burta")==0)
        pret_ciorba = 20;
    else pret_ciorba = 17.5;
    if (smantana)
        pret_smantana = 3;
    else pret_smantana = 0;
    if (ardei)
        pret_ardei = 2;
    else pret_ardei = 0;
    pret = pret_ciorba + pret_smantana + pret_ardei;
}

Ciorba::Ciorba(): smantana(false), ardei(false), pret_ardei(0), pret_smantana(0), pret_ciorba(0){
    strcpy(nume, "");
}

std::ostream &operator<<(std::ostream &os, Ciorba &c) {
    os << " " << c.nume << ":" << c.pret_ciorba << '\n';
    if (c.smantana)
    {
        os << " Smantana: " << c.pret_smantana << '\n';
    }
    if (c.ardei)
    {
        os << " Ardei: " << c.pret_ardei << '\n';
    }
    return os;
}