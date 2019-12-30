/**
                        ******************************************
                        *                                        *
                        *  Définition des membres de la classe   *
                        *                                        *
                        ******************************************
*/

#include "File.h"
#include <iostream>
#include <string>

using namespace std;

File::File(){
    /**la liste est vide a la creation*/
    Tete = NULL;
    Queue = NULL;
}

bool File::fileVide(){
    if(Tete == NULL){
        return true;
    }
    else{
        return false;
    }
}

void File::enfiler(int s){
    noeud * nouveau;
    nouveau = new noeud;
    nouveau->num = s;
    nouveau->suivant = NULL;

    if(Tete == NULL){
        /**le nouvel element devient le seul dans la liste...la tete et en meme temps la queue de la liste*/
        Tete = nouveau;
        Queue = nouveau;
    }
    else{
        /**le nouveau noeud est rajouté à la queue*/
        Queue->suivant = nouveau;
        Queue = nouveau;
    }
}


int File::defiler(){
    noeud * n_;
    int numb = 0;
    if(Tete == NULL){
        cout<<"[ERREUR] File vide"<<endl;
    }
    else {
        numb = Tete->num;
        if(Tete->suivant == NULL){
            delete(Tete);
            delete(Queue);

            Tete = NULL;
            Queue = NULL;
        }
        else {
            n_ = Tete;
            Tete = Tete->suivant;
            delete(n_);
        }

    }
    /**on retourne la tete de file*/
    return numb;
}
