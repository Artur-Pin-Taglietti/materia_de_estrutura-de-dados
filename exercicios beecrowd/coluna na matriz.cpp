#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main() {
    int C;
    char T;
    double M[12][12];
    double resultado = 0.0;
     cin >> C >> T;

    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
            
           
            if (j == C) {
                resultado += M[i][j];
            }
        }
    }

    
    if (T == 'M') {
        resultado /= 12.0;
    }

    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}