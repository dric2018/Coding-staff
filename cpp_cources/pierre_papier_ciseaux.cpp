#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
* Écrivez un programme qui joue à « pierre, papier, ciseaux ». Deux
* joueurs doivent dire ou représenter l’un après l’autre, par une attitude de
* la main, les objets « pierre », « papier » ou « ciseaux ».
* 
* Règles :
* 1- Le papier est supérieur à la pierre qui l’enveloppe, 
* 2- la pierre est supérieure aux ciseaux qu’elle casse et,
* 3- les ciseaux sont supérieurs au papier qu’ils coupent.
* 
* VERDICT : Le joueur gagnant est celui dont l’objet est supérieur à celui de l’autre.
*/

enum mouvement{pierre, papier, ciseaux};
string option [] = {"pierre", "papier", "ciseaux"};

int main(){
    bool game_over = false;
    int choix_ordi_num;
    int choix_joueur_num;
    // générer le choix de l'ordinateur
    srand(time(0));
    choix_ordi_num = rand()%3;
    mouvement choix_ordi = mouvement(choix_ordi_num);


    while (game_over == false)
    {   
        cout <<"[PPC] Vous jouez ? (0:pierre; 1:papier; 2:ciseaux)\n>> ";
        cin >> choix_joueur_num;
        mouvement choix_joueur = mouvement(choix_joueur_num);

        cout << "[PPC] Le CPU a joué : "<< option[choix_ordi] <<endl;
        cout << "[PPC] Vous avez joué : "<< option[choix_joueur] <<endl;

        if (choix_joueur == pierre){
            if (choix_ordi == papier){
            cout << "[PPC] L'ordi a gagné ! (Le papier enveloppe la pierre)"<<endl;
                game_over = true;
            }
            else if (choix_ordi == ciseaux){
                cout << "[PPC] vous avez gagné ! (La pierre brise les ciseaux)"<<endl;
                game_over = true;
            }
        }
        
        else if (choix_joueur == papier){
            if (choix_ordi == ciseaux){
                cout << "[PPC] L'ordi a gagné ! (Les ciseaux coupent le papier)"<<endl;
                game_over = true;
            }
            else if (choix_ordi == pierre){
                cout << "[PPC] vous avez gagné ! (le papier recouvre la pierre)"<<endl;
                game_over = true;
            }
        } 
        else if (choix_joueur == ciseaux) {
            if (choix_ordi == pierre){
                cout << "[PPC] L'ordi a gagné ! (La pierre brise les ciseaux)"<<endl;
                game_over = true;
                }
            else if (choix_ordi == papier){
                cout << "[PPC] vous avez gagné ! (Les ciseaux découpent le papier)"<<endl;
                game_over = true;
            }

    }

    else{
        cout << "[PPC] Mauvaise saisie de votre part..." <<endl;
    }
    
    if (choix_ordi == choix_joueur){
        cout << "[PPC] égalité...oulalaaaaa"<<endl;
    }


    srand(time(0));
    choix_ordi_num = rand()%3;
    mouvement choix_ordi = mouvement(choix_ordi_num);
    }

    cout <<"[PPC] Fin de partie...Bye !"<<endl;

    return 0;

}