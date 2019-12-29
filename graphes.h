

/**
                        ******************************************
                        *                                        *
                        *      Déclaration de la classe graphe   *
                        *                                        *
                        ******************************************
*/

#ifndef GRAPHE_H
#define GRAPHE_H
#include <iostream>
using namespace std;


class Graphe {
private :
    int n_noeuds;
    int **matrice;
    bool oriente;
public:
    Graphe();/** constructeur 1*/
    Graphe(int n, string orientation); /** constructeur 2*/
    int get_n_noeuds();
    void set_n_noeuds(int n);

    void set_matrice(int ** new_matrice);

    string get_nature();

    int ** get_matrice();
    void afficherMatrice();
    void lier_noeuds(int u, int v);
};
#endif
