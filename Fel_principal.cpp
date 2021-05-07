//
// Created by mitza on 5/4/2021.
//

#include "Fel_principal.h"


Fel_principal::Fel_principal(char nume_fel[], char tvita[], int facut) {
    strcpy(nume,nume_fel);
    if(strcmp(nume,"Chateaubriand") == 0)
    {
        strcpy(vita, tvita);
        CumSaFieFacuta = facut;
        if (strcmp(vita,"stroganoff")==0)
            pret_fel_principal = 95;
        if (strcmp(vita,"file")==0)
            pret_fel_principal = 75;
    }
    else if(strcmp(nume,"Frigarui") == 0)
        pret_fel_principal = 25;
    else
        pret_fel_principal = 30;
    strcpy(garnitura,"");
    pret_garnitura = 0;
    pret = pret_fel_principal + pret_garnitura;
}

Fel_principal::Fel_principal(char nume_fel[], char nume_garnitura[], char tgarnitura[], char tvita[], int facut) {
    strcpy(nume, nume_fel);
    if (strcmp(nume,"Frigarui")==0)
        pret_fel_principal = 25;
    if (strcmp(nume,"Tocanita")==0)
        pret_fel_principal = 30;
    if (strcmp(nume,"Chateaubriand")==0){
        strcpy(vita, tvita);
        CumSaFieFacuta = facut;
        if (strcmp(vita,"stroganoff")==0)
            pret_fel_principal = 95;
        if (strcmp(vita,"file")==0)
            pret_fel_principal = 75;
    }
    strcpy(garnitura, nume_garnitura);
    if (strcmp(garnitura,"Cartofi")==0)
    {
        strcpy(garnituraPreparata, tgarnitura);
        if (strcmp(garnituraPreparata,"prajiti")==0)
            pret_garnitura = 9;
        if (strcmp(garnituraPreparata,"piure")==0)
            pret_garnitura = 11;
    }
    if (strcmp(garnitura,"orez sarbesc")==0)
        pret_garnitura = 7;
    pret = pret_fel_principal + pret_garnitura;
}


Fel_principal::Fel_pricipal() {
    pret_fel_principal=0;
    pret_garnitura=0;
    pret=0;
    CumSaFieFacuta=0;
    strcpy(nume, "");
    strcpy(vita,"");
    strcpy(garnitura,"");
    strcpy(garnituraPreparata,"");
}

std::ostream &operator<<(std::ostream &os, Fel_principal &fel) {
    os<<"   "<<fel.nume;
    if(strcmp(fel.nume,"Chateaubriand")==0)
        os<<' '<<fel.vita;
    os<<": "<<fel.pret_fel_principal<<'\n';
    if(strcmp(fel.garnitura,"")!=0)
    {
        os<<"   "<<fel.garnitura;
        if(strcmp(fel.garnitura,"Cartofi")==0)
            os<<' '<<fel.garnituraPreparata;
        os<<": "<<fel.pret_garnitura<<'\n';
    }
    return os;
}