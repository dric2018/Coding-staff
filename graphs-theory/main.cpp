/**

                        ******************************************
                        *                                        *
                        *             Programme principal        *
                        *                                        *
                        ******************************************
Réalisé par (MASTER 1 INFO):

                1- BAYO B. PATRICK
                2- DIEBE J. NATHAN
                3- MANOUAN C. PASCAL-EMMANUEL
                4- VANIE J-M. KALOU
*/


#include <iostream>
#include <stdlib.h>
#include "graphes.h"

using namespace std;

int main()
{
    int n_1, n_2;
    char choix;
    string orientation;
    int n = 0;
    int **new_matrice;
    int ** matrice;


/** test zone *******/

/** test zone *******/


        cout << "\t\t\t\t **************************************" << endl;
        cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
        cout << "\t\t\t\t **************************************" << endl;
        cout<<"Cette application vous permet de construire un graphe et ensuite de le manipuler"<<endl;
        cout << "\t\t\t\t (1) Creer un graphe " << endl;
        cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
        cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
        cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
        cout << "\t\t\t\t (5) Parcours en largeur " << endl;
        cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
        cout << "\t\t\t\t (7) Quitter l'application " << endl;
        cout<<"Quelle option choisissez-vous ?\n>> ";
        cin>>choix;
        choix = (char) choix;

    while(choix != '7'){

           switch(choix){
                case '1':{
                    system("cls");
                    cout<<"Creation de graphe...\n"<<endl;
                    Graphe G;
                    n = G.get_n_noeuds();
                    orientation = G.get_nature();

                    matrice = new int *[n];
                    int i, j;
                    for(i=0;i<n;i++){
                        matrice[i] = new int [n];
                        for(j=0;j<n;j++)
                            matrice[i][j] = 0;
                    }
                    system("PAUSE");
                    system("cls");
                    cout << "\t\t\t\t **************************************" << endl;
                    cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                    cout << "\t\t\t\t **************************************" << endl;

                    cout << "\t\t\t\t (1) Creer un graphe " << endl;
                    cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                    cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                    cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                    cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                    cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                    cout << "\t\t\t\t (7) Quitter l'application " << endl;
                    cout<<"Quelle option choisissez-vous ?\n>> ";
                    cin>>choix;
                    choix = (char) choix;
                }
                    break;

                case '2':{
                    if(n==0){
                        cout<<"[ERREUR] Vous devez d'abord construire un graphe avant de lier des noeuds"<<endl;
                        system("PAUSE");
                        system("cls");
                        cout << "\t\t\t\t **************************************" << endl;
                        cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                        cout << "\t\t\t\t **************************************" << endl;

                        cout << "\t\t\t\t (1) Creer un graphe " << endl;
                        cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                        cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                        cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                        cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                        cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                        cout << "\t\t\t\t (7) Quitter l'application " << endl;
                        cout<<"Quelle option choisissez-vous ?\n>> ";
                        cin>>choix;
                        choix = (char) choix;
                    }
                    else{
                            int S[n];/**ensemble des sommets*/
                            int i, j;
                            matrice = matrice;
                            new_matrice = new int *[n];

                            for(i=0;i<n;i++){
                                new_matrice[i] = new int [n];
                                for(j=0;j<n;j++)
                                    new_matrice[i][j] = matrice[i][j];
                            }

                            Graphe G(n,orientation);
                            G.set_matrice(new_matrice);
                            cout<<"L'ensemble des sommets du graphe est S ={";

                            for(i=0;i<n;i++){
                                S[i] = i+1;
                                cout<<S[i]<<",";

                            }
                            cout<<"}."<<endl;

                        cout<<"Quel est le numero du premier noeud ?\n>>";
                        cin>>n_1;
                        cout<<"Quel est le numero du second noeud ?\n>>";
                        cin>>n_2;


                        G.lier_noeuds(n_1, n_2);

                        matrice = G.get_matrice();

                    }
                    system("PAUSE");
                    system("cls");
                    cout << "\t\t\t\t **************************************" << endl;
                    cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                    cout << "\t\t\t\t **************************************" << endl;

                    cout << "\t\t\t\t (1) Creer un graphe " << endl;
                    cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                    cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                    cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                    cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                    cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                    cout << "\t\t\t\t (7) Quitter l'application " << endl;
                    cout<<"Quelle option choisissez-vous ?\n>> ";
                    cin>>choix;
                    choix = (char) choix;
                }
                    break;





                case '3':
                    {
                         if(n==0){
                        cout<<"[ERREUR] Vous devez d'abord construire un graphe avant d'en afficher la matrice d'adjacence"<<endl;
                        system("PAUSE");
                        system("cls");
                        cout << "\t\t\t\t **************************************" << endl;
                        cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                        cout << "\t\t\t\t **************************************" << endl;

                        cout << "\t\t\t\t (1) Creer un graphe " << endl;
                        cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                        cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                        cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                        cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                        cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                        cout << "\t\t\t\t (7) Quitter l'application " << endl;
                        cout<<"Quelle option choisissez-vous ?\n>> ";
                        cin>>choix;
                        choix = (char) choix;
                    }
                    else{
                            cout<<"Affichage de la matrice d'adjacence...\n"<<endl;
                            int i, j;
                            matrice = matrice;
                            new_matrice = new int *[n];

                            for(i=0;i<n;i++){
                                new_matrice[i] = new int [n];
                                for(j=0;j<n;j++)
                                    new_matrice[i][j] = matrice[i][j];
                            }

                            Graphe G(n,orientation);
                            G.set_matrice(new_matrice);

                            /**code d'affichage de la matrice d'adjacence*/
                            G.afficherMatrice();

                    }
                    system("PAUSE");
                    system("cls");
                    cout << "\t\t\t\t **************************************" << endl;
                    cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                    cout << "\t\t\t\t **************************************" << endl;

                    cout << "\t\t\t\t (1) Creer un graphe " << endl;
                    cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                    cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                    cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                    cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                    cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                    cout << "\t\t\t\t (7) Quitter l'application " << endl;
                    cout<<"Quelle option choisissez-vous ?\n>> ";
                    cin>>choix;
                    choix = (char) choix;
                    }
                    break;

                case '4':
                    {

                    }
                    break;

                case '5':{
                    if(n==0){
                        cout<<"[ERREUR] veuillez construire un graphe avant de le parcourir."<<endl;
                        system("PAUSE");
                        system("cls");
                        cout << "\t\t\t\t **************************************" << endl;
                        cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                        cout << "\t\t\t\t **************************************" << endl;

                        cout << "\t\t\t\t (1) Creer un graphe " << endl;
                        cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                        cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                        cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                        cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                        cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                        cout << "\t\t\t\t (7) Quitter l'application " << endl;
                        cout<<"Quelle option choisissez-vous ?\n>> ";
                        cin>>choix;
                        choix = (char) choix;
                    }
                    else{
                            int i, j, sommet_depart;
                            matrice = matrice;
                            new_matrice = new int *[n];

                            for(i=0;i<n;i++){
                                new_matrice[i] = new int [n];
                                for(j=0;j<n;j++)
                                    new_matrice[i][j] = matrice[i][j];
                            }

                            Graphe G(n,orientation);
                            G.set_matrice(new_matrice);

                            cout<<"Parcours en largeur...Quel est le sommet de depart ?\n>>";
                            cin>>sommet_depart;

                            G.ParcoursEnLargeur(sommet_depart);
                    }
                    system("PAUSE");
                    system("cls");
                    cout << "\t\t\t\t **************************************" << endl;
                    cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                    cout << "\t\t\t\t **************************************" << endl;

                    cout << "\t\t\t\t (1) Creer un graphe " << endl;
                    cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                    cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                    cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                    cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                    cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                    cout << "\t\t\t\t (7) Quitter l'application " << endl;
                    cout<<"Quelle option choisissez-vous ?\n>> ";
                    cin>>choix;
                    choix = (char) choix;
                }
                break;

                case '6':{
                    if(n==0){
                        cout<<"[ERREUR] veuillez construire un graphe avant de le parcourir."<<endl;
                        system("PAUSE");
                        system("cls");
                        cout << "\t\t\t\t **************************************" << endl;
                        cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                        cout << "\t\t\t\t **************************************" << endl;

                        cout << "\t\t\t\t (1) Creer un graphe " << endl;
                        cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                        cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                        cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                        cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                        cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                        cout << "\t\t\t\t (7) Quitter l'application " << endl;
                        cout<<"Quelle option choisissez-vous ?\n>> ";
                        cin>>choix;
                        choix = (char) choix;
                    }
                    else{
                            int i, j, sommet_depart;
                            matrice = matrice;
                            new_matrice = new int *[n];

                            for(i=0;i<n;i++){
                                new_matrice[i] = new int [n];
                                for(j=0;j<n;j++)
                                    new_matrice[i][j] = matrice[i][j];
                            }

                            Graphe G(n,orientation);
                            G.set_matrice(new_matrice);

                            cout<<"Parcours en profondeur...Quel est le sommet de depart ?\n>>";
                            cin>>sommet_depart;

                            G.ParcoursEnProfondeur(sommet_depart);
                    }
                    system("PAUSE");
                    system("cls");
                    cout << "\t\t\t\t **************************************" << endl;
                    cout << "\t\t\t\t\t     Menu : Graphes  \n" << endl;
                    cout << "\t\t\t\t **************************************" << endl;

                    cout << "\t\t\t\t (1) Creer un graphe " << endl;
                    cout << "\t\t\t\t (2) Lier des sommets (Il n'est possible de lier que 2 noeuds a la fois)" << endl;
                    cout << "\t\t\t\t (3) Afficher la matrice d'adjacence " << endl;
                    cout << "\t\t\t\t (4) Afficher la liste d'adjacence " << endl;
                    cout << "\t\t\t\t (5) Parcours en largeur " << endl;
                    cout << "\t\t\t\t (6) Parcours en profondeur " << endl;
                    cout << "\t\t\t\t (7) Quitter l'application " << endl;
                    cout<<"Quelle option choisissez-vous ?\n>> ";
                    cin>>choix;
                    choix = (char) choix;
                }
                break;

                case '7':{
                    cout<<"Merci et a la prochaine..."<<endl;
                    return 0;
                }
                break;

                default :{
                    cout <<"Saisie non prise en compte....merci de reessayer"<<endl;
                    return 0;
                }


        }/**switch*/



    }/**while*/

}/** mains*/
