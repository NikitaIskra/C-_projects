#include <iostream>

using namespace std;

class Matrix {
private:
    int** data;
    size_t  rows, cols;

    void allocateMemory() {
        data = new int* [rows];
        for (size_t i = 0; i < rows; ++i) {
            data[i] = new int[cols] {};
        }
    }
    void deallocateMemory() {
        for (size_t i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
public:
    Matrix(size_t r, size_t c) : rows(r), cols(c) {
        allocateMemory();
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        allocateMemory();
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    ~Matrix() {
        deallocateMemory();
    }

    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            deallocateMemory();
            rows = other.rows;
            cols = other.cols;
            allocateMemory();
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;

    }

    Matrix operator+(Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions must mutch for addition");
            Matrix result(rows, cols);
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j) {
                    result.data[i][j] = data[i][j]+other.data[i][j];
                }
            }
            return result;
        }
    }

    bool operator()() {
        bool result = true;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if (data[i][j] < 0) return false;
            }
        }
    }

    friend istream& operator>>(istream& in, Matrix& m);
    friend ostream& operator<<(ostream& out, Matrix& m);

};

istream& operator>>(istream& in, Matrix& m) {
    for (size_t i = 0; i < m.rows; ++i) {
        cout << "input elements "<< i <<" row "<< endl;
        for (size_t j = 0; j < m.cols; ++j) {
            in >> m.data[i][j];
        }
    }
    return in;
}

ostream& operator<<(ostream& out, Matrix& m) {
    for (size_t i = 0; i < m.rows; ++i) {
        for (size_t j = 0; j < m.cols; ++j) {
            out << m.data[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

int main()
{
    Matrix A(2, 2), B(2,2);
    cin >> A;
    cout << "Matrix A: " << endl;
    cout << A << endl;
    cin >> B;
    cout << "Matrix B: " << endl;
    cout << B << endl;
    Matrix C = A + B;
    cout << "Matrix C: " << endl;
    cout << C << endl;
    if (A()) {
        cout << "In matrix not all elements is positive" << endl;
    }
    else {
        cout << "In matrix all elements is positive" << endl;
    }
}

