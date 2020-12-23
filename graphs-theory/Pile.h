
/**
                        ******************************************
                        *                                        *
                        *      Déclaration de la classe graphe   *
                        *                                        *
                        ******************************************
*/
#ifndef PILE_H
#define PILE_H

class Pile{
private:
    struct noeud{
        int num;
        noeud * suivant;
    };

    noeud * Sommet; /**sommet de la Pile*/

public :
    Pile();
    void empiler(int s);
    int depiler();
    bool pileVide();
};

#endif
