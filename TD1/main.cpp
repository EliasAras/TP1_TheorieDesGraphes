#include <iostream>
#include "Graphe.h"

int main()
{
    Graphe* g;
    std::string nomfichier;

    g = new Graphe;

    std::cout << "Entrez le nom du fichier ou se trouve le nom des personnes :  ";
    std::cin >> nomfichier;

    g->Recuperation(nomfichier);

    g->affichage();

    delete g;

    return 0;
}
