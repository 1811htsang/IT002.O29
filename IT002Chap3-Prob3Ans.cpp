#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix createMatrix(int rows, int cols) {
    Matrix matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

Matrix addMatrix(const Matrix& a, const Matrix& b) {
    int rows = a.size();
    int cols = a[0].size();
    Matrix result = createMatrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

Matrix subtractMatrix(const Matrix& a, const Matrix& b) {
    int rows = a.size();
    int cols = a[0].size();
    Matrix result = createMatrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

Matrix multiplyMatrix(const Matrix& a, const Matrix& b) {
    int rows = a.size();
    int cols = b[0].size();
    int innerDim = a[0].size();
    Matrix result(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < innerDim; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

void printMatrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    cout << "Enter elements of first matrix:\n";
    Matrix a = createMatrix(rows, cols);

    cout << "Enter elements of second matrix:\n";
    Matrix b = createMatrix(rows, cols);

    Matrix sum = addMatrix(a, b);
    Matrix diff = subtractMatrix(a, b);
    Matrix prod = multiplyMatrix(a, b);

    cout << "Sum of matrices:\n";
    printMatrix(sum);

    cout << "Difference of matrices:\n";
    printMatrix(diff);

    cout << "Product of matrices:\n";
    printMatrix(prod);

    return 0;
}