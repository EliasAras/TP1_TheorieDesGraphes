#ifndef ARETE_H
#define ARETE_H

#include "Sommet.h"

class Arete
{
    public:
        Arete();
        virtual ~Arete();

        Sommet Gets1();
        void Sets1(Sommet val);
        Sommet Gets2();
        void Sets2(Sommet val);

    private:
        Sommet m_s1;
        Sommet m_s2;
};

#endif // ARETE_H
