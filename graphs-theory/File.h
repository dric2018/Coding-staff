
/**
                        ******************************************
                        *                                        *
                        *      Déclaration de la classe graphe   *
                        *                                        *
                        ******************************************
*/
#ifndef FILE_H
#define FILE_H

class File{

private:
    struct noeud{
        int num;
        noeud * suivant;
    };

    noeud * Tete; /**tete de file*/
    noeud * Queue; /**queue de file*/

public :
    File();
    void enfiler(int s);
    int defiler();
    bool fileVide();
};

#endif
