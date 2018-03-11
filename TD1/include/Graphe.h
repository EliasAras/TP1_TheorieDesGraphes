#ifndef GRAPHE_H
#define GRAPHE_H

#include <vector>
#include <fstream>
#include <cstdlib>
#include "Sommet.h"
#include "Arete.h"

class Graphe
{
    public:
        Graphe();
        virtual ~Graphe();

        std::vector<Arete> Getinflu();
        int Getordre();
        std::vector<Sommet> Getvsommet();

        void Setinflu(std::vector<Arete> val);
        void Setordre(int val);
        void Setvsommet(std::vector<Sommet> val);

        void Instanciation();
        void Recuperation(std::string nomfichier);

        void affichage();


    private:
        std::vector<Arete> m_influ;
        int m_ordre;
        std::vector<Sommet> m_vsommet;


};

#endif // GRAPHE_H
