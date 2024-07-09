/*dado un arreglo de enteros hallar el producto máximo
de 3 numero diferentes*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

    //2 3 4 6 8 1
    //2 3 4 -6 -8 1
    //2 3 4 -6 -8 -1
    //2 -1 4 -3 7 // -1 -3 2 4 7
    //-6 -4 -5 1 2

int main() {
    int n, prod = 1;
    cin >> n;
    vector<int> num(n);

    if (n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
    }

    insertSort(num);

    int case1 = num[n-1] * num[n-2] * num[n-3];

    int case2 = num[0] * num[1] * num[n-1];

    prod = max(case1, case2);

    cout << prod;

    return 0;
}