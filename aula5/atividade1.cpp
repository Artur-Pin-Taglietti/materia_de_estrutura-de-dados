#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
bool compara(float a, float b){
    return a > b;
}
float melhorTempo(float vet[],float n){
    return vet[0];
}
int main(){
    int n = 0;
    cin >> n;
    int excelente = 0;
    int bons = 0;
    int melhorar = 0;
    float tempos[n];
    float melhor,pior,medio,soma;
    melhor = 0.0;
    pior = 0.0;
    medio = 0.0;
    soma = 0.0;
    //leitura
    for(int i=0;i<n;i++){
        cin >> tempos[i];
        
    }
    //classificação
    for(int i=0;i<n;i++){
        if(tempos[i] < 11.00)
        {
            excelente++;
        }
        else if (tempos[i] >= 11.00 && tempos[i] < 12.00)
        {
            bons++;    
        }
        else
        {
            melhorar++;
        }
        soma = soma + tempos[i];//soma todos os tempos lidos    
    }
    sort(tempos,tempos+n);//ordenando em ordem crescente
    
    //melhor = tempos[0];//melhor tempo
    melhor= melhorTempo(tempos,n);   
    pior = tempos[n-1];//pior tempo
    medio = soma/n;

    cout << "excelente: " <<excelente<<"atletas \n";
    cout << "bons: " << bons <<"atletas \n"; 
    cout << "precisa melhorar" << melhorar <<"atletas \n";
    cout << "melhor tempo: " << fixed << setprecision(2) << melhor <<"s \n";
    cout << "pior tempo: " << fixed << setprecision(2) << pior << "s \n";
    cout << "tempo medio: " << fixed << setprecision(2) << medio << "s \n";
    sort(tempos,tempos+n,compara);
    for (int i=0; i<n; i++){
        cout << tempos[i] << ", ";
    }
    return 0;
}
