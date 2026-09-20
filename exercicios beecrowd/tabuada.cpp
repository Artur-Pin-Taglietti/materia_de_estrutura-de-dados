#include <stdio.h>
#include <iostream> 
using namespace std;
int main() {
 int numero,mult;
 cin >> numero;
 mult=0;
 for(int i = 1; i <= 10; i++){
    mult = numero * i;
    cout << i << " x " << numero << " = " << mult << endl;
 }
    return 0;
}