//
// Created by mitza on 5/4/2021.
//

#ifndef POO_PROIECT_RESTAURANT_DESERT_H
#define POO_PROIECT_RESTAURANT_DESERT_H
#include <bits/stdc++.h>
#include "Preparat.h"
using namespace std;

class Desert: public Preparat{
protected:
private:
    char nume[25];
    int nr_cupe;
public:
    explicit Desert(char *nume_desert, int nr);
    Desert();
    friend std::ostream &operator<<(std::ostream &os, Desert &d);

};


#endif //POO_PROIECT_RESTAURANT_DESERT_H
