/* Escriba una funcion que tome un arreglo de enteros y un numero "k",
y determine si esxisten los numeros en el arreglo cuya suma sea igual a k*/

#include <iostream>
#include <vector>

using namespace std;

void searchSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int key = k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "termina el problema";
                break;
            }
        }
    }
}

int main()
{
    vector<int> arr = {2, 1, 3, 5, 6};
    int k = 5;

    searchSum(arr, k);
}