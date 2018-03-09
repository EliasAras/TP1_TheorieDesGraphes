#ifndef GRAPHE_H
#define GRAPHE_H

#include <vector>
#include "Sommet.h"
#include "Arete.h"

class Graphe
{
    public:
        Graphe();
        virtual ~Graphe();

        std::vector<Sommet> Getinflu();
        int Getordre();
        std::vector<Arete> Getvsommet();

        void Setinflu(std::vector<Sommet> val);
        void Setordre(int val);
        void Setvsommet(std::vector<Arete> val);

        void Instanciation();


    private:
        std::vector<Sommet> m_influ;
        int m_ordre;
        std::vector<Arete> m_vsommet;


};

#endif // GRAPHE_H
