#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std; 
struct participante
{
    
    string nome;
    int t;
    int e;
    int p;
    float te; 
    
};
bool ordena(const participante &a,participante &b){
    return (a.te < b.te) ||
    (a.te == b.te && a.e < b.e)||
    (a.te == b.te && a.e == b.e && a.p < b.p)||
    (a.te == b.te && a.e == b.e && a.p == b.p && a.nome < b.nome);

}
int main(){
    int n = 0;
    cin >> n;
    participante robo[n];
    
    for(int i = 0; i < n ; i++){
    cin >> robo[i].nome >> robo[i].t >> robo[i].e >> robo[i].p;
    robo[i].te = robo[i].t + (robo[i].e * 10);
    }
    sort(robo,robo+n,ordena);
    for(int i= 0; i < n ; i++){
        cout << robo[i].nome << robo[i].te<< endl;
    }
    return 0;
}