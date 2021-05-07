
#include "Masa.h"

//#include <ostream>

using namespace std;
/*
class Masa {
private:
    static int nr_mese_totale;
    int nr_masa;
    int capacitate_masa;
    int nr_persoane;
    bool ocupata;
public:
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

};


class Preparat {
protected:
    double pret;

public:
    double Preparat::Pret() const {
        return pret;
    }
};

class Ciorba: public Preparat{
protected:
private:
    char nume[20];
    bool smantana, ardei;
    double pret_ciorba, pret_ardei, pret_smantana;
public:

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
};

class Desert: public Preparat {
protected:
private:
    char nume[25];
    int nr_cupe;
public:

    Desert::Desert(char *nume_desert, int nr): nr_cupe(nr) {
        strcpy(nume, nume_desert);
        if (strcmp(nume, "Inghetata")==0)
        {
            pret = 4 * nr_cupe;
        }
        if (strcmp(nume, "Tort Kranz")==0)
            pret = 20;
    }

    Desert::Desert() : nr_cupe(0), pret(0) {
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
};

class Bautura: public Preparat {
protected:
private:
    char bautura[25], vin[25];
    float cantitate;
    bool alcool;
public:
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
};


class Fel_principal : public Preparat {
protected:
private:
    char nume[25], vita[25];
    int CumSaFieFacuta;
    char garnitura[25], garnituraPreparata[25];
    double pret_fel_principal, pret_garnitura;
public:
    Fel_principal::Fel_pricipal(char *nume_fel, char *tvita, char *nume_garnitura, char *tgarnitura, int facut) {
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

    Fel_principal::Fel_pricipal(): CumSaFieFacuta(0), pret_fel_principal(0), pret_garnitura(0) {
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
};
*/

int main()
{
    Masa m1(6), m2(5), m3(12);
    m1.ocupa_masa(4);
    m2.ocupa_masa(5);
    m1.elibereaza_masa();
    m1.ocupa_masa(5);
    m3.ocupa_masa(9);

    Bautura b1("Vin varsat","rosu",200);
    Bautura b2("Bere",3,true);

    Ciorba c1("Ciorba de burta",true,true);
    Fel_principal f1("Chateaubriand","Cartofi","prajiti","file");
    Fel_principal f2("Frigarui","orez sarbesc","","");
    Fel_principal f3("Tocanita");

    Desert d1("Tort Krantz",1);
    Desert d2("Ingetata",3);




    return 0;
}
