/**
                        ******************************************
                        *                                        *
                        *  D�finition des membres de la classe   *
                        *                                        *
                        ******************************************
*/

#include "Pile.h"
#include <iostream>

using namespace std;

Pile::Pile(){
    /**une pile est cr��e vide au d�part*/
    Sommet = NULL;
}

bool Pile::pileVide(){
    if(Sommet == NULL){
        return true;
    }
    else {
        return false;
    }
}

int Pile::depiler(){
    noeud * n_;
    int numb;
    if(pileVide() == true){
        cout<<"[ERREUR] impossible de parcourrir une pile vide..."<<endl;
    }
    else{
        numb = Sommet->num;
        if(Sommet->suivant == NULL){
            delete(Sommet);
            Sommet = NULL;/**la pile est maintenant vide*/
        }
        else{
            n_ = Sommet;
            Sommet = Sommet->suivant;
            delete(n_);
        }
    }
    return numb;
}

void Pile::empiler(int s){
    noeud * nouveau;
    nouveau = new noeud;
    nouveau->num = s;
    nouveau->suivant = NULL;

    if(pileVide()== true){
        Sommet = nouveau;
    }
    else{
            /**Le nouveau noeud devient le sommet de la pile*/
        nouveau->suivant = Sommet;
        Sommet = nouveau;
    }
}
