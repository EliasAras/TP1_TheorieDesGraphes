#include "Graphe.h"

Graphe::Graphe()
{

}

Graphe::~Graphe()
{

}

std::vector<Sommet> Graphe::Getinflu()
{
    return m_influ;
}

int Graphe::Getordre()
{
    return m_ordre;
}

std::vector<Arete> Graphe::Getvsommet()
{
    return m_vsommet;
}

void Graphe::Setinflu(std::vector<Sommet> val)
{
    m_influ = val;
}

void Graphe::Setordre(int val)
{
    m_ordre = val;
}

void Graphe::Setvsommet(std::vector<Arete> val)
{
    m_vsommet = val;
}

void Graphe::Instanciation()
{
    std::vector<Sommet> temp;
    Sommet d;

    temp.push_back(d);
    Setinflu(temp);
}
