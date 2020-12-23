#include <iostream>

/**
 * EXERCICE
 * Écrivez un programme qui affiche : le code ASCII suivi de ses caractères signés 
 * et non signés équivalent sous la forme :
 * codeascii = caract.. caract_non_signé
 * 
*/
using namespace std;

const int START = 33;
const int FIN = 127;


int main(){
    char c = 0; // initialiser un variable pour contentir les caractères signés

    unsigned char c_non_signe = 0; // initialiser un variable pour contentir les caractères signés

    // itérer dans l'intervalle des ascii (33->127)
    for (int code = START; code < FIN; code++ ){
        c = code;
        c_non_signe = code;

        cout << "-------------------------------------------------------------------"<< endl;
        cout << "code ascii :  "<< code;
        cout << " caractère signé :  "<< c;
        cout << " caractère non signé :  "<< c_non_signe <<endl;
        cout << "-------------------------------------------------------------------"<< endl;
        
    }
   
    return 0;
}