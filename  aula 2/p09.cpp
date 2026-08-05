//uso de constantes para definir o tamanho e manipular o vetor
#include <iostream>

using namespace std;

int main(){
    const int n = 5;
    int vet[n];
    
    cout << "informe " << n << " valores \n";
    for (int i = 0; i<n; i++){
        cin >> vet[i];
    }
    for (int i=0; i<n; i++){
        cout << vet[i];
    }

    return 0;
}