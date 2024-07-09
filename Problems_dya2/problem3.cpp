/*Dado un numero determina si es par o impar*/

#include <iostream>

using namespace std;

int main(){
    int a;

    cin>>a;
    if(a%2 == 0) cout<<"par";
    else cout<<"impar";

    a%2 ? cout<<"par": cout<<"impar";
    
    return 0;
}
