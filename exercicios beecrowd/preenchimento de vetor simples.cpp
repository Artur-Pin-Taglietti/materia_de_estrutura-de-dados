#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int v;
    int n[10];
    cin >> v;
    n[0] = v;
    
    for(int i = 0; i < 10; i++) {
        if (i > 0) {
            n[i] = n[i-1] * 2;
        }

        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}