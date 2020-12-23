# include <iostream>
using namespace std;

/**
 * Écrivez un programme qui montre, via le calcul d’un quotient, les
* erreurs d’arrondi.
*/

int main(){
    double n1 = 99999;
    double n2 = n1/1000000 +1;

    cout << "n1 = "<<n1;
    cout << " | n2 = "<<n2; // 1.099999 -> 1.1
    cout << " | n2 * 4 = "<<n2*4<<endl; //4.399996 -> 4.4

    return 0;
}