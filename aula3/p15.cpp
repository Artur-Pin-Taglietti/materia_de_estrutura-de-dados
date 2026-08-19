#include <iostream>
using namespace std;
// usamos & para modificar diretamente o endereço de memoria
void adiciona(float &a, float b){
    a = a + b;
    cout << " Na função adiciona: "<< a <<endl;
}
int main(){
    float x = 10, y= 0.5;
    adiciona(x,y);
    return 0;
}