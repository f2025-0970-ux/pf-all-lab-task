#include <iostream>
using namespace std;
int main() {
    int row1, col1, r2, c2;
    cout << "please Enter  the number of rows of Matrix 1:";
    cin >> row1 ;
    cout<< "please Enter the number of coloumns of Matrix 1:";
    cin >> col1 ;


    cout << "Enter rows of Matrix 2:";
    cin >> r2 ;
    cout<< "Enter coloumns of Matrix 2:";
    cin >> c2 ;

    if (col1 != r2) {
        cout << "Matrix multiplication is not possible  ";
        return 0;
    }

    int a[10][10],b[10][10],c[20][20]={0};
    cout << "Enter 1st:"<<endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> a[i][j];
    cout << "Enter 2nd:"<<endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < c2; j++) {

            for (int k = 0; k < col1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << endl<<" end result matrix  "<<endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < c2; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}