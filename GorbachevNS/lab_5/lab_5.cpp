#include <iostream>
#include <windows.h>

using namespace std;
int const sizeN = 3;

void my_powmultiplications(double MatrixA[sizeN][sizeN], double MatrixB[sizeN][sizeN], double MatrixC[sizeN][sizeN])
{
    for (int i = 0; i < sizeN; i++)
        for (int j = 0; j < sizeN; j++)
        {
            MatrixC[i][j] = 0;
            for (int k = 0; k < sizeN; k++)
                MatrixC[i][j] += MatrixA[i][k] * MatrixB[k][j];
        }
}
void my_addition(double MatrixA[sizeN][sizeN], double MatrixB[sizeN][sizeN], double MatrixC[sizeN][sizeN]) {
    for (int i = 0; i < sizeN; i++)
        for (int j = 0; j < sizeN; j++)
            MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];
}

void my_subtraction(double MatrixA[sizeN][sizeN], double MatrixB[sizeN][sizeN], double MatrixC[sizeN][sizeN]) {
    for (int i = 0; i < sizeN; i++)
        for (int j = 0; j < sizeN; j++)
            MatrixC[i][j] = MatrixA[i][j] - MatrixB[i][j];
}
void my_cout(double MatrixC[sizeN][sizeN]) {

    for (int i = 0; i < sizeN; i++)
        for (int j = 0; j < sizeN; j++)
        {
            if (j % 3 == 0) {
                cout << endl;
            }
            cout << MatrixC[i][j] << " ";
        }
}

int main()
{
    while (true) {
        int choice_p;
        cout << "Selected action:\n 1)powmultiplications.\n 2)addition.\n 3)subtraction.\n ";
        cin >> choice_p;
        enum choice { powmultiplications = 1, addition, subtraction };
        switch (choice_p)
        {
        case(powmultiplications):
            int i, j, k;
            double MatrixA[sizeN][sizeN];
            double MatrixB[sizeN][sizeN];
            double MatrixC[sizeN][sizeN];
            cout << "Matrix A:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixA[i][j];
            cout << "Matrix B:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixB[i][j];
            my_powmultiplications(MatrixA, MatrixB, MatrixC);
            cout << "Matrix C=AB:\n";
            my_cout(MatrixC);
            break;
        case(addition):
            cout << "Matrix A:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixA[i][j];
            cout << "Matrix B:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixB[i][j];
            my_addition(MatrixA, MatrixB, MatrixC);
            cout << "Matrix C=A+B:\n";
            my_cout(MatrixC);
            break;
        case(subtraction):
            cout << "Matrix A:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixA[i][j];
            cout << "Matrix B:\n";
            for (i = 0; i < sizeN; i++)
                for (j = 0; j < sizeN; j++)
                    cin >> MatrixB[i][j];
            my_subtraction(MatrixA, MatrixB, MatrixC);
            cout << "Matrix C=A-B:\n";
            my_cout(MatrixC);
            break;
        default:
            system("cls");
            cout << "ERROR\n";
            break;
        }
        int i;
        Sleep(5000);
        system("cls");
        cout << "Reboot\n 1)yes\n 2)no\n";
        cin >> i;
        if (i != 1) {
            break;
        }
    }
}
