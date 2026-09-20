#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float tempo,km,distancia;
    cin >> tempo >> km;
    distancia = (km * tempo) /12;
    cout << fixed << setprecision(3);
    cout << distancia <<endl;
    
    return 0;
}