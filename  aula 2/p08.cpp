//primeiro exemplo da aula2
//exmeplo de array unidimensoinal
#include <iostream>

using namespace std;

int main(){
    int vet[6];
    cout << "informe seis valores \n";
    for (int i = 0; i<6; i++){
        cin >> vet[i];
    }
    cout << "valores \n";
    //exibir ao contrario
    /*for (int i = 5; i>=0; i--){
        cout << vet[i] << ", ";
    }
    //exibe normalmente
    for (int i=0; i<6; i++){
        cout << vet[i];
    }*/
   //exive o valor e o indice 
    for(int i=0; i<6; i++){
        cout<< "Vet[" << i << "] = " << vet[i] << endl ; 
    }

    return 0;
}