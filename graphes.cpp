/**
                        ******************************************
                        *                                        *
                        *  Définition des membres de la classe   *
                        *                                        *
                        ******************************************
*/

#include "graphes.h"
#include "File.h"
#include "Pile.h"
#include <iostream>
#include <string>

using namespace std;

/**constructeur de la classe*/
Graphe::Graphe(){
    int n, i, j;
    char orientation;

    cout<<"Graphe avec des orientations ? (O) si oui et (N) sinon.\n>>";
    cin>>orientation;

    cout<<"Combien de noeuds ?\n>>";
    cin>>n;

    /** initialisation des attributs du graphe **/
    n_noeuds = n;
    if(orientation =='O' || orientation=='o'){
        oriente = true;
    }
    else{
        oriente = false;
    }


    /** creation par matrice d'adjacence **/
    matrice = new int *[n_noeuds];

    for(i=0;i<n_noeuds;i++){
        matrice[i] = new int [n];
        for(j=0;j<n_noeuds;j++)
            matrice[i][j] = 0;
    }
}

Graphe::Graphe(int n, string orientation){
    int i, j;
    n_noeuds = n;
    if(orientation == "oriente"){
        oriente = true;
    }
    else{
        oriente = false;
    }

    /** creation par matrice d'adjacence **/
    matrice = new int *[n_noeuds];

    for(i=0;i<n_noeuds;i++){
        matrice[i] = new int [n];
        for(j=0;j<n_noeuds;j++)
            matrice[i][j] = 0;
    }
}

void Graphe::set_n_noeuds(int n){
    n_noeuds = n;
}

int Graphe::get_n_noeuds(){
    return n_noeuds;
}

int ** Graphe::get_matrice(){
    return matrice;
}


void Graphe::set_matrice(int ** new_matrice){
    matrice = new_matrice;
}


string Graphe::get_nature(){
    if(oriente){
        return "oriente";
    }
    else{
        return "non-oriente";
    }
}


bool Graphe::liaison_presente(int u, int v){
    if(matrice[u-1][v-1] == 1){
        return true;
    }
    else{
        return false;
    }
}

void Graphe::lier_noeuds(int u, int v){
    cout<<"\n[INFO] Liaison des noeuds "<<u<<" et "<<v<<endl;
   if(oriente==true){
    matrice[u-1][v-1] = 1;
   }
   else{
    matrice[u-1][v-1] = 1;
    matrice[v-1][u-1] = 1;
   }
    cout<<"\nLes noeuds "<<u<<" et "<<v<<" sont maintenant adjacents."<<endl;

}


void Graphe::afficherMatrice(){
    cout<<"\n[INFO] ********* Matrice d'adjacence (sommets-sommets) *********\n"<<endl;
    int i,j;
    for(i=0;i<n_noeuds;i++){
            cout<<"\t\t\t";
        for(j=0;j<n_noeuds;j++)
            cout<<"  "<<matrice[i][j];
        cout<<endl;
    }
    cout<<"\n"<<endl;

    /**afficher les successeurs de chaque noeud*/

    for(i=0;i<n_noeuds;i++){
        cout<<"\n[INFO] Successeur(s) du noeud ("<<i+1<<"):";
        for(j=0;j<n_noeuds;j++){
            if(matrice[i][j] != 0){
                cout<<"  "<<(j+1);
            }
        }
        cout<<endl;
    }
}


/**parcours des graphes*/
void Graphe::ParcoursEnLargeur(int sommet_depart){
    File F;
    bool * visite = new bool[n_noeuds+1];/***tableau de booléens pour noter les noeuds visités*/
    int i, j;

    for(i=1;i<=n_noeuds;i++)
        /**aucun noeud visité au depart*/
        visite[i] = false;

    /**debut du parcours*/
    F.enfiler(sommet_depart);
    visite[sommet_depart] = true;

    cout<<"\n[INFO]Mise en oeuvre du parcours en largeur (BFS) a partir du noeud "<<sommet_depart<<endl;

    while(F.fileVide() == false){
        /**parcours en largeur**/
        int noeud_a_traiter = F.defiler();
        cout<<"->"<<noeud_a_traiter;

        for(j=1;j<=n_noeuds; j++){
            if(liaison_presente(noeud_a_traiter, j) && visite[j] == false){

                F.enfiler(j);/**rajouter le noeud visité à la file*/
                visite[j] = true; /**marquer le noeud comme dejà visité*/
            }
        }
    }
    cout <<endl;

}


void Graphe::ParcoursEnProfondeur(int sommet_depart){
    Pile P;
    bool * visite = new bool[n_noeuds+1];/***tableau de booléens pour noter les noeuds visités*/
    int i, j;

    for(i=1; i<=n_noeuds; i++)
        /**aucun noeud visité au depart*/
        visite[i] = false;

    /**debut du parcours*/
    P.empiler(sommet_depart);
    visite[sommet_depart] = true;

    cout<<"\n[INFO]Mise en oeuvre du parcours en profondeur (DFS) a partir du noeud "<<sommet_depart<<endl;

    while(P.pileVide() == false){
        /**parcours en largeur**/
        int noeud_a_traiter = P.depiler();
        cout<<noeud_a_traiter<<"->";

        for(j=n_noeuds; j>=1; j--){
            if(liaison_presente(noeud_a_traiter, j) && visite[j] == false){

                P.empiler(j);/**rajouter le noeud visité à la file*/
                visite[j] = true; /**marquer le noeud comme dejà visité*/
            }
        }
    }
    cout <<endl;
}
