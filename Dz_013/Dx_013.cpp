#include <iostream>

using namespace std;

int main()
{
    //1
    //string name[5];
    //cout << "Enter 5 surname: ";
    //for (int i = 0; i < 5; i++) {
    //    cin >> name[i];
    //}
    //cout << "Before sort: ";
    //for (int i = 0; i < 5; i++) {
    //    cout << name[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 5 - 1; i++) {
    //    for (int j = 0; j < 5 - i - 1; j++) {
    //        if (name[j] > name[j + 1]) {
    //            swap(name[j], name[j + 1]);
    //        }
    //    }
    //}
    //cout << "After sort: ";
    //for (int i = 0; i < 5; i++) {
    //    cout << name[i] << " ";
    //}
    //2
    int rows_a, cols_a;
    cout << "Enter rows and cols A: ";
    cin >> rows_a >> cols_a;
    int rows_b, cols_b;
    cout << "Enter rows and cols B: ";
    cin >> rows_b >> cols_b;
    int rows_c, cols_c;
    cout << "Enter rows and cols C: ";
    cin >> rows_c >> cols_c;
    int** A = new int* [rows_a];
    for (int i = 0; i < rows_a; i++) {
        A[i] = new int[cols_a] {};
    }
    int** B = new int* [rows_b];
    for (int i = 0; i < rows_b; i++) {
        B[i] = new int[cols_b] {};
    }
    int** C = new int* [rows_c];
    for (int i = 0; i < rows_c; i++) {
        C[i] = new int[cols_c] {};
    }
    cout << "Enter numbers A: ";
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter numbers B: ";
    for (int i = 0; i < rows_b; i++) {
        for (int j = 0; j < cols_b; j++) {
            cin >> B[i][j];
        }
    }
    cout << "Enter numbers C: ";
    for (int i = 0; i < rows_c; i++) {
        for (int j = 0; j < cols_c; j++) {
            cin >> C[i][j];
        }
    }

    cout << "Before: " << endl;
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows_b; i++) {
        for (int j = 0; j < cols_b; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows_c; i++) {
        for (int j = 0; j < cols_c; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }


    int total = rows_a * cols_a + rows_b * cols_b + rows_c * cols_c;
    int* G = new int[total];
    int g = 0;

    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            G[g++] = A[i][j];
        }
    }
    for (int i = 0; i < rows_b; i++) {
        for (int j = 0; j < cols_b; j++) {
            G[g++] = B[i][j];
        }
    }
    for (int i = 0; i < rows_c; i++) {
        for (int j = 0; j < cols_c; j++) {
            G[g++] = C[i][j];
        }
    }
    cout << "Total: " << endl;
    for (int i = 0; i < total; i++) {
        cout << G[i] << "\t";
    }
    cout << endl;
    
    int* U = new int[total];
    int u = 0;

    for (int i = 0; i < total; i++) {
        int count = 0;
        for (int j = 0; j < total; j++) {
            if (G[j] == G[i])
                count++;
        }
        if (count == 1) {
            U[u++] = G[i];
        }
    }
    cout << "Unique: ";
    for (int i = 0; i < u; i++) {
        cout << U[i] << " ";
    }

    int* S = new int[total];
    int s = 0;
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            for (int k = 0; k < rows_c; k++) {
                for (int l = 0; l < cols_c; l++) {
                    if (A[i][j] == C[k][l]) {
                        S[s++] = A[i][j];
                    }
                }
            }
        }
    }
    cout << endl;
    cout << "Shared: ";
    for (int i = 0; i < s; i++) {
        cout << S[i] << " ";
    }

    int* N = new int[total];
    int n = 0;
    int countn = 0;

    for (int i = 0; i < rows_a; i++)
        for (int j = 0; j < cols_a; j++)
            if (A[i][j] < 0) {
                bool exists = false;
                for (int k = 0; k < n; k++) {
                    if (N[k] == A[i][j]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    N[n++] = A[i][j];
                }
            }


    for (int i = 0; i < rows_b; i++)
        for (int j = 0; j < cols_b; j++)
            if (B[i][j] < 0) {
                bool exists = false;
                for (int k = 0; k < n; k++) {
                    if (N[k] == B[i][j]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    N[n++] = B[i][j];
                }
            }


    for (int i = 0; i < rows_c; i++)
        for (int j = 0; j < cols_c; j++)
            if (C[i][j] < 0) {
                bool exists = false;
                for (int k = 0; k < n; k++) {
                    if (N[k] == C[i][j]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    N[n++] = C[i][j];
                }
            }

    cout << endl;
    cout << "Negative: ";
    for (int i = 0; i < n; i++) {
        cout << N[i] << " ";
    }

    delete[] G;
    delete[] U;
    delete[] S;
    delete[] N;
}

