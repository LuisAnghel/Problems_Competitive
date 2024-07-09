/* Dado una matriz cuadrada de nxn, escribe una funcion que rote
la matriz 90 grados en sentido horario y devuelve la matriz*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

// Función para rotar la matriz 90 grados en sentido horario
Matrix rotateMatrix(const Matrix &mat)
{
    int n = mat.size();
    Matrix result(n, vector<int>(n));

    // Transponemos la matriz y luego invertimos cada fila
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            result[j][n - 1 - i] = mat[i][j];
        }
    }

    return result;
}

// Función para imprimir la matriz
void printMatrix(const Matrix &mat)
{
    for (const auto &row : mat)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Introduce el tamaño de la matriz (n): ";
    cin >> n;

    Matrix mat(n, vector<int>(n));
    cout << "Introduce los elementos de la matriz:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    printMatrix(mat);

    Matrix rotatedMat = rotateMatrix(mat);

    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    printMatrix(rotatedMat);

    return 0;
}
