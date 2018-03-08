#ifndef GRAPHE_H
#define GRAPHE_H

#include <vector>
#include "Sommet.h"

class Graphe
{
    public:
        Graphe();
        virtual ~Graphe();

        std::vector<int*> Getinflu();
        int Getordre();
        std::vector<std::vector<Sommet*> > Getvsommet();

        void Setinflu(std::vector<int*> val);
        void Setordre(int val);
        void Setvsommet(std::vector<std::vector<Sommet*> > *val);

        void AllouerMatrice(int ordre);


    private:
        std::vector<int*>m_influ;
        int m_ordre;
        std::vector<std::vector<Sommet*> > *m_vsommet;


};

#endif // GRAPHE_H
