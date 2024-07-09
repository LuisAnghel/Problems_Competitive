/*dado un numero mostrar la suma de sus digitos */

#include <iostream>

using namespace std;
int main(){

    int sum=0, n;

    cin>>n;
    while(n>0){
        sum = sum + n%10;
        cout<<n%10<<" ";
        n = n/10;
        cout<<n<<endl;
    }

    cout<<sum;
    return 0;
}
