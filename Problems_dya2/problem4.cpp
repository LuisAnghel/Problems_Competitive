/*numeros factoriales*/

#include <iostream>

using namespace std;

int fact(int n){
    int num = n;
    if(num == 0 || num == 1){
        return 1;
    }
    return num*fact(num-1);
}

int main(){

    int a = 6;

    cout<<fact(a);
    
    return 0;
}
