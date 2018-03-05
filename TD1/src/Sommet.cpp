#include "Sommet.h"

Sommet::Sommet()
{
    std::string nom("");

    Setnom(nom);
}

Sommet::Sommet(std::string nom) : m_nom(nom)
{

}

Sommet::~Sommet()
{

}

std::string Sommet::Getnom()
{
    return m_nom;
}

void Sommet::Setnom(std::string val)
{
    m_nom = val;
}
