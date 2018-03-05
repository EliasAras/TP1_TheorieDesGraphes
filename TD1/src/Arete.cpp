#include "Arete.h"

Arete::Arete()
{
    Sommet();
}

Arete::~Arete()
{
    //dtor
}

Sommet Arete::Gets1()
{
    return m_s1;
}

void Arete::Sets1(Sommet val)
{
    m_s1 = val;
}

Sommet Arete::Gets2()
{
    return m_s2;
}

void Arete::Sets2(Sommet val)
{
    m_s2 = val;
}
