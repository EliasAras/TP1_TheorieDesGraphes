#ifndef SOMMET_H
#define SOMMET_H

#include <string>
#include <iostream>

class Sommet
{
    public:
        Sommet();
        Sommet(std::string nom);
        virtual ~Sommet();

        std::string Getnom();
        void Setnom(std::string val);

    private:
        std::string m_nom;
};

#endif // SOMMET_H
