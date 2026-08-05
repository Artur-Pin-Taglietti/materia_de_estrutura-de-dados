//define  o tamanho do veto de forma dinamica
#include <iostream>

using namespace std;

int main(){
    int n; 
    cout << "informe o tamanho do vetor: ";
    cin  >> n;
    string fornecedores[n];
    cout << "digite o nome de " << n <<" fornecedores \n";
    for (int i = 0; i<n; i ++){
        cin >> fornecedores[i];
    }
    cout<< "os nosso fornecedores são\n ";
    for (int i=0; i<n; i++){
        cout << i << ":"<<fornecedores[i] << endl;
    }
    return 0;
}