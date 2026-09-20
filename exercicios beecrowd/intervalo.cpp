#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
int n,dentro,fora,valores;
dentro = 0;
fora = 0;

cin >> n;

for (int i = 0; i < n; i++){
    cin >> valores;
    if (valores >= 10 && valores <= 20){
        dentro++;
    }
    else{
        fora ++;
    }
}
cout << dentro << " in" << endl;
cout << fora << " out" << endl;
    return 0;
}