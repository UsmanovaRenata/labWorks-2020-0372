#include <iostream>
#include <windows.h>

using namespace std;
const int N = 5;

void umnojenie(float matr1[N][N], float matr2[N][N], float itog_matr[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            itog_matr[i][j] = 0;
            for (int k = 0; k < N; k++) itog_matr[i][j] += matr1[i][k] * matr2[k][j];
        }
}
void slojenie(float matr1[N][N], float matr2[N][N], float itog_matr[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) itog_matr[i][j] = matr1[i][j] + matr2[i][j];
}

void vichitanie(float matr1[N][N], float matr2[N][N], float itog_matr[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) itog_matr[i][j] = matr1[i][j] - matr2[i][j];
}
void vivod(float itog_matr[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (j % N == 0) {
                cout << endl;
            }
            cout << itog_matr[i][j] << " ";
        }
    cout << endl;
}


int main() {
    int i, j, k, point;
    float matr1[N][N];
    float matr2[N][N];
    float itog_matr[N][N];
    while (true) {
        cout << "1. umnojenie" << endl;
        cout << "2. slojenie" << endl;
        cout << "3. vichitanie" << endl;
        cin >> k;
        switch (k)
        {
        case(1):
            cout << "First Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr1[i][j];
            cout << "Second Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr2[i][j];
            umnojenie(matr1, matr2, itog_matr);
            cout << "Result:" << endl;
            vivod(itog_matr);
            break;
        case(2):
            cout << "First Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr1[i][j];
            cout << "Second Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr2[i][j];
            slojenie(matr1, matr2, itog_matr);
            cout << "Result:" << endl;
            vivod(itog_matr);
            break;
        case(3):
            cout << "First Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr1[i][j];
            cout << "Second Matrix 5x5:" << endl;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    cin >> matr2[i][j];
            vichitanie(matr1, matr2, itog_matr);
            cout << "Result:" << endl;
            vivod(itog_matr);
            break;
        default:
            cout << "Error!" << endl;
            break;
        }

        Sleep(1000);
        cout << "One more time?" << endl;
        cout << "1. yes" << endl;
        cout << "2. no" << endl;
        cin >> point;
        if (point != 1) break;
    }
}
