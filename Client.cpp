//
// Created by mitza on 5/7/2021.
//

#include "Client.h"

Client::Client() {
    m_nr_mese = 0;
}

void Client::adauga_preparat(Preparat *preparat) {
    const auto bautura = dynamic_cast<const Bautura *>(preparat);
    const auto ciorba = dynamic_cast<const Ciorba *>(preparat);
    const auto desert = dynamic_cast<const Desert *>(preparat);
    const auto fel_principal = dynamic_cast<const Fel_principal *>(preparat);
    Preparat *c = nullptr;
    if (bautura != nullptr)
    {
        c = new Bautura(*bautura);
    }
    else if (ciorba != nullptr)
    {
        c = new Ciorba(*ciorba);
    }
    else if (desert != nullptr)
    {
        c = new Desert(*desert);
    }
    else if (fel_principal != nullptr)
    {
        c = new Fel_principal(*fel_principal);
    }
    if (c != nullptr)
    {
        m_nr_mese++;
        m_preparate.push_back(m_nr_mese);
    }
}