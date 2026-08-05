//define os valores no momento da declaração do vetor 
#include  <iomanip>
#include <iostream>
using namespace std;
int main(){

    float vet[]{
        9.030, 3.120,4.011,2.333, 0.333
    };
    float soma = 0.0;    
    // TO DO;
    //somar os valores do vetor 
    for(int i = 0; i<5; i++){
        soma = soma + vet[i]; //soma += vet[i];
        
}
    cout <<fixed<<setprecision(2)<< soma << endl;
    return 0;
}