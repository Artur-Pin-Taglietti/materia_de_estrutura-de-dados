#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std; 

float melhordia(float vet[],int n){
    return vet[0];
}
float piorrdia(float vet[],int n){
    return vet[n - 1];
}

int main(){
    int b= 0;
    int boa = 0;
    int mod = 0;
    int ina= 0;
    float melhor = 0;
    float pior = 0;
    float somadosdias = 0;
    cin >> b;
    float dia [b];
        for(int i =0; i <b; i++ )
        {
            cin >>  dia[i];
            somadosdias = dia[i] + somadosdias;
                if(dia[i] < 25){
                    boa = boa +1;
                }
                else if(dia[i] > 50){
                    ina = ina +1;
                }
                else if (dia[i] > 25 and i < 50)
                {
                    mod= mod +1 ;
                }

        }
        sort(dia,dia+b);
        melhor = melhordia(dia,b);
        pior = piorrdia(dia,b);
        cout << fixed << setprecision(1);
        cout << " media da concentração " << somadosdias/b<< endl;
        cout << " maior concentraçao " <<  pior << endl;
        cout << " menor concentraçao " <<  melhor << endl;
        cout << " dia com qualidade boa: " << boa<< endl;
        cout << " dia com qualidade moderada: " << mod<< endl;
        cout << " dia com qualidade inadequada: " << ina<< endl;
   return 0;
}