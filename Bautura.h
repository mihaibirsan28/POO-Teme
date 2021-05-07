//
// Created by mitza on 5/4/2021.
//

#ifndef POO_PROIECT_RESTAURANT_BAUTURA_H
#define POO_PROIECT_RESTAURANT_BAUTURA_H
#include <bits/stdc++.h>
#include "Preparat.h"
using namespace std;

class Bautura : public Preparat{
protected:
private:
    char bautura[25], vin[25];
    float cantitate;
    bool alcool;
public:
    Bautura(char *baut, char *tvin, float cant);
    Bautura(char *baut, float cantit, bool alc);
    Bautura();
    friend std::ostream &operator<<(std::ostream &os, Bautura &b);
};


#endif //POO_PROIECT_RESTAURANT_BAUTURA_H
