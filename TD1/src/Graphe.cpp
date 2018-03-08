#include "Graphe.h"

Graphe::Graphe()
{

}

Graphe::~Graphe()
{
    delete m_vsommet;
}

std::vector<int*> Graphe::Getinflu()
{
    return m_influ;
}

int Graphe::Getordre()
{
    return m_ordre;
}

std::vector<std::vector<Sommet*> > Graphe::Getvsommet()
{
    return *m_vsommet;
}

void Graphe::Setinflu(std::vector<int*> val)
{
    m_influ = val;
}

void Graphe::Setordre(int val)
{
    m_ordre = val;
}

void Graphe::Setvsommet(std::vector<std::vector<Sommet*> > *val)
{
    m_vsommet = val;
}

void Graphe::AllouerMatrice(int ordre)
{

}
