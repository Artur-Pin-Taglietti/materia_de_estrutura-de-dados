//exemplo de alocação estatica
#include <iomanip>
#include <iostream>
using namespace std;

void foo(){    
    static int n=0;//alocação estatica
    n++;
    cout<< &n << " " << n << endl;
};
int main(){
    foo();
    foo();
    foo();
    return 0;
}