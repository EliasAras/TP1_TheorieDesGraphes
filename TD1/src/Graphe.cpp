#include "Graphe.h"

Graphe::Graphe()
{

}

Graphe::~Graphe()
{

}

std::vector<Arete> Graphe::Getinflu()
{
    return m_influ;
}

int Graphe::Getordre()
{
    return m_ordre;
}

std::vector<Sommet> Graphe::Getvsommet()
{
    return m_vsommet;
}

void Graphe::Setinflu(std::vector<Arete> val)
{
    m_influ = val;
}

void Graphe::Setordre(int val)
{
    m_ordre = val;
}

void Graphe::Setvsommet(std::vector<Sommet> val)
{
    m_vsommet = val;
}

void Graphe::Instanciation()
{
    std::vector<Sommet> temp;
    Sommet* d;
    d = new Sommet;
    d->Setnom("");

    temp.push_back(*d);
    Setvsommet(temp);
}

void Graphe::Recuperation(std::string nomfichier)
{
    std::string nom;

    ///Variable pour recuperation des sommets
    Sommet* s;
    std::vector<Sommet> temp;
    int ordre(0);

    ///Variable pour recuperation des aretes
    Arete* a;
    int j(0);
    bool test(false);
    std::vector<Arete> temp2;
    Sommet s1;
    Sommet s2;


    nomfichier = nomfichier + ".txt";

    std::ifstream fichier(nomfichier.c_str(), std::ios::in);

    if(!fichier.fail())  // si l'ouverture a réussi
    {
        ///Recuperation de l'ordre
        getline(fichier, nom);
        Setordre(atoi(nom.c_str()));

        do
        {
            getline(fichier, nom);

            ///Recuperation Sommets
            if(ordre < Getordre())
            {
                s = new Sommet;
                s->Setnom(nom);

                if(s->Getnom() != "")
                {
                    temp.push_back(*s);
                    Setvsommet(temp);
                }
            }

            ///Recuperation Aretes
            if(ordre > Getordre() && ordre <= 2*Getordre() )
            {
                for(int i(0); i < nom.size(); ++i)
                {
                    if(nom[i] == '1' && i < Getvsommet().size())
                    {
                        a = new Arete;

                        s1 = Getvsommet()[j].Getnom();
                        s2 = Getvsommet()[i].Getnom();

                        a->Sets1(s1);
                        a->Sets2(s2);

                        if(a->Gets2().Getnom() != "")
                            temp2.push_back(*a);
                    }

                    if(nom[i] != '0' && nom[i] != '1' && test == false)
                    {
                        std::cout << "Erreur dans le document de la matrice, ligne : " << j+Getordre()+3 << std::endl;
                        test = true;
                    }
                }

                test = false;
                ++j;
            }

            ordre++;

        }
        while(!fichier.eof());
        fichier.close();  // on ferme le fichier

        Setinflu(temp2);
    }
    else  // sinon
        std::cout << "Impossible d'ouvrir le fichier !" << std::endl;
}

void Graphe::affichage()
{
    std::cout << std::endl << std::endl;

    if(Getvsommet().size() > 0)
    {
        std::cout << "Voici les sommets : " << std::endl;
        for(int i(0); i < Getvsommet().size(); ++i)
            std::cout << "-- " << Getvsommet()[i].Getnom() << std::endl;

        std::cout << std::endl << "Voici les influences : " << std::endl;
        for(int i(0); i < Getinflu().size(); ++i)
            std::cout << "++ " << Getinflu()[i].Gets1().Getnom() << " influence " << Getinflu()[i].Gets2().Getnom() << std::endl;
    }

}
